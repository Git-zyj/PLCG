/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81222
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
    var_17 = ((/* implicit */long long int) max((((unsigned long long int) ((long long int) 1702658948U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) var_3)) ? (17893191750266649933ULL) : (((/* implicit */unsigned long long int) var_14))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((((/* implicit */_Bool) (short)-20584)) ? (1761001262U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_13 [i_1] [0U] [i_1 - 1] [4U] [i_1 + 2])) : (((/* implicit */int) arr_13 [i_1] [(short)2] [i_1 + 3] [i_1 + 3] [i_1 + 2]))))) ? (((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-15250), (((/* implicit */short) (unsigned char)172)))))) : (var_14))) : (((/* implicit */long long int) ((((/* implicit */int) (short)3)) ^ (((/* implicit */int) (short)10))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_0)), (arr_3 [i_4 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) / (1386198210U)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) min((((arr_0 [i_0 - 2] [i_0 - 1]) ? (arr_3 [i_0 - 2]) : (((/* implicit */unsigned long long int) 1444691573U)))), (min((((/* implicit */unsigned long long int) var_3)), (arr_1 [i_0])))));
        arr_14 [i_0] = ((/* implicit */short) ((_Bool) max((2908769086U), (max((1386198227U), (((/* implicit */unsigned int) arr_13 [8LL] [7ULL] [7ULL] [8LL] [7ULL])))))));
    }
    var_21 = ((/* implicit */_Bool) (((~(var_8))) & (var_16)));
    var_22 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_9)))) ? (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) < (var_14))))) : (855973153U))))));
}
