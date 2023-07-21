#pragma once

#include <vector>
#include <string>

class SybilWalk
{
private: 
    double eps; // Clusteringparameter
    int T;
    std::string csv_file; // Input File mit Datenpunkten und Labeln
    std::string out_file; // Output File
    std::vector<std::vector<size_t>> neighbor_list; //edge list of Neighbors
    std::vector<size_t> sybils;
    std::vector<size_t> benign;
public:
    // kmeans(int k, std::string csv, std::string out);

    SybilWalk(std::vector<std::vector<size_t>> neighbor_list, double eps, int T, std::vector<size_t> sybils, std::vector<size_t> benign, std::string in, std::string out);

    double distance(size_t u, size_t v);

    bool is_within_threshold(size_t u, size_t v);

    void augment_graph();

    bool perform_walk(int start);
    // writes cluster to out_file
    void to_csv(int& err);

    ~SybilWalk();
};


