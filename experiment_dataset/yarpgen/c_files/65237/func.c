/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65237
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_3 [20LL] = ((/* implicit */signed char) arr_1 [i_0 + 1]);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            arr_7 [i_0 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) || (((/* implicit */_Bool) arr_0 [i_1 - 2])))))) % (arr_0 [i_1 - 1])));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_6 [i_1 + 1] [i_0] [(_Bool)1]))));
            var_23 = ((/* implicit */short) ((((arr_0 [i_0 + 2]) << (((((/* implicit */int) arr_2 [i_0 + 1] [i_1 - 1])) - (96))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) < (((/* implicit */int) ((arr_0 [(unsigned char)13]) < (((/* implicit */unsigned long long int) arr_5 [23] [15ULL])))))))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [18] [i_0])) - (((((((/* implicit */int) arr_4 [i_1] [i_0])) << (((arr_1 [6]) + (632437971))))) << (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 2]))))));
        }
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            arr_11 [5LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 + 2])) || (arr_9 [i_0] [i_2 + 1])));
            var_25 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])) ^ (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 3])))) << (((((((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1])) & (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])))) - (117)))));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2] [i_2 + 1]))) == (arr_5 [i_2] [i_0]))))));
        }
        for (unsigned int i_3 = 3; i_3 < 21; i_3 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 2]))) >= (arr_5 [i_0 + 2] [i_0 + 3])))) != (((/* implicit */int) ((80705558) != (((/* implicit */int) (unsigned short)7168)))))));
            arr_14 [(short)7] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 + 2] [i_3 + 1])) | (((((/* implicit */int) arr_13 [i_0 + 3] [i_0 + 3] [i_0 - 1])) * (((/* implicit */int) arr_4 [i_3 + 3] [i_0 - 1]))))));
            arr_15 [i_0] = ((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_3 + 3]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 1] [i_3 - 3] [i_0 - 1])))));
            arr_16 [17U] [i_3] = ((/* implicit */int) arr_0 [i_0 - 1]);
        }
    }
    var_28 = var_0;
}
