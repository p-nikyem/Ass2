#include "ReferenceManager.h"
ReferenceManager::ReferenceManager() {

};
ReferenceManager::ReferenceManager(int capacity) {
	ReferenceManager* storage;//= new ReferenceManager[capacity];
};
bool ReferenceManager::add(Reference& reference) {
	if (size < capacity) {

		storage[size] = reference; //L'erreur est ici
		size++;
		return true;
	}
	else {
		return false;
		cout << "Limit exceeded";
	}
};
int ReferenceManager::get(int pos) {

};
bool ReferenceManager::Delete(int pos) {

};
bool ReferenceManager::search(int id) {

};
