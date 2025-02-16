std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) { // Correct: Loop condition changed to i < vec.size()
  std::cout << vec[i] << " ";
}
std::cout << std::endl; //This will now correctly print the elements of the vector