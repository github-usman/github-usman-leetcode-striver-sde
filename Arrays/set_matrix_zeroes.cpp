class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       
	int m = matrix.size();

	int k = matrix[0].size();
	int arr_i[m + 1];
	int arr_j[k + 1];
	for (int i = 0; i <m; i++)
		{
			arr_i[i] = 1;
		}

	for (int i = 0; i <k; i++)
		{
			arr_j[i] = 1;
		}
	for (int i = 0; i < m; i++)
	{
		int n = matrix[0].size();
		k = n;

		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] == 0)
			{
				arr_i[i] = 0;
				arr_j[j] = 0;
			}
		}
	}

	for (int i = 0; i <matrix.size(); i++)
	{
		if (arr_i[i] == 0)
		{

			for (int j = 0; j < matrix[i].size(); j++)
			{
				matrix[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < k; i++)
	{
		if (arr_j[i] == 0)
		{
			for (int j = 0; j < matrix.size(); j++)
			{
				matrix[j][i] = 0;
			}
		}
	}

  }
};