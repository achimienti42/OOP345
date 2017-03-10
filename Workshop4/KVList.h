#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <utility>

	template <typename K, typename V, int N>

	class KVList{
		
		size_t count;
		K k[N];
		V v[N];

	public:

		KVList() : count(0){

		}

		size_t size() const {
			return count;
		}


		const K& key(int i) const{
			if (i >= 0 && i < N) return k[i];
		}

		const V& value(int i) const{
			if (i >= 0 && i < N) return v[i];
		}

		KVList& add(const K& kk, const V& vv){
			if (count < N) {
				k[count] = kk;
				v[count] = vv;
				count++;
			}
			return *this;
		}

		int find(const K& kk) const{
			for (size_t i = 0; i < count; i++){
				if (k[i] == kk){ 
					return i;
				}
			}
			return 0;
		}

		KVList& replace(int i, const K& kk, const V& vv){
			if (i >= 0 && i < count){
				k[i] = kk;
				v[i] = vv;
			}
			return *this;
		}





	};

