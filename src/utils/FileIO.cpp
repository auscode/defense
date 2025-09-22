#include <fstream>
#include <string>
#include <vector>

namespace defense {
namespace utils {

class FileIO {
public:
    static void saveCSV(const std::string& filename,
                        const std::vector<std::pair<double,double>>& data) {
        std::ofstream out(filename);
        for (auto& p : data) {
            out << p.first << "," << p.second << "\n";
        }
    }
};

} // namespace utils
} // namespace defense
