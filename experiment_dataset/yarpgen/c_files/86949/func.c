/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86949
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))))))));
    var_20 *= ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_13)) & (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_9))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)705)) : (((/* implicit */int) (_Bool)1))));
                arr_4 [(short)17] [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_3 [(unsigned char)20] [7U] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_1])))))), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_1]))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 - 1])) * (((/* implicit */int) arr_2 [i_0 + 1]))))) <= (max((((var_13) ? (arr_0 [i_0]) : (var_3))), (((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0]))))));
                var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35426)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [1U])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17886430441033954497ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)147))))))))));
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (_Bool)1))) - (((/* implicit */int) (unsigned char)237))));
            }
        } 
    } 
}
