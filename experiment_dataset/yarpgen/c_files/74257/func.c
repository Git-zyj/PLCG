/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74257
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
    var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? ((-(var_7))) : (((/* implicit */unsigned long long int) var_0)))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) var_11)) : (min((((/* implicit */unsigned long long int) var_18)), (var_1)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_3))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((max(((+(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_8)))) + (((/* implicit */unsigned long long int) arr_7 [9] [9] [9] [9] [6ULL])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        arr_15 [i_0] [8LL] [i_0] [i_5] = ((/* implicit */unsigned int) ((arr_11 [6U] [6U] [6U] [6U]) ? (((/* implicit */int) arr_11 [10] [10] [10] [(signed char)8])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            var_23 ^= ((/* implicit */long long int) ((arr_11 [i_5 + 3] [i_5 + 2] [i_5 + 3] [i_5 - 1]) && (((/* implicit */_Bool) 0))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_5 + 2])) ? (arr_6 [i_5 + 1]) : (arr_6 [i_5 + 2])));
                            var_25 = ((/* implicit */long long int) ((arr_11 [12] [i_5 + 3] [i_5 + 3] [i_5 + 3]) || (((/* implicit */_Bool) ((-219855320) | (((/* implicit */int) arr_11 [8LL] [8LL] [i_1] [i_1])))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_19 [11U] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (arr_5 [i_1] [i_1] [i_1]) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [5LL] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (+(var_15)))) : (max((((/* implicit */unsigned long long int) 4)), (arr_5 [i_0] [i_0] [i_0])))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (288212783965667328LL))), ((~(var_4))))), (((/* implicit */long long int) max((((short) var_8)), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) == (var_8)))))))));
    var_29 += ((/* implicit */long long int) ((((/* implicit */long long int) var_9)) > (max((((/* implicit */long long int) (signed char)-118)), (max((((/* implicit */long long int) var_11)), (var_4)))))));
}
