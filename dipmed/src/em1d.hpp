#ifndef INC_em1d_hpp
#define INC_em1d_hpp

#include "IO.hpp"

class em1d : public IO
{    
     public:
//           /******** Members ***************************************************/
//           int nsteps;    // Number of time steps
//           int step;      // step size
//           int ncell;     // Number of cell
//           
//           int m2start;    // Cell where the medium starts
//           int m2stop;     // Cell where the medium stops
//           double epsilon; // Medium relative index
//           
//           double dx;         // Cell size
//           double time_scale; // time scale
//           double dt;         // Time increment
//           
//           double t0;         // Center of the gaussian pulse in time steps
//           double spread;     // 1/e width of the gaussian pulse
//           double freq_in;    // Carrier frequency
//           
//           std::string input_file;
//           std::string output_dir;
//           
//           int screenout;     // Period for screen output
//           int fileout;       // Period for file output
//           
          /******** Member functions ******************************************/
          em1d(int argc, char **argv):IO(argc,argv){};
//           void copy_input_file();
//           void read_input_file();
//           void write_field_to_file(const int n, const double *ex, 
//                                     const double *hy);
};

#endif // INC_em1d_hpp