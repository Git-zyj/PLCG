/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92472
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
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (!(var_8))))) ? (((/* implicit */int) ((var_11) != (max((3115565129U), (((/* implicit */unsigned int) var_2))))))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 1479982662U))))) : (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2045391265U)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) arr_4 [i_0]))))) < (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_2 + 3] [i_3] [i_3 + 4])) ? (arr_9 [i_0] [i_1] [i_2 + 2] [i_3] [i_3 - 1]) : (arr_9 [i_0] [i_1] [i_2 + 3] [i_0] [i_3 + 1]))) : (max(((~(arr_9 [i_0] [i_1] [i_1] [i_1] [i_0]))), (((/* implicit */unsigned long long int) ((signed char) arr_4 [i_2])))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */long long int) arr_4 [i_0])) ^ (((long long int) (_Bool)1))))));
                            arr_11 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_1 [i_2 + 3] [i_0])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    var_23 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 6860752298188262412ULL)) && (((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) (+(arr_1 [i_0] [i_1]))))));
                    arr_14 [(unsigned char)10] [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_3 [i_0]))) & (arr_3 [i_0])));
                    arr_15 [i_0] [(signed char)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (arr_6 [i_1 + 2]) : (arr_6 [i_1 - 1])));
                }
                for (unsigned char i_5 = 4; i_5 < 22; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) > (((/* implicit */int) arr_7 [i_0] [i_1] [i_5]))))), (arr_9 [i_0] [6ULL] [6ULL] [i_0] [i_1 - 2]))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_25 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_0] [i_5 - 1] [i_5] [2LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (arr_10 [22] [i_5 - 1] [i_7] [i_7]))) != (((/* implicit */long long int) min((((/* implicit */int) (signed char)15)), (arr_4 [i_1 + 2]))))));
                                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_0])) * (18446744073709551613ULL)))) ? (arr_13 [i_7] [i_6] [i_5] [i_1]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (var_11)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_1 + 3] [i_1 + 3] [i_6]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_21 [15U])))) : (arr_0 [i_6]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((signed char) ((var_15) ? (min((var_11), (var_4))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1))))));
}
