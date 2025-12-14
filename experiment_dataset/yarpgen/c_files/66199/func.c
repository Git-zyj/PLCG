/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66199
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
    var_19 = ((long long int) var_18);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) arr_3 [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551594ULL))) == (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0] [i_1] [i_3])))));
                                arr_14 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) arr_10 [i_1])), (var_2))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (51539607552LL)))))) ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                                var_21 = ((unsigned int) var_17);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) min((((long long int) arr_6 [i_1] [i_1])), (((/* implicit */long long int) arr_6 [i_0] [i_1]))));
                }
            } 
        } 
    } 
}
