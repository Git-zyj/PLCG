/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85762
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [(unsigned short)14] &= ((/* implicit */signed char) ((((long long int) max((arr_3 [i_0] [i_1]), (arr_3 [(unsigned short)15] [(unsigned short)15])))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)73)) != (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)42611)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_2 [i_0]))))) : (-1LL))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) arr_0 [i_0] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)42129)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : (var_3)));
    var_20 |= max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_17)))) ? (((/* implicit */int) var_15)) : ((-(((/* implicit */int) var_2))))))), (max((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) var_5)))));
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        for (signed char i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            {
                var_21 |= ((/* implicit */unsigned short) -4953631204387930333LL);
                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_3 - 2] [i_3 + 1]))))) ? (((/* implicit */int) max((arr_9 [i_3 - 1] [i_3 + 1]), (arr_9 [i_3 - 2] [i_3 - 2])))) : (((((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1])) + (((/* implicit */int) (unsigned short)18276))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 4; i_4 < 20; i_4 += 2) 
    {
        for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
        {
            for (long long int i_6 = 2; i_6 < 21; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_23 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4]), (arr_23 [i_4 + 3] [i_4 + 3] [i_4 - 4] [i_4 + 3]))))));
                            arr_27 [i_8] [i_6] [i_6] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)-9)), (arr_15 [(signed char)22]))), (((/* implicit */unsigned short) ((signed char) 8009852177589577724LL))))))) < (min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30071))) : (8009852177589577722LL))), (((/* implicit */long long int) ((unsigned short) arr_24 [i_4] [i_6] [i_6] [i_7] [i_4])))))));
                            var_23 = (~(-7880465209860951248LL));
                        }
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_19 [i_6] [i_6 + 1] [i_6 - 2])), (arr_29 [i_4 + 3] [i_5] [(signed char)15] [i_5 - 1] [i_6 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_29 [i_4 - 4] [i_4 - 4] [i_4] [i_5 + 1] [i_6 + 2]) < (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_6 + 2] [i_6 - 2]))))))) : (((long long int) arr_29 [i_4 - 1] [i_4] [i_5] [i_5 + 2] [i_6 - 2]))));
                            var_24 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) ((signed char) (unsigned short)23396))))), ((-(((/* implicit */int) (unsigned short)6882))))));
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) > (451105154895040989LL)))))))));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (arr_14 [i_4 - 2])));
                        }
                        for (long long int i_10 = 1; i_10 < 22; i_10 += 2) 
                        {
                            arr_35 [i_6] [i_6] [i_6] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)4)) / (((/* implicit */int) (unsigned short)14337))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)30245)) && (((/* implicit */_Bool) 397891008622190233LL))));
                            arr_36 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_33 [i_4] [i_5] [(signed char)5])), ((-(arr_25 [i_6] [i_6 + 2] [i_7] [i_7] [i_10 + 1])))));
                        }
                        var_28 = ((/* implicit */unsigned short) ((min((-1LL), (((/* implicit */long long int) (unsigned short)8192)))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_19 [i_6] [i_4 - 2] [i_4 + 1]), (arr_19 [i_6] [i_4 + 3] [i_4 + 1])))))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((15LL), (((/* implicit */long long int) ((signed char) (signed char)47)))))) || ((!((!(((/* implicit */_Bool) (unsigned short)16497)))))))))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_16 [i_5] [i_6] [i_5]))));
                        arr_37 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) min((arr_33 [i_5] [i_5] [(unsigned short)7]), (arr_28 [i_7] [i_4] [i_4] [i_4])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            {
                                arr_44 [i_6] [i_6] = ((max((((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_12] [i_6] [i_6] [i_6] [i_4]))) : (72694333812580096LL))), (((((/* implicit */_Bool) arr_43 [i_6])) ? (arr_43 [18LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_11] [i_11]))))))) << (((((long long int) ((((/* implicit */_Bool) arr_33 [i_11] [i_5] [i_4])) ? (((/* implicit */int) arr_41 [i_6])) : (((/* implicit */int) (unsigned short)35291))))) - (61287LL))));
                                arr_45 [i_4] [i_5] [(signed char)17] [i_6] [i_12] [(signed char)17] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_5] [i_6] [i_11] [i_12])) ? (((/* implicit */int) arr_28 [i_6 + 2] [i_6 + 2] [i_6] [i_4])) : (((/* implicit */int) arr_31 [i_4 + 2] [i_5 + 1]))))) + (arr_34 [i_12] [i_11] [i_6] [(signed char)2] [i_4 + 3])));
                            }
                        } 
                    } 
                    arr_46 [i_4] [(signed char)12] [(signed char)12] [i_6] = ((/* implicit */signed char) (~((~(arr_30 [i_6 - 2] [i_4] [i_4 + 2] [i_5 - 1] [i_5] [i_5])))));
                    var_31 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)-26)))), (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (unsigned short)35268)) : (((/* implicit */int) arr_15 [i_4])))))))));
                }
            } 
        } 
    } 
}
