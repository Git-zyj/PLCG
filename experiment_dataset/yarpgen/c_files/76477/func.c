/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76477
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
    var_17 |= ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */unsigned int) max((var_3), (((/* implicit */long long int) ((short) arr_3 [i_0])))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (arr_0 [i_1 + 1])));
                arr_5 [i_1] = ((/* implicit */signed char) max((min((((/* implicit */long long int) arr_4 [i_1])), (var_3))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1 + 1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_1 - 1] [i_3 - 1] [i_1]) ^ (arr_7 [i_1 + 1] [i_3 + 1] [i_1])))) ? (arr_7 [i_1 - 1] [i_3 + 1] [i_1]) : (((arr_7 [i_1 - 1] [i_3 + 1] [i_1]) & (var_6)))));
                            var_20 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_1 + 1] [i_3 + 1]) < (arr_9 [i_1 + 1] [i_3 + 1]))))) + (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-46)), (arr_7 [i_0] [i_0] [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) : (arr_7 [i_0] [i_1] [i_2])))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_11))));
                            arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_1 - 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_2)));
    var_24 = ((/* implicit */long long int) max((var_24), (var_13)));
}
