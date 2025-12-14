/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/938
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) arr_0 [i_0 - 2] [i_0 - 3]);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_16 &= ((/* implicit */unsigned short) var_14);
            var_17 = ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_0 [(unsigned char)12] [(unsigned char)12]));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_1] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_1] [i_0 + 1]))));
        }
        var_19 = ((/* implicit */_Bool) (-(arr_0 [i_0 - 3] [i_0])));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_20 += ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_4 [i_2] [8U])) : (arr_6 [i_2]))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (arr_4 [i_2 - 1] [i_2 - 1]))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)25401)) | (((/* implicit */int) arr_5 [i_2 - 1]))))))) ? (((((/* implicit */long long int) min((var_12), (((/* implicit */int) var_13))))) & (((var_5) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [(short)8]))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) & (var_14)))) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_4 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))))) : (((/* implicit */long long int) max((var_3), (var_1))))))));
    }
    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) max(((signed char)0), ((signed char)111))))));
}
