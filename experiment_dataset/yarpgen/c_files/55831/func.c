/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55831
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    var_19 = ((/* implicit */signed char) (((((~(((/* implicit */int) var_6)))) == ((+(((/* implicit */int) var_14)))))) ? ((~(-1650807211))) : (((/* implicit */int) max((((/* implicit */short) arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2])), (var_9))))));
                    var_20 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_6), (var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1650807213)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) || (((/* implicit */_Bool) var_3))));
                    var_21 = ((/* implicit */signed char) ((int) (+(((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1])))));
                    var_22 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1650807217)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))) : (arr_7 [i_0] [i_0] [i_1] [i_1])))))), ((~(((unsigned long long int) arr_0 [i_1]))))));
                }
                var_23 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) (signed char)14)))));
                var_24 = ((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_0] [i_0]);
                var_25 ^= ((/* implicit */unsigned char) arr_0 [i_0]);
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16)))) - (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_10))))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    var_27 = ((/* implicit */_Bool) ((var_0) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23163)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (unsigned short)23184)))))));
}
