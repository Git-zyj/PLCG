/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99790
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | (((arr_4 [i_0 - 1]) / (((((/* implicit */_Bool) arr_3 [i_0] [14U])) ? (arr_1 [i_1]) : (arr_1 [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) 0ULL)) ? (3572736404U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)504))))))) >> (((arr_4 [i_1]) - (17681276889072553733ULL)))));
                            arr_9 [i_0 - 1] [i_3] |= ((/* implicit */unsigned short) arr_5 [i_0]);
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_1)))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(signed char)5])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_6 [(signed char)16] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_2))))) : (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) var_14)))))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0] [i_0 - 1])) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))) : ((-(var_13)))));
            }
        } 
    } 
    var_23 &= ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))));
}
