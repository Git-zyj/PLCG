/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84209
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_13 = (+(((arr_4 [i_1 + 3] [i_1]) - (((/* implicit */int) var_4)))));
                                var_14 = (!(((/* implicit */_Bool) min((((arr_1 [i_1]) - (((/* implicit */unsigned int) -353792665)))), (((/* implicit */unsigned int) (signed char)105))))));
                                var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_7 [i_4 + 2] [(unsigned char)2] [i_2] [(unsigned char)2] [i_0]), (arr_7 [i_0] [(unsigned char)6] [i_2] [i_4] [i_4])))) ? (((/* implicit */long long int) var_6)) : (max((((/* implicit */long long int) (signed char)-76)), (-814578328382956456LL)))));
                                var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)127)))) ? (((long long int) arr_8 [i_0] [i_1] [i_1] [i_4 - 1])) : (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) (unsigned short)7168);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_1] = ((/* implicit */short) (signed char)-106);
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2672484561U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))), (arr_1 [i_1])))) ? ((~(arr_6 [i_1] [(unsigned char)3] [i_5 + 4] [i_6 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 2; i_7 < 13; i_7 += 3) 
                    {
                        arr_23 [i_0] [i_1] [i_2 + 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1 + 1] [i_1]))))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)29315)))) : (min((((/* implicit */int) arr_2 [i_1 - 1] [i_1])), (var_6)))));
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2] [(_Bool)1]))));
                        var_20 = ((/* implicit */signed char) arr_3 [i_0]);
                    }
                    for (unsigned char i_8 = 2; i_8 < 12; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            arr_29 [i_1] [i_1] [i_8] [5] = ((/* implicit */signed char) var_5);
                            var_21 ^= ((/* implicit */int) min((arr_8 [i_8 + 1] [i_2 + 1] [(short)1] [i_2]), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_8 + 2] [i_9])) : (((/* implicit */int) (signed char)72)))), (((((/* implicit */int) (unsigned short)52465)) / (((/* implicit */int) (unsigned short)7168)))))))));
                        }
                        arr_30 [i_1] [(unsigned char)2] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_8] [i_2 - 1] [i_1] [(signed char)13]), (var_4)))) ? (((unsigned int) arr_10 [i_1] [i_8] [i_2] [i_1] [i_1 + 2] [i_1])) : (var_12))))));
                        arr_31 [i_0] [i_1] [(unsigned char)0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) (+(max((var_5), (((/* implicit */long long int) arr_10 [i_1] [(unsigned char)3] [i_1] [i_1 + 3] [3LL] [i_8 + 2]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) var_1);
                            var_23 = ((/* implicit */unsigned short) var_4);
                        }
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_0] [i_1] [i_1] [i_2 - 1] [i_1] [i_1] [i_11] = ((/* implicit */signed char) 67108863);
                            arr_37 [(short)12] [i_1] [(short)12] &= ((/* implicit */signed char) arr_5 [i_11] [i_11] [i_1 + 3] [i_1]);
                        }
                        for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1 + 3] [i_2 + 1])) & (((/* implicit */int) arr_12 [i_1 + 2] [i_2 - 1]))))) <= (min((((/* implicit */unsigned int) (unsigned char)46)), (((((/* implicit */_Bool) 4294967295U)) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107)))))))));
                            var_25 = ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0]);
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 1; i_13 < 15; i_13 += 3) 
    {
        for (signed char i_14 = 1; i_14 < 15; i_14 += 1) 
        {
            {
                arr_46 [i_13] [i_14] = ((/* implicit */short) arr_44 [i_13 - 1]);
                arr_47 [i_13] = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_26 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1628410113U))));
    var_27 = ((/* implicit */_Bool) (-(((unsigned int) var_1))));
}
