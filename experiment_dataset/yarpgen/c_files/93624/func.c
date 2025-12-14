/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93624
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((var_17), (((/* implicit */unsigned long long int) var_8)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)108)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((var_7) << (((((/* implicit */int) var_3)) - (30348)))))));
    var_21 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_7) | (var_7)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_12)))) : (((/* implicit */int) max((var_2), ((_Bool)1)))))) * (((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56334)) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((var_2) && (((/* implicit */_Bool) var_7)))))))));
    var_22 = ((/* implicit */int) max((var_5), (var_13)));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_24 = ((/* implicit */int) max((min((arr_0 [i_0 + 1]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [0LL] [i_1])) ^ (((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((/* implicit */unsigned int) (-2147483647 - 1)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 532085151)) || (((((/* implicit */_Bool) (unsigned short)48977)) || (((/* implicit */_Bool) (short)4093)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7286)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (max((2451474134U), (((/* implicit */unsigned int) arr_2 [i_3] [i_2])))))))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_9 [i_1] [i_3] [6LL] [i_2] [i_1] [i_0]))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_9 [i_0 - 1] [i_0] [(unsigned short)0] [i_0] [i_0] [(unsigned short)0]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-13837)))))) ^ (((unsigned long long int) (_Bool)1))))) || (((/* implicit */_Bool) min((arr_8 [i_0 - 1] [i_1]), (((/* implicit */unsigned char) var_0)))))));
                var_27 -= ((/* implicit */_Bool) ((var_8) ? ((-(((((/* implicit */_Bool) 1640793501)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_10 [i_1] [i_1] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [(signed char)16]))))) : ((-(arr_5 [i_0] [i_1] [i_0] [i_0]))))))));
                arr_12 [i_1] [i_1] [(unsigned short)4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0])) * (max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) var_8))))))));
            }
        } 
    } 
}
