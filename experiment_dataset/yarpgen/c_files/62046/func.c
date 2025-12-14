/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62046
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned long long int) 324822499);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (short)4625));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0 - 1] [i_3] [i_4] [i_4 + 1] = ((_Bool) 2073528630U);
                                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50382))) >= (11994417201707625584ULL)))) : (((/* implicit */int) ((_Bool) 324822499)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2221438665U)) ? (((/* implicit */unsigned long long int) 2221438661U)) : (var_5)))) ? (min((3920789860982155191ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned long long int) 2073528630U)) : (((((/* implicit */_Bool) 109471843771430811LL)) ? (3920789860982155191ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
            }
        } 
    } 
}
