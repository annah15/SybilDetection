import pandas as pd
import json

def main():
    # Replace 'file_path.csv' with the actual path to your CSV file
    file_path_csv = 'Twibot22/edge.csv'
    file_path_json = 'Twibot22/user.json'
    
    # Load the CSV file into a Pandas DataFrame
    #df = pd.read_csv(file_path_csv)

    with open(file_path_json, 'r') as json_file:
        json_data = json.load(json_file)

    #key = df[0,0]

    # Print the first 5 rows of the DataFrame
    print(json_data[300])

if __name__ == "__main__":
    main()