/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76796
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
    var_13 = ((/* implicit */unsigned char) -903443439);
    var_14 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */long long int) var_1)))))) ^ (((long long int) ((var_7) + (var_1))))));
    var_15 = max((min((var_0), (max((((/* implicit */int) var_3)), (var_4))))), (((((/* implicit */int) var_8)) / ((+(-903443439))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_16 = arr_0 [i_0];
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */int) max((min((((((/* implicit */_Bool) arr_4 [1] [15LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (arr_6 [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [(unsigned char)20])) <= (1727189979)))))), (((/* implicit */long long int) arr_4 [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(18446744073709551615ULL))))));
                                var_19 *= ((/* implicit */unsigned char) var_9);
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) 18446744073709551615ULL))));
                                var_21 |= ((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_2] [i_4]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned char) var_12)))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [(unsigned char)20] [i_5] [i_6]);
                                var_24 = ((/* implicit */unsigned char) max((var_24), (var_8)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
