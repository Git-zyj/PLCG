/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76875
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_4 [i_0] [i_1]) ? (arr_2 [(signed char)7] [2U] [(signed char)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))))), (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1])))))))) ? (((arr_1 [i_0] [(_Bool)1]) ? (min((arr_2 [4LL] [i_0 + 1] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 2]))))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned char)8] [(signed char)3]))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1] [(signed char)7])) ? (arr_2 [i_0] [i_1 - 1] [i_0]) : (arr_2 [i_0] [4U] [1ULL])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_2 [i_1] [i_1] [0LL]))) : (max((arr_2 [10LL] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 3] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) : (((arr_1 [i_1 - 1] [i_1]) ? (arr_2 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [0ULL]))))))) : (arr_2 [i_1 - 1] [i_1 - 1] [i_0 + 1])));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_0]) ? (((/* implicit */int) min((arr_4 [i_0 + 1] [i_1 + 1]), (arr_4 [i_0 + 1] [i_1 - 1])))) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_14 [i_4] [i_4] [i_3] [9ULL] = arr_7 [i_2];
                    var_21 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [2ULL]))) : (arr_13 [i_3])))) ? (((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */unsigned long long int) arr_8 [i_2])) : (arr_13 [i_2]))) : (((((/* implicit */_Bool) arr_9 [i_4] [i_2])) ? (arr_13 [5ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_3] [i_3] [5ULL]))))))), (((((/* implicit */_Bool) arr_2 [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_9 [i_3] [(_Bool)1])) ? (arr_13 [i_4]) : (((/* implicit */unsigned long long int) arr_8 [i_4]))))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_11 [i_4] [(signed char)5] [i_2] [i_2]), (arr_11 [i_2] [i_2] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_3]))) : (((((/* implicit */_Bool) arr_2 [(unsigned char)4] [i_4] [i_4])) ? (arr_2 [i_2] [(unsigned short)5] [i_4]) : (arr_2 [i_2] [i_2] [i_2])))));
                }
            } 
        } 
    } 
}
