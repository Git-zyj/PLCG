/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98599
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
    var_12 = ((/* implicit */unsigned int) (-((+(var_5)))));
    var_13 ^= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_10))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (var_3))))))), (min((max((var_6), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_3))));
                                arr_13 [i_0] [i_1 + 1] [i_2] [i_3] &= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_2] [i_2 + 4]))))), ((-(((/* implicit */int) arr_8 [i_0 + 1] [i_2] [i_2 + 1]))))));
                                var_15 = ((/* implicit */unsigned int) var_5);
                                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_4))))))));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */unsigned int) (-(max((arr_0 [i_1]), (((/* implicit */int) var_8))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 3; i_5 < 20; i_5 += 3) 
                    {
                        var_18 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (max((var_1), (arr_8 [(unsigned short)8] [i_2] [i_2])))));
                        var_19 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 2]))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_2)))))) >> (((((((var_6) + (((/* implicit */unsigned int) arr_0 [i_2])))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))) - (2732790728U)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 2]))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_2)))))) >> (((((((((var_6) + (((/* implicit */unsigned int) arr_0 [i_2])))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))) - (2732790728U))) - (4294967212U))))));
                        arr_17 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((var_0) & (var_0)))))) ? ((~(((/* implicit */int) var_1)))) : (max((((/* implicit */int) var_4)), (arr_15 [i_1 - 1] [i_0] [i_2] [i_5])))));
                        var_20 -= ((/* implicit */int) ((_Bool) max((arr_3 [i_2]), (((/* implicit */unsigned int) var_5)))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((max((var_2), (((/* implicit */unsigned int) arr_15 [i_1 + 1] [i_0] [i_2] [i_0 + 1])))) + (min((var_2), (((/* implicit */unsigned int) arr_15 [i_1 + 1] [i_0] [i_2] [i_0 - 2]))))));
                        arr_21 [i_6] [i_1] [i_2 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 2] [(signed char)3])) < (((((/* implicit */int) arr_18 [i_6] [i_2] [i_1 + 1] [i_0 - 1])) % (((/* implicit */int) var_4))))))) : ((-((-(((/* implicit */int) var_10))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_2] [i_2 + 3] [i_2] [i_2] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned short) max((var_10), (var_10)))), (arr_8 [i_0] [i_0] [(_Bool)1]))), (((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_6] [i_6] [i_7]))))))));
                            var_22 = ((/* implicit */unsigned long long int) (-(((max((arr_9 [i_7]), (((/* implicit */long long int) var_6)))) % (((/* implicit */long long int) var_2))))));
                            arr_25 [(unsigned char)5] [i_0] [i_2] [i_6] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) ((arr_22 [i_0]) == (var_7)))) : ((-(((/* implicit */int) var_10))))))));
                            var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) arr_16 [i_2 + 1] [i_2 + 1] [i_2] [i_2]))))) ? (max((var_11), (((/* implicit */unsigned long long int) arr_10 [i_2 - 2] [i_2 - 1] [i_2] [i_2 - 2] [16ULL] [i_2 + 2])))) : (((/* implicit */unsigned long long int) max((arr_16 [i_2 + 3] [i_2 - 1] [i_2] [i_2 + 4]), (((/* implicit */int) arr_10 [i_2 + 2] [i_2] [i_2] [i_2 + 4] [i_2] [i_2])))))));
                            arr_26 [12] [12] [i_2] [i_6] [i_0] = var_6;
                        }
                    }
                    for (signed char i_8 = 3; i_8 < 19; i_8 += 3) 
                    {
                        arr_29 [i_0] [i_8] [i_0] [i_8] = ((/* implicit */long long int) max((((arr_3 [i_8 - 2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((var_10) || (((/* implicit */_Bool) var_1)))))));
                        /* LoopSeq 4 */
                        for (short i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            arr_33 [i_0] = (((~(((/* implicit */int) var_8)))) | (((/* implicit */int) min((arr_30 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2]), (arr_30 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0 + 1])))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((min((var_0), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_10)), (var_3)))))) - (6387U))))))));
                            var_25 = max((((/* implicit */int) min((arr_8 [i_0] [i_0] [i_2 - 1]), (var_8)))), ((-(((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_2 - 2])))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 18; i_10 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_3))))) ? (arr_31 [i_10 + 1] [i_10 + 3] [i_2 + 2] [i_1 + 1] [(signed char)11]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_2] [i_0] [i_2] [i_10 + 1])) ? (((/* implicit */int) arr_30 [i_0] [i_1] [i_2 + 2] [i_0] [i_8] [i_10])) : (((/* implicit */int) arr_28 [i_0] [i_2] [i_2] [i_2 - 1] [i_10] [i_0]))))))), (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_8 + 1] [(_Bool)0])) >= (((/* implicit */int) arr_34 [i_0] [i_0] [i_0 - 1]))))))))));
                            arr_38 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_27 [i_10 + 2] [i_8] [i_0] [i_0] [i_1 + 1] [i_0 - 1]))));
                            var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_10) ? (var_5) : (((/* implicit */int) var_10))))) >= (max((((/* implicit */unsigned long long int) var_5)), (var_11))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 1; i_11 < 18; i_11 += 3) /* same iter space */
                        {
                            arr_42 [i_11] [i_8 - 2] [i_2] [i_2 - 1] [i_2] [i_1] [i_0] &= ((/* implicit */int) arr_27 [i_11] [i_11 - 1] [i_2] [i_2] [i_11 + 2] [i_2 - 1]);
                            var_28 = ((/* implicit */signed char) ((var_0) > (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                            arr_43 [7] [i_1 + 1] [7] [i_1] [i_0] = ((/* implicit */int) var_3);
                        }
                        for (unsigned char i_12 = 1; i_12 < 18; i_12 += 3) /* same iter space */
                        {
                            var_29 = max((min(((~(((/* implicit */int) arr_6 [i_0])))), (((/* implicit */int) arr_34 [i_1] [i_0] [i_12])))), (max(((+(var_5))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (var_0)))))));
                            var_30 = ((/* implicit */short) (+((-(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_7)))))));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) max(((+(((/* implicit */int) arr_34 [i_1] [i_2] [i_0 - 1])))), (((/* implicit */int) var_8)))))));
                            var_32 = ((/* implicit */int) ((min((arr_41 [i_0] [i_1] [i_8] [i_12]), (((/* implicit */unsigned long long int) ((arr_0 [i_1 + 1]) & (((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))))))) * (((/* implicit */unsigned long long int) (((+(arr_15 [i_1 - 1] [i_2] [i_2] [i_1]))) / ((-(((/* implicit */int) arr_35 [i_0 - 2] [i_1] [i_8] [i_2] [i_0 - 2])))))))));
                        }
                    }
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1 - 1] [i_2] [i_2] [i_2 + 4] [i_2] [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_1 - 1] [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 2]))) : (var_6)))) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_28 [i_1 - 1] [i_1] [i_1] [i_1] [i_2 - 2] [i_2 + 3])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_1 - 1] [(signed char)3] [i_1 + 1] [i_2 - 2] [i_2 + 1] [i_2 + 2])) && (((/* implicit */_Bool) arr_28 [i_1 - 1] [i_2] [i_2] [i_2] [20LL] [i_2 + 1])))))));
                    var_34 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((var_11) / (((/* implicit */unsigned long long int) var_0)))) > (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_40 [10] [i_0] [10U] [i_1] [i_2 + 4] [i_2] [i_2])), (arr_0 [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_2] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_1] [i_2 + 3]), (var_4))))) : (max((var_11), (((/* implicit */unsigned long long int) var_3))))))));
                }
            } 
        } 
    } 
}
