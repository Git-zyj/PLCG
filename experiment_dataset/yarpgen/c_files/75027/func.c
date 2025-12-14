/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75027
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
    var_12 = ((/* implicit */long long int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_13 = (((_Bool)0) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_4)));
    var_14 ^= ((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)-8)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0 + 2] [i_0 + 1] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1])) * (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (212463746430150919ULL) : (((/* implicit */unsigned long long int) 621313362))))))));
                                var_15 = ((/* implicit */long long int) -864861653);
                            }
                        } 
                    } 
                } 
                var_16 ^= arr_9 [i_1] [i_1] [i_0] [i_1];
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_7))));
}
