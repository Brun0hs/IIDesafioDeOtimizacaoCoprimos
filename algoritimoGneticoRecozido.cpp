#include <bits/stdc++.h>
using namespace std;

const vector<int> items = { 42,69,67,57,93,90,38,36,45,42,33,79,27,57,44,84,86,92,46,38,85,33,82,73,49,70,59,23,57,72,74,69,33,42,28,46,30,64,29,74,41,49,55,98,80,32,25,38,82,30,35,39,57,84,62,50,55,27,30,36,20,78,47,26,45,41,58,98,91,96,73,84,37,93,91,43,73,85,81,79,71,80,76,83,41,78,70,23,42,87,43,84,60,55,49,78,73,62,36,44,94,69,32,96,70,84,58,78,25,80,58,66,83,24,98,60,42,43,43,39,97,57,81,62,75,81,23,43,50,38,60,58,70,88,36,90,37,45,45,39,44,53,70,24,82,81,47,97,35,65,74,68,49,55,52,94,95,29,99,20,22,25,49,46,98,59,98,60,23,72,33,98,80,95,78,57,67,53,47,53,36,38,92,30,80,32,97,39,80,72,55,41,60,67,53,65,95,20,66,78,98,47,100,85,53,53,67,27,22,61,43,52,76,64,61,29,30,46,79,66,27,79,98,90,22,75,57,67,36,70,99,48,43,45,71,100,88,48,27,39,38,100,60,42,20,69,24,23,92,32,84,36,65,84,34,68,64,33,69,27,47,21,85,88,59,61,50,53,37,75,64,84,74,57,83,28,31,97,61,36,46,37,96,80,53,51,68,90,64,81,66,67,80,37,92,67,64,31,94,45,80,28,76,29,64,38,48,40,29,44,81,35,51,48,67,24,46,38,76,22,30,67,45,41,29,41,79,21,25,90,62,34,73,50,79,66,59,42,90,79,70,66,80,35,62,98,97,37,32,75,91,91,48,26,23,32,100,46,29,26,29,26,83,82,92,95,87,63,57,100,63,65,81,46,42,95,90,80,53,27,84,40,22,97,20,73,63,95,46,42,47,40,26,88,49,24,92,87,68,95,34,82,84,43,54,73,66,32,62,48,99,90,86,28,25,25,89,67,96,35,33,70,40,59,32,94,34,86,35,45,25,76,80,42,91,44,91,97,60,29,45,37,61,54,78,56,74,74,45,21,96,37,75,100,58,84,85,56,54,71,52,79,43,35,27,70,31,47,35,26,30,97,90,80,58,60,73,46,71,39,42,98,27,21,71,71,78,76,57,24,91,84,35,25,77,96,97,89,30,86,81,39,75,66,85,36,60,56,50,75,75,37,87,95,21,99,42,57,31,37,42,40,69,91,45,97,84,90,52,43,68,53,37,65,79,73,92,87,20,20,73,42,52,20,24,76,71,72,21,21,82,92,78,87,50,41,31,73,89,59,88,40,71,69,45,57,49,68,84,32,69,77,92,98,57,39,32,23,99,91,48,21,70,43,73,69,65,57,67,28,84,42,61,92,82,34,74,55,60,69,26,25,67,77,67,79,47,84,50,21,87,83,44,88,78,53,78,37,47,52,32,88,85,82,55,41,60,66,78,72,34,64,20,60,100,62,80,34,68,38,32,32,37,82,98,90,58,97,56,34,70,39,56,69,36,20,99,84,53,27,88,53,42,45,42,31,54,60,55,27,36,31,39,91,45,97,26,80,41,56,70,97,48,87,23,32,75,100,97,51,78,78,21,72,72,79,46,30,48,27,95,48,67,58,46,92,21,82,91,40,56,24,94,44,91,92,81,24,84,44,83,37,98,85,88,95,29,35,100,55,48,27,20,66,62,52,88,59,97,91,81,81,86,48,43,60,72,88,90,48,38,60,53,55,90,48,55,57,59,25,51,22,43,31,52,89,96,58,63,27,46,43,30,44,71,66,64,28,83,88,42,92,95,36,24,62,44,82,59,31,96,44,61,78,72,62,76,65,22,41,27,85,80,72,100,29,27,43,83,32,33,53,95,99,20,23,72,50,50,27,89,53,75,81,34,27,69,48,84,37,69,54,51,49,49,54,100,55,45,83,61,96,91,37,53,76,50,66,70,87,92,35,53,95,47,56,55,86,32,99,83,88,41,63,77,60,66,53,79,81,96,34,99,47,74,87,44,77,52,99,69,64,94,38,69,61,98,40,84,89,49,64,53,41,34,85,35,55,61,68,100,75,98,36,44,57,24,60,45,48,60,94,71,70,64,62,93,20,69,37,63,61,26,54,89,46,54,50,32,71,62,40,26,59,62,27,60,50,74,34,40,70,56,23,66,57,43,45,65,25,82,82,37,66,47,44,94,23,24,51,100,22,25,51,95,58,97,30,79,23,53,80,20,65,64,21,26,100,81,98,70,85,92,97,86,71,91,29,63,34,67,23,33,89,94,47,100,37,40,58};
const int binCapacity = 150; // Capacidade máxima da caixa
const int popSize = 100; // Tamanho da população
const int generations = 100; // Número de gerações
const double temp_inicial = 100; // Temperatura inicial para recozimento
const double temp_resfriamento = 0.95; // Taxa de resfriamento

