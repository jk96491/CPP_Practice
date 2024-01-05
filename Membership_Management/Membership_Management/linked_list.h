#pragma once
#include <iostream>
using namespace std;

namespace my_stl
{
	enum DATA_REMOVE_RESULT
	{
		SUCCESS = 0,
		NOT_FOUND,
		EMPTY
	};

	template <typename T>
	struct Data
	{
		T* data;
		Data<T>* pNext;
	};

	template <typename T>
	class LinkedList {
	private:
		Data<T>* pHead;
		Data<T>* pTail;
		Data<T>* pEtor;

	public:
		LinkedList()
		{
			pHead = nullptr;
			pTail = nullptr;
			pEtor = nullptr;
		}
		~LinkedList()
		{
			remove_all();

			pHead = nullptr;
			pTail = nullptr;
			pEtor = nullptr;
		}

		void add(T* data)
		{
			Data<T>* new_data = new Data<T>;
			new_data->data = data;

			if (pHead == nullptr)
				pHead = new_data;
			else
				pTail->pNext = new_data;

			pTail = new_data;
			pTail->pNext = nullptr;
		}

		DATA_REMOVE_RESULT remove(T* data)
		{
			if (pHead == nullptr)
				return DATA_REMOVE_RESULT::EMPTY;

			Data<T>* remove_data = nullptr;
			Data<T>* pCur = pHead;
			Data<T>* pPrev = pHead;

			while (pCur->pNext != nullptr)
			{
				if (pCur->data == data)
				{
					remove_data = pCur;
					break;
				}

				pPrev = pCur;
				pCur = pCur->pNext;
			}

			if (remove_data != nullptr)
			{
				pPrev->pNext = remove_data->pNext;
				delete remove_data;
				return DATA_REMOVE_RESULT::SUCCESS;
			}
			else
				return DATA_REMOVE_RESULT::NOT_FOUND;
		}

		void remove_all()
		{
			if (pHead == nullptr)
				return;

			Data<T>* pCur = pHead;
			Data<T>* pPrev = pHead;

			while (pCur->pNext != nullptr)
			{
				pCur = pCur->pNext;
				delete pPrev;
				pPrev = pCur;
			}

			pHead = nullptr;
			pTail = nullptr;
		}

		Data<T>* get_enumerator()
		{
			pEtor = pHead;
			return pEtor;
		}

		Data<T>* move_next()
		{
			pEtor = pEtor->pNext;
			return pEtor;
		}
		
	};
}
