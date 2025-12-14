/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95389
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
    var_13 ^= ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) var_8)))));
    var_14 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) != (((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))) % (((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) ((var_11) | (((/* implicit */long long int) var_10))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((max((arr_3 [i_0] [i_1] [i_1 + 1]), (arr_3 [i_1] [i_1] [i_1 + 1]))), ((~(arr_3 [i_1] [i_1] [i_1 + 2]))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && (((/* implicit */_Bool) arr_4 [i_0] [i_1]))))), ((-(((/* implicit */int) arr_4 [i_0] [i_0])))))) - (((((((((/* implicit */int) (signed char)-48)) | (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    var_16 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [10] [10] [i_2 + 2])))) > (((arr_3 [i_0] [i_1 + 1] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)4] [(short)4])))))))), (min((max((arr_3 [i_0] [4LL] [4LL]), (((/* implicit */long long int) arr_2 [i_0] [(signed char)2])))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [4U] [i_1] [i_2]))) | (arr_5 [(short)1] [(short)1]))))))));
                    var_17 = ((/* implicit */signed char) (+((+(((((/* implicit */unsigned long long int) arr_3 [i_0 + 3] [i_1 - 3] [i_2])) + (arr_8 [i_0] [i_1] [i_2] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((max((arr_10 [i_0] [i_1] [i_3] [i_4]), (((/* implicit */unsigned long long int) max((arr_7 [i_4] [i_3] [i_4]), (arr_9 [i_0] [i_1] [i_2] [i_0])))))) >= (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_2 [i_0 + 2] [i_4])))), (((/* implicit */int) arr_14 [i_4] [i_4])))))))));
                                arr_17 [i_0] [i_3] = ((/* implicit */int) ((signed char) max((min((arr_10 [i_0] [i_0] [i_2 + 3] [i_3]), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (arr_1 [i_0] [i_0]))));
                                arr_18 [i_0] [i_1 - 2] [i_2] [i_0] [i_4] [i_3] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(arr_5 [i_4] [i_3])))) ? (((arr_1 [i_2] [i_0]) & (arr_13 [i_0] [i_0] [i_0] [9LL] [i_0] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_0] [8U] [i_0])) + (12))))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_3] [i_4] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0]))))) == (((/* implicit */int) max((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1 - 2])))), (((/* implicit */unsigned short) min((((/* implicit */short) arr_9 [i_0] [i_1] [i_3] [i_0])), (arr_14 [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