int avaliarSolucao(const vector<vector<int>>& solucao) {
    int bad = 0;
    for (const auto& caixa : solucao) {
        int medidor = accumulate(caixa.begin(), caixa.end(), 0);
        if (medidor > binCapacity) {
            bad = bad + 10; // Penaliza apenas se a caixa excede a capacidade
        }
        bad++;
    }
    return bad;
}

vector<vector<vector<int>>> startPopulationMaker() {
    vector<vector<vector<int>>> population;

    random_device rd;
    auto seed = rd() ^ chrono::steady_clock::now().time_since_epoch().count();
    mt19937 gen(seed);

    for (int i = 0; i < popSize; i++) {
        vector<vector<int>> bins; // Bins para o indivíduo atual
        vector<int> itemsShuffled = items; // Cópia dos itens para embaralhamento
        shuffle(itemsShuffled.begin(), itemsShuffled.end(), gen); // Embaralha os itens

        for (int item : itemsShuffled) {
            bool itemPlaced = false;
            for (auto& bin : bins) {
                // Tenta colocar o item em uma caixa existente
                if (accumulate(bin.begin(), bin.end(), 0) + item <= binCapacity) {
                    bin.push_back(item);
                    itemPlaced = true;
                    break; // Item colocado, sai do loop
                }
            }
            // Se não conseguimos colocar o item em nenhuma caixa existente, cria uma nova caixa
            if (!itemPlaced) {
                bins.push_back({item});
            }
        }

        population.push_back(bins); // Adiciona o indivíduo à população
    }

    return population;
}

void mutacao(vector<vector<int>>& novaSolucao) {
    if (novaSolucao.size() < 2) return; // Evita erro se houver menos de 2 caixas

    random_device rd;
    auto seed = rd() ^ chrono::steady_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<int> dist(0, novaSolucao.size() - 1);

    int indx1 = dist(gen);
    int indx2 = dist(gen);
    swap(novaSolucao[indx1], novaSolucao[indx2]);
}

vector<vector<int>> recozimento_simulado(vector<vector<int>> individuo) {
    vector<vector<int>> solucao_atual = individuo;
    vector<vector<int>> melhorSolucao = individuo;
    double temperatura = temp_inicial;

    while (temperatura > 1) {
        vector<vector<int>> novaSolucao = solucao_atual;
        mutacao(novaSolucao);
        int fitness_atual = avaliarSolucao(solucao_atual);
        int fitness_nova = avaliarSolucao(novaSolucao);
        int delta_fitness = fitness_nova - fitness_atual;

        random_device rd;
        auto seed = rd() ^ chrono::steady_clock::now().time_since_epoch().count();
        mt19937 gen(seed);

        if (delta_fitness < 0 || (uniform_real_distribution<double>(0.0, 1.0)(gen) < exp(-delta_fitness / temperatura))) {
            solucao_atual = novaSolucao;
            if (fitness_nova < avaliarSolucao(melhorSolucao)) {
                melhorSolucao = novaSolucao;
            }
        }
        temperatura *= temp_resfriamento;
    }
    return melhorSolucao;
}

vector<vector<int>> geneticAlgoritmAnnealing() {
    vector<vector<vector<int>>> pop = startPopulationMaker();
    for (int gen = 0; gen < generations; gen++) {
        vector<pair<vector<vector<int>>, int>> solucaoComFitness;

        for (const auto& individuo : pop) {
            solucaoComFitness.push_back({individuo, avaliarSolucao(individuo)});
        }

        sort(solucaoComFitness.begin(), solucaoComFitness.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });

        vector<pair<vector<vector<int>>, int>> newpop;

        for (unsigned ind = 0; ind < newpop.size(); ind++) {
            random_device rd;
            auto seed = rd() ^ chrono::steady_clock::now().time_since_epoch().count();
            mt19937 gen(seed);
            if (uniform_real_distribution<double>(0.0, 1.0)(gen) < 0.1) {
                newpop[ind].first = recozimento_simulado(newpop[ind].first);
            }
        }

        for (unsigned tp = 0; tp < newpop.size(); tp++) {
            pop[tp] = newpop[tp].first;
        }
    }

    vector<vector<int>> melhor_solucao = pop[0];
    for (const auto& individuo : pop) {
        if (avaliarSolucao(individuo) < avaliarSolucao(melhor_solucao)) {
            melhor_solucao = individuo;
        }
    }
    return melhor_solucao;
}

void printSolution(const vector<vector<int>>& solution) {
    for (size_t i = 0; i < solution.size(); ++i) {
        cout << "Caixa " << i + 1 << ": ";
        for (int item : solution[i]) {
            cout << item << " ";
        }
        cout << " (Total: " << accumulate(solution[i].begin(), solution[i].end(), 0) << ")" << endl;
    }
}

int main() {
    double tempoi = time(NULL);
    vector<vector<int>> solution = geneticAlgoritmAnnealing();
    cout << "Solucao final (Individuos e suas caixas):\n";
    printSolution(solution);  // Imprime a solução final
    cout << "total de caixas: " << solution.size() << endl;
    double tempof = time(NULL);
    cout << "tempo: " << tempof - tempoi << " segundos" << endl;

    return 0;
}
