/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78373
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_10 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((long long int) (unsigned char)7))) & (var_8))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_3)), (arr_4 [i_1] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_3]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) var_6)) ? (arr_12 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_4]))))))), (((/* implicit */long long int) min((((/* implicit */int) min((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) var_5))))), (arr_9 [i_0] [i_0] [i_2] [i_4 + 3] [0ULL] [i_3 + 1]))))));
                                var_12 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)246))))) ? (max((arr_11 [i_0] [i_1] [i_0] [8LL] [i_4]), (((/* implicit */unsigned long long int) (unsigned char)10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_13 [i_1] [(signed char)0] [(signed char)0] [i_2] [(short)2] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_3]))))), (((((/* implicit */long long int) arr_9 [7ULL] [i_1] [i_2] [i_2] [7ULL] [i_4])) / (var_7))))), (((/* implicit */long long int) var_5))));
                                var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_12 [i_4 + 3]))) : (((((arr_12 [i_0]) + (9223372036854775807LL))) >> (((arr_5 [i_0] [i_1] [i_1]) - (3351185919U))))))) >> ((((~((~(arr_9 [i_0] [i_1] [i_0] [i_4] [i_4] [i_0]))))) + (1209385083)))));
                                var_14 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_2] [i_1]);
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    var_15 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_4 [i_5 + 1] [i_1] [i_5 - 1]), (arr_4 [i_5 + 1] [i_1] [i_5 + 3])))), (min((((((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_5])) << (((/* implicit */int) arr_3 [(unsigned short)11] [(unsigned short)11])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) <= (arr_6 [i_0] [i_1] [i_0] [(short)9]))))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((arr_6 [i_0] [(unsigned char)10] [i_0] [i_0]) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_0] [i_0] [(unsigned short)12]), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [2LL] [i_5])))))) : (max((arr_15 [i_5] [(unsigned short)6] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_5] [12U] [i_0])))))))))));
                    var_17 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_1] [i_0]);
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6540019582144428265LL)) ? (((/* implicit */int) arr_3 [(unsigned char)1] [i_1])) : (((/* implicit */int) (unsigned char)10))))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) ((_Bool) arr_3 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_5]))))))) : (((((/* implicit */_Bool) arr_12 [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_11 [i_5 + 1] [i_5 + 2] [i_5] [i_1] [i_5 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_5])))))));
                }
                arr_16 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 592809778U)) ? (((/* implicit */int) (unsigned short)32406)) : (((/* implicit */int) (signed char)-90))));
                var_19 &= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(signed char)10] [i_0])) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))))))) >= (min((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [(short)4])) ? (var_0) : (var_0))), (((((/* implicit */_Bool) var_6)) ? (arr_11 [i_1] [i_1] [i_1] [8U] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                var_20 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (var_8) : (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_9)))))), (max((var_8), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_1] [i_1] [0ULL] [i_0])), (arr_5 [(signed char)8] [i_1] [6ULL]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_1);
}
