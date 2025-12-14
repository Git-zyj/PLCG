/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77560
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
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
    var_17 = ((/* implicit */_Bool) var_12);
    var_18 ^= ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) var_10);
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_7 [i_1] [i_1] [i_2]);
                    var_19 -= ((/* implicit */unsigned short) (unsigned char)244);
                }
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 2; i_4 < 10; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((arr_0 [i_0 + 2] [(unsigned char)5]), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_6 [7ULL] [i_0 - 1] [i_1] [i_0 - 1])))))))));
                        var_20 -= ((/* implicit */_Bool) arr_2 [i_3]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((arr_13 [i_0] [i_0] [i_3] [i_4 - 2]) - (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            arr_20 [9ULL] [i_4] [i_5] [i_4] [i_5] [i_1] [i_5] = ((/* implicit */unsigned long long int) arr_10 [(short)8] [i_4] [i_5]);
                        }
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_0 - 1] [i_6])) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) arr_14 [i_0 - 1] [i_1] [i_3] [i_0 + 3] [i_6]))))), (((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_3] [i_0 - 1] [7LL] [6U] [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_21 [i_0] [i_0 + 2] [i_3] [i_0 + 2] [i_6] [i_1] [i_4 - 2])))));
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_3] [i_4] [i_6] [i_4 - 1] [i_4 - 2])) ? (var_9) : (((/* implicit */long long int) arr_21 [i_6] [i_1] [i_3] [i_4] [i_6] [i_6] [i_4])))))));
                        }
                        arr_23 [(unsigned short)5] [i_1] [i_1] [i_1] [i_3] [i_4] = arr_0 [i_0] [i_0];
                    }
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_1] [8] [i_1] [8] [i_0])))))))), (((((/* implicit */unsigned int) 0)) + (2495679356U)))));
                        arr_26 [i_0 + 1] [i_1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((var_8) == (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_14 [i_0 + 3] [i_1] [i_0 + 3] [i_3] [i_7])))) || (((/* implicit */_Bool) ((long long int) arr_24 [i_0 + 1] [i_0 - 1]))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 2; i_8 < 8; i_8 += 3) 
                        {
                            var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_7 [i_7] [i_7] [i_7])))) ? ((+(((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))) ? (((((/* implicit */_Bool) var_15)) ? (1023U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_3] [i_3] [i_3] [i_8 + 1]))))) : (((/* implicit */unsigned int) (((+(((/* implicit */int) var_6)))) >> (((var_5) - (568381505U))))))));
                            var_27 = var_7;
                        }
                    }
                    var_28 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((16) << (((((/* implicit */int) var_10)) - (81)))))), ((+(var_8)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        var_29 *= ((/* implicit */unsigned char) max(((+(((long long int) var_8)))), (((/* implicit */long long int) (-((+(((/* implicit */int) var_1)))))))));
                        arr_33 [i_0 + 1] [i_0] [i_0] [i_1] [i_0] [i_0 + 3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))));
                        var_30 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_9 - 1] [i_3] [i_0] [i_0]))));
                        var_31 &= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0])))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */long long int) var_13)) : (var_11)))) ? (((unsigned int) (unsigned char)244)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6887905439040755971LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)247))))))) - (235U)))));
                    }
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        arr_38 [i_0 + 2] [i_1] [i_3] [i_10] = ((/* implicit */short) 4294966273U);
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 4294966273U)))))) * ((+(var_5)))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_11 + 1])) ? ((-(-2537284395782307021LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_11 - 1]))) < (var_13)))))));
                        var_34 = ((/* implicit */unsigned char) var_1);
                        var_35 -= ((/* implicit */_Bool) (unsigned char)226);
                        var_36 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 18446744073709551607ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (-1317925473581661131LL)))));
                        arr_41 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (0)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (arr_1 [(signed char)4] [i_0 + 2]))), (((/* implicit */long long int) arr_40 [i_3]))));
                    }
                }
                var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_34 [i_0 + 1] [i_1] [i_0] [5ULL]), (arr_34 [i_0 + 3] [i_1] [i_0] [i_0 - 1]))))));
                arr_42 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_4);
            }
        } 
    } 
}
