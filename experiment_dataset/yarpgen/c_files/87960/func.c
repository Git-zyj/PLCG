/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87960
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)39147))));
                                arr_14 [i_0] [(short)6] [i_4] [i_3 + 1] [i_3 + 1] [i_4 + 1] [(short)6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_3] [15U]))));
                                arr_15 [i_4 + 1] [i_4] [i_2] [i_4] [(_Bool)1] = ((/* implicit */signed char) min((((/* implicit */int) arr_5 [(unsigned short)16] [i_1] [i_2])), (((((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) arr_12 [i_3] [3])) - (((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */_Bool) (((-((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_2])))))) * (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)53879)) : (((/* implicit */int) (short)-1))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((-(var_2))) : (((/* implicit */int) var_1))));
}
