/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94581
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
    var_12 = var_9;
    var_13 = ((/* implicit */unsigned int) (+(min((max((var_2), (var_4))), (((/* implicit */unsigned long long int) var_9))))));
    var_14 = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */unsigned long long int) (~((~((-(arr_4 [i_0])))))));
                            var_15 += ((/* implicit */long long int) ((var_4) >> (((((unsigned int) arr_8 [i_0] [i_0] [i_0])) - (41947U)))));
                            arr_11 [i_0] = ((/* implicit */unsigned int) -549525280);
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_0] = min((((arr_5 [i_1] [i_1] [i_0]) & (arr_5 [i_1] [i_0] [i_0]))), (arr_5 [i_0] [i_1] [i_1]));
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            arr_19 [i_5] [i_0] [i_1] = ((/* implicit */unsigned short) ((signed char) arr_5 [i_5] [0LL] [i_5]));
                            arr_20 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) max((18446744073709551615ULL), (18296674910674402323ULL))))) * (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 18296674910674402323ULL)))))));
                            arr_21 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_13 [i_4 + 3])) ? (((/* implicit */unsigned long long int) arr_15 [i_5] [i_4] [6ULL])) : (150069163035149292ULL))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) var_9))))), (11888972635703252026ULL)))));
                            arr_22 [i_5] [i_0] [13U] [13U] [i_0] [10ULL] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)14)) ? (3201657364U) : (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) var_8))))))) : (((((arr_14 [i_0] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 11929545977575092180ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_11))) : (((/* implicit */unsigned long long int) max((arr_15 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0]))))))));
                        }
                    } 
                } 
                arr_23 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (signed char)-45))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [13LL] [i_0] [13LL] [13LL] [13LL] [i_1])) && (((/* implicit */_Bool) 1093309934U)))))))) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (((arr_3 [i_0] [i_0]) / (arr_3 [i_0] [i_0])))));
                arr_24 [i_0] = ((/* implicit */long long int) (signed char)14);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 3; i_6 < 15; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_32 [i_8] [i_7] [i_8] [i_7] [i_8]);
                            arr_35 [i_6] [15ULL] [i_9] [i_7] = ((/* implicit */unsigned long long int) var_10);
                            arr_36 [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned long long int) var_0)), (((var_11) + (arr_31 [i_7]))))) : (var_4)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    for (signed char i_11 = 1; i_11 < 15; i_11 += 3) 
                    {
                        {
                            arr_43 [i_6] [i_6] [i_7] [i_10] [3ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_32 [9U] [i_11 - 1] [i_10] [i_7] [(signed char)15]) != (1578028U)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_2)))))))));
                            arr_44 [i_7] [i_7] [i_7] [i_10] [i_7] = ((((/* implicit */_Bool) min((arr_40 [i_7] [1ULL] [7ULL] [i_7] [i_10] [i_6 + 1]), (6463420209552087736ULL)))) ? (((arr_40 [i_7] [i_7] [i_7] [i_11] [i_7] [i_10]) - (arr_40 [i_7] [i_6 - 2] [i_6 - 2] [13ULL] [i_10] [i_11]))) : (((/* implicit */unsigned long long int) 1359188267U)));
                            arr_45 [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-19)) > (((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_32 [i_6] [(signed char)5] [(signed char)5] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10])))))) % (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(signed char)10])))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) (-(18296674910674402327ULL)));
            }
        } 
    } 
}
