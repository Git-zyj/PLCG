/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75685
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
    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) var_17))), ((-(((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) max((var_11), (((/* implicit */int) var_6))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) || (((/* implicit */_Bool) var_10))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_17), (((/* implicit */long long int) var_8))))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_15)))))) > (((/* implicit */int) var_10)));
                arr_4 [i_1] = ((/* implicit */short) min((((((((/* implicit */_Bool) var_8)) ? (var_15) : (var_15))) ^ (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) var_7))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_5)) - (((/* implicit */int) var_1)))), (((/* implicit */int) min((var_1), (var_2))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) ? (max((var_4), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                            var_22 = ((/* implicit */unsigned char) var_7);
                            var_23 = ((/* implicit */unsigned long long int) var_2);
                            arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) var_16);
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] = ((/* implicit */long long int) max(((+(((((/* implicit */int) var_8)) * (((/* implicit */int) var_16)))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_17)))))));
                var_24 = ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (var_17)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_6 = 1; i_6 < 8; i_6 += 2) 
                {
                    var_25 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))));
                    var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) / (((/* implicit */int) var_6)))) ^ (((((/* implicit */int) var_16)) | (((/* implicit */int) var_3))))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    arr_23 [i_7] [i_5] [i_7] &= ((/* implicit */unsigned short) ((var_3) ? (((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */int) var_10)))) : (var_18)));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 3; i_8 < 10; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_8))));
                        arr_27 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_13))));
                        arr_28 [i_4] [i_4] [(_Bool)1] [i_7] [i_4] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_15)))) ? (((((/* implicit */int) var_16)) & (var_11))) : (((((/* implicit */int) var_3)) - (var_14)))));
                        arr_29 [i_4] [i_4] = ((/* implicit */long long int) ((unsigned int) ((long long int) var_12)));
                    }
                    for (short i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        arr_32 [i_4] [i_5 - 2] [i_7] [i_9] = (-(((var_14) ^ (var_14))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            arr_35 [i_4] [i_9] [i_5 - 2] [i_4] = ((/* implicit */unsigned int) (-(((var_16) ? (var_18) : (var_11)))));
                            var_29 += ((/* implicit */short) var_15);
                        }
                        arr_36 [i_4] [i_4] [i_7] [i_5] [i_4] [i_9] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                        arr_37 [i_4] [i_5 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_17)))) ? (((/* implicit */int) var_12)) : (((var_12) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))));
                        var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ ((-(var_15))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) var_12);
                        /* LoopSeq 3 */
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                        {
                            arr_44 [i_4] = ((/* implicit */unsigned int) var_18);
                            var_32 = ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) > (((/* implicit */int) var_12)));
                        }
                        for (long long int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                        {
                            var_33 &= ((/* implicit */short) (!(((var_15) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                            arr_48 [i_4 - 2] [i_4] [i_5 - 1] [3LL] [i_7] [i_11] [i_13] = ((_Bool) var_3);
                        }
                        for (short i_14 = 2; i_14 < 9; i_14 += 1) 
                        {
                            arr_51 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [(signed char)7] = ((/* implicit */unsigned char) (~(((var_12) ? (((/* implicit */int) var_2)) : (var_14)))));
                            var_34 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (var_14)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            arr_52 [i_4] [i_7] [i_4] [(short)6] [i_4 - 1] [i_4 - 1] |= ((_Bool) ((var_12) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))));
                            var_36 = var_11;
                        }
                    }
                    var_37 = ((/* implicit */unsigned char) (!((!(var_12)))));
                }
                /* vectorizable */
                for (long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    var_38 = ((/* implicit */unsigned short) (!(var_16)));
                    arr_55 [(_Bool)1] [i_5 - 2] [(signed char)0] [i_15] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (var_18)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_12)))))));
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                    arr_56 [i_4] [i_4] [i_15] = ((/* implicit */_Bool) var_7);
                    var_40 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) > (((/* implicit */int) var_7)))) ? (((/* implicit */int) var_12)) : (((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))));
                }
                /* vectorizable */
                for (long long int i_16 = 1; i_16 < 7; i_16 += 1) 
                {
                    var_41 = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
                    var_42 += ((/* implicit */_Bool) var_8);
                }
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_14)) : (var_17)))))) == (max((((var_4) - (var_15))), (((/* implicit */unsigned long long int) var_0))))));
            }
        } 
    } 
    var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) min((var_17), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))))))))));
}
