import pandas as pd

# Create a DataFrame
df = pd.DataFrame({'A': [1, 2], 'B': [3, 4]})

# Print the DataFrame
print(df)

# Print the column means
print(df.mean(axis=0))

# Print the column standard deviations
print(df.std(axis=0))

# Print the correlation matrix
print(df.corr())