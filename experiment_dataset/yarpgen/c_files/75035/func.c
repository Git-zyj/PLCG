/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75035
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((long long int) var_0)) * (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
    var_16 = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) ((signed char) var_10))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) (_Bool)1);
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_4 [12U] [i_1] [i_0])))), (((((/* implicit */int) arr_4 [(short)20] [i_1] [2ULL])) % (((/* implicit */int) var_2)))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (arr_1 [i_1])));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((/* implicit */int) var_10)))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (arr_1 [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                    var_21 = ((unsigned int) (unsigned short)0);
                    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)0))));
                }
                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_0]))) : (var_4))) != (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */short) arr_0 [i_0]))))))));
            }
        } 
    } 
}
