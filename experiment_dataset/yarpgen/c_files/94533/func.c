/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94533
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
    var_15 |= ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */signed char) (-((~(13348843287061397781ULL)))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) var_5)), (var_7))) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_9)))))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            arr_19 [i_4] [i_3 + 1] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(min((var_11), (((/* implicit */int) var_10))))));
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_3 + 1] [i_4] [i_4] = ((/* implicit */int) (+(min((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (unsigned short)47667)) ? (1275241499U) : (((/* implicit */unsigned int) 1473865730))))))));
                        }
                        var_17 = ((/* implicit */unsigned long long int) (~((-(min((((/* implicit */unsigned int) var_10)), (var_8)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (var_7)));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_19 += ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))));
                            var_21 = (+(((/* implicit */int) var_2)));
                        }
                        arr_26 [i_0] [i_1] [i_2] [i_5] [i_5] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(var_4)))), (min(((-(var_5))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            var_24 += ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((~(var_4))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) var_11))))))))));
                            arr_33 [i_2] [i_1] [i_2] [i_0] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) min((var_2), (var_2)))), ((+(((/* implicit */int) var_0))))))), (min((((/* implicit */unsigned int) (unsigned char)59)), (4U)))));
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!((!(var_14)))))), (min((var_13), (var_8)))));
                        }
                        var_26 = ((/* implicit */signed char) min(((-((+(var_1))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), (var_5)))));
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            var_27 = ((/* implicit */signed char) (~((~(var_3)))));
                            arr_36 [i_0] [i_1] [i_1] &= min((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) var_6))))));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_41 [i_10] = ((/* implicit */unsigned long long int) var_12);
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (-((~(((/* implicit */int) var_10)))))))));
                            var_29 = ((/* implicit */short) var_5);
                            arr_42 [i_0] [i_10] [i_2] [i_7] [i_10] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), ((+(var_5)))));
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((var_0), (((/* implicit */short) var_14)))))));
                            arr_45 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) (unsigned char)75)) : (1473865730)))) ? (((/* implicit */int) min((var_2), (var_2)))) : (((var_9) ? (((/* implicit */int) var_9)) : (var_11)))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (var_1) : (var_1))))))));
                        }
                    }
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        arr_48 [i_12] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_0))))) ? (min((var_5), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_9)), (var_0))))))), (((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */unsigned int) var_9)), (var_8))) : (min((var_13), (var_5)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
                        {
                            var_32 = ((/* implicit */signed char) max((min((min((((/* implicit */unsigned int) var_12)), (var_1))), (((/* implicit */unsigned int) var_0)))), (var_8)));
                            var_33 ^= min(((~(var_4))), (((/* implicit */int) min((var_0), (var_0)))));
                        }
                        arr_51 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))))));
                        arr_52 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (min((((/* implicit */unsigned long long int) (signed char)-89)), (14530566548692511451ULL)))));
                        var_34 = ((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) var_3))))));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 15; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 2; i_15 < 15; i_15 += 2) 
                        {
                            {
                                arr_59 [i_0] [i_1] [i_1] [i_2] [i_14] [i_15 - 2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) var_14))))));
                                arr_60 [i_0] [i_0] [i_2] [i_14] [i_15] = ((/* implicit */unsigned long long int) (-((((_Bool)1) ? (3822336981U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28140)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */long long int) (-((-(var_3)))));
    var_36 |= ((/* implicit */unsigned long long int) var_6);
}
