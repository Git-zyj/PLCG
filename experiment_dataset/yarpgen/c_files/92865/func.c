/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92865
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] [(unsigned short)20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (max((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))))) ? (min(((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) - (198))))), (((/* implicit */long long int) var_10)))) : (((long long int) (~(((/* implicit */int) arr_0 [(short)0])))))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (short)18404))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        arr_15 [i_1] [4LL] [i_4] [i_4] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_16))))) : (((-6646081354704193197LL) | (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_4] [i_2] [2LL] [i_4])) + (2147483647))) >> (((((((/* implicit */int) var_11)) | (((/* implicit */int) arr_8 [i_1] [i_4])))) - (8613)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)30)), (arr_12 [0U] [i_2])))) | (((/* implicit */int) arr_6 [i_1] [i_3]))))));
                        arr_16 [(unsigned char)0] [i_2] [(signed char)2] [8LL] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) - (0U)))) : (arr_4 [8ULL]))), (((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (arr_4 [10ULL]) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)16), (((/* implicit */signed char) arr_9 [6ULL] [(signed char)2]))))))))));
                        arr_17 [(unsigned char)8] [i_2] [(unsigned short)8] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_9 [i_3] [i_2]) ? (((/* implicit */int) arr_2 [(signed char)12] [(signed char)12])) : (((/* implicit */int) var_13))))) | (arr_1 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_2]))))) : (((/* implicit */int) arr_11 [i_1] [i_2] [6U] [i_4]))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [(short)11] [i_2] [(unsigned short)10] [(short)6])) ? (((((/* implicit */_Bool) arr_12 [i_1] [7ULL])) ? (((/* implicit */int) arr_13 [(unsigned short)3] [i_1] [i_2] [(unsigned short)11] [(unsigned char)4] [(short)7])) : (((((/* implicit */int) var_12)) | (((/* implicit */int) arr_10 [i_2] [i_3])))))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_1])) < (((/* implicit */int) arr_14 [i_1])))))));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) | (((/* implicit */int) ((unsigned char) var_2))))) | (((/* implicit */int) var_17))));
        var_24 = ((/* implicit */unsigned short) max(((+(arr_7 [i_1]))), (((/* implicit */unsigned long long int) ((arr_7 [i_1]) <= (arr_7 [i_1]))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4294967295U)))) | (arr_4 [i_1])));
    }
    var_26 += ((/* implicit */unsigned long long int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
