/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65338
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 3; i_2 < 10; i_2 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_1 + 2])) : (((/* implicit */int) arr_3 [i_0]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) ((345424386U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-690)))));
                        arr_11 [i_0] [i_1] [9U] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) arr_2 [i_2 - 3]))))));
                        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((int) (unsigned short)32384))) + (((arr_9 [i_0] [i_1] [i_2] [i_3]) + (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) min((arr_8 [(short)3] [(short)3] [i_2] [5U]), (((/* implicit */int) arr_10 [i_1] [i_1 + 2] [0LL]))))) : (min((((/* implicit */long long int) arr_4 [i_1] [i_2] [i_1])), (3254064329929665074LL))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */short) (-(8872343694217857023LL)));
                        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1444108897001752892ULL)) ? (((/* implicit */int) arr_10 [i_2] [1ULL] [i_2 - 2])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 2])))) >= (((/* implicit */int) min((arr_10 [i_2] [i_2] [i_2 - 2]), (arr_10 [i_0] [i_1] [i_2 - 1]))))));
                        var_22 &= ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) ((arr_8 [i_0] [i_0] [i_0] [3LL]) + (((/* implicit */int) var_12)))))), (((((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1 + 1])) * (((/* implicit */int) (short)(-32767 - 1)))))));
                        var_23 &= ((/* implicit */long long int) (short)256);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            arr_19 [0U] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (-(var_8)))), (var_0)))));
                            var_24 += ((/* implicit */unsigned short) (short)8160);
                        }
                        var_25 = ((/* implicit */long long int) var_0);
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 3908547717U)) * (min((((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_1 + 1])), (max((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 1065353216U))))))));
                    }
                }
                for (signed char i_7 = 3; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */short) (+(var_0)));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 1; i_9 < 9; i_9 += 2) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_8] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */signed char) ((int) arr_23 [(signed char)6]));
                                var_28 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9 + 2] [i_8] [4U] [i_9] [i_9]))) >= (var_6))) ? ((+(((/* implicit */int) arr_26 [i_9 - 1] [i_8] [i_9] [i_9] [i_9])))) : (((/* implicit */int) arr_26 [i_9 + 1] [i_8] [i_9] [i_9 + 2] [i_9]))));
                                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0])))));
                                var_30 = (~(((/* implicit */int) var_10)));
                                arr_28 [i_0] [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 8875735508908874582LL))) ? (6917695474231485200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_18 [i_9 + 2] [i_7 - 3] [i_1 + 2] [i_1 - 1] [i_0]), (arr_18 [i_9 + 1] [i_7 - 3] [i_1 + 2] [i_1 - 3] [i_0])))))));
                            }
                        } 
                    } 
                    var_31 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1065353216U)) ? (arr_15 [i_7 - 1] [i_1 + 2] [i_1 + 2]) : (arr_15 [i_7 - 1] [i_1 - 1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */unsigned char) (_Bool)1)), (arr_2 [i_0]))), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_7]))) <= (arr_22 [i_0] [i_1] [i_7] [6ULL])))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) >= (arr_0 [i_7]))))) * (-7255732157648526884LL)))));
                }
                var_32 = ((/* implicit */short) (+((-(arr_9 [i_0] [i_1] [i_1 + 2] [i_0])))));
                var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                /* LoopNest 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 1; i_11 < 10; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            {
                                arr_36 [(unsigned char)6] [i_0] [i_10] [i_11] [i_1 - 3] [i_10] [i_12] = var_11;
                                var_34 = ((/* implicit */int) arr_13 [i_0] [2ULL] [i_0] [i_0] [(unsigned short)3] [i_0]);
                                var_35 = ((/* implicit */int) var_15);
                                var_36 = ((/* implicit */_Bool) min((var_15), (((/* implicit */short) ((((/* implicit */int) var_12)) != (((/* implicit */int) (_Bool)1)))))));
                                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) var_15))))) ? (arr_0 [i_10]) : (((/* implicit */int) arr_5 [2LL] [2LL]))))) >= (min((min((var_14), (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_38 += ((/* implicit */short) var_14);
}
