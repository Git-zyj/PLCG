/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74665
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
    var_17 = ((/* implicit */long long int) var_14);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [(unsigned char)8] [i_2] [(_Bool)1] &= ((/* implicit */unsigned char) (+(((int) (signed char)99))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_3] [i_4] |= ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_2] [i_3] [(short)15])))) * (((unsigned int) 2113929216U)))), (((/* implicit */unsigned int) ((((unsigned long long int) 5631281093371000159LL)) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2181038080U)))))))));
                                arr_17 [i_0 - 1] [0LL] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((long long int) (signed char)-112));
                            }
                        } 
                    } 
                    arr_18 [12LL] [12LL] [i_0] [i_2] = ((/* implicit */unsigned char) ((_Bool) (unsigned short)28286));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_0] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_5 + 1] [i_5 + 1] [i_0] [i_0] [i_0 + 1]))) : (arr_21 [i_0 - 1] [i_5 + 1] [i_2] [i_2] [i_0])))) ? (((((/* implicit */_Bool) arr_14 [(signed char)20] [i_5 + 1] [(signed char)20] [i_5] [(unsigned short)12])) ? (arr_21 [(_Bool)1] [i_5 + 1] [i_2] [i_5 + 1] [i_0]) : (arr_2 [i_0] [i_5 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_5 + 1] [i_2] [i_5 + 1] [i_6])) ? (((/* implicit */int) arr_22 [i_0] [i_5 + 1] [i_5 + 1] [1U] [i_6] [i_0 - 2])) : (((/* implicit */int) arr_22 [i_0] [i_5 + 1] [i_1] [i_5 + 1] [i_6] [i_0 + 2]))))));
                                arr_24 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_5 + 1] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_0] [i_2]))))))), (max((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_0] [i_6])) ? (arr_5 [i_0] [(unsigned short)13] [(unsigned char)0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))), (((((/* implicit */_Bool) 2113929216U)) ? (-4100414409676958724LL) : (arr_2 [i_0] [i_6])))))));
                                arr_25 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2181038080U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (4100414409676958712LL)));
                                arr_26 [i_6] [i_1] [(signed char)4] &= ((/* implicit */_Bool) max((((arr_9 [i_0 + 1] [i_0 - 1] [(signed char)21] [i_5 + 1]) ? (((/* implicit */int) arr_9 [i_0 + 1] [(unsigned char)0] [i_0 - 2] [i_5])) : (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2] [i_2] [i_6])))), (((/* implicit */int) (!(arr_9 [i_0 - 2] [i_0 - 2] [i_5 + 1] [i_6]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
