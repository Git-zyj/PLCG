/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90385
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
    var_10 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_11 += ((/* implicit */signed char) (~((~(((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 4]))))));
                    arr_8 [i_0] [(unsigned char)7] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_2])) - (((/* implicit */int) arr_4 [(unsigned short)8] [(unsigned char)7])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 2] [i_0] [i_0])) && (((/* implicit */_Bool) arr_6 [i_0 - 2] [7ULL] [i_0] [(unsigned short)7]))))) : (((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [i_2] [i_0 - 1])) ? (((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) arr_3 [(unsigned short)3] [0])) - (25820))))) : ((~(((/* implicit */int) arr_3 [i_0 - 4] [i_1]))))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 4]) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2])) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [5ULL] [5ULL] [4U])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_7 [i_0] [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [0ULL] [0ULL] [(unsigned short)9] [(unsigned char)5]))))) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 3])))) : (((/* implicit */unsigned long long int) (~(arr_1 [i_0 + 2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) arr_2 [i_0] [i_1])) >> (((arr_0 [i_2]) - (3707908275U))))));
                                arr_14 [(unsigned char)3] [i_3] [(unsigned char)3] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_1] [i_2])) | (((/* implicit */int) arr_6 [8U] [i_0 + 2] [i_2] [i_2]))))) ? ((~(arr_11 [i_0 + 1] [(unsigned short)4] [i_3] [i_0 + 1] [i_0 - 3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)0] [i_0 + 2] [5LL] [i_3]))) ^ (arr_11 [i_0 + 1] [3ULL] [i_3] [i_0 - 4] [i_0 - 1]))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_9 [i_0 + 1] [(signed char)0] [i_0 + 1] [(_Bool)1]), (arr_5 [i_0 - 1] [i_0 - 4] [i_0 - 3])))) == (((/* implicit */int) arr_5 [i_0 - 4] [i_0 - 4] [i_0 - 2])))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [6] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_10 [i_0 + 1] [(_Bool)1] [i_0] [i_0 + 2])) : (((/* implicit */int) arr_10 [i_0] [i_0 + 2] [(_Bool)1] [i_0 - 3]))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (arr_13 [i_0] [i_0] [4LL] [i_3] [i_0] [i_0 - 4]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [3ULL] [3ULL] [3ULL])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_4])) / (((/* implicit */int) arr_10 [(signed char)4] [(signed char)4] [5ULL] [i_4]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)7] [3]))) & (arr_11 [i_0] [i_1] [i_3] [i_3] [i_4])))))));
                                arr_15 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) || (((/* implicit */_Bool) arr_13 [(unsigned short)5] [(unsigned short)5] [(signed char)4] [i_3] [i_4] [i_0 + 1]))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] = ((((((arr_5 [i_0 - 2] [7] [7]) ? (arr_12 [i_2] [6] [i_0] [i_1] [i_0] [i_0 - 4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [2ULL] [i_2] [(unsigned char)7] [2ULL]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [2] [2])))))) <= (((arr_12 [i_0 + 1] [i_0 + 2] [4] [i_0 + 2] [i_2] [i_2] [2U]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) ((arr_4 [7] [7]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0 - 2])))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 2]))) ^ (((((/* implicit */_Bool) arr_11 [i_0] [2ULL] [i_0] [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [7] [i_0 - 2])))))))));
    }
}
