/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67216
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_0))));
                    var_14 = ((/* implicit */short) 17);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-126)) == (-2)))) + (((((/* implicit */_Bool) 5881346464761916054LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)84)))))))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (unsigned short)41587)))))));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((var_4) << (((((/* implicit */int) arr_3 [i_1] [i_1 + 2] [i_4])) - (182)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_17 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (signed char)59)) - (2147483647))) : (((((/* implicit */int) (unsigned short)11389)) | (var_4))));
                            arr_16 [12ULL] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_2] [i_1 - 2] [i_1 - 2]))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((int) arr_4 [i_0]))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) (unsigned char)114)) | (((/* implicit */int) arr_9 [i_6 + 1] [6] [i_6 + 1] [i_6] [i_6] [i_6 + 1])))))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)4095))) | (6497835313483475642LL)))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_2])) ^ ((+(((/* implicit */int) arr_14 [i_2] [(short)4] [i_2]))))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 11; i_7 += 4) 
                        {
                            arr_21 [i_2] [i_1] = ((/* implicit */unsigned char) 0U);
                            arr_22 [12] [i_1] [i_2] [i_2] [(short)6] [i_2] = ((/* implicit */int) arr_10 [i_2] [i_2] [i_2 - 1] [i_7]);
                            arr_23 [i_0] [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 6077673502276275692ULL)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_9)))));
                        }
                    }
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) arr_15 [i_0])))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)71))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((arr_20 [i_8] [i_8] [i_2 - 1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) arr_20 [(unsigned short)1] [(unsigned short)1] [i_2] [i_8]);
                            arr_32 [i_9] [i_2] [i_2] [i_2] [(signed char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_9)) - (70)))))) ? (6316956250575297919ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_8] [i_8] [i_9] [i_1] [i_1] [i_0]))) >= (-7241237442981395771LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9] [i_8] [(unsigned short)0] [i_1] [(unsigned short)0]))) | (var_1))))))));
                            arr_33 [(unsigned short)8] [i_2] [i_9] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_2] [i_1] [i_2 + 4])) & (((/* implicit */int) var_9))));
                        }
                        for (short i_10 = 1; i_10 < 10; i_10 += 2) 
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) | (var_10))))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-(((/* implicit */int) ((var_4) != (((/* implicit */int) (unsigned char)170))))))))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) != (562949953421312ULL)));
                        }
                        for (unsigned char i_11 = 2; i_11 < 12; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) 4294967277U)) || (((/* implicit */_Bool) (unsigned short)46772)))))));
                            arr_41 [10U] [i_1] [i_0] [i_2] [i_1 - 1] = ((/* implicit */unsigned short) arr_38 [i_0] [i_1] [1] [i_2] [1] [1] [i_8]);
                            arr_42 [i_0] [i_2] [i_2 - 4] [i_0] [12LL] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [1])) ? (((/* implicit */unsigned long long int) var_8)) : (var_10))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                            arr_43 [i_0] [i_1] [3ULL] [i_8] [i_2] = ((/* implicit */unsigned char) ((arr_20 [i_2] [i_2 - 1] [i_2 - 2] [(unsigned short)3]) | (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        }
                        arr_44 [i_0] [i_0] [i_2] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-109)) + (2147483647))) >> (((arr_5 [i_0] [(_Bool)0] [i_2] [i_8]) - (6739862178728201999ULL)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_8] [i_8] [5LL])) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned short)11389))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-109)) + (2147483647))) >> (((((arr_5 [i_0] [(_Bool)0] [i_2] [i_8]) - (6739862178728201999ULL))) - (15860634037662514397ULL)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_8] [i_8] [5LL])) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned short)11389)))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
                    {
                        arr_47 [i_12] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_31 [i_12] [6ULL] [6ULL] [i_0]));
                        var_31 = ((/* implicit */short) (~(((/* implicit */int) arr_29 [i_1 + 2] [i_1 - 1] [5U] [i_2] [i_2 + 3] [i_1 + 2] [i_12]))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((unsigned int) arr_3 [i_2 - 1] [i_2 - 1] [i_2])))));
                        var_33 = ((/* implicit */signed char) max((var_33), ((signed char)118)));
                        arr_50 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */int) (signed char)100);
                    }
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_53 [i_0] = ((/* implicit */unsigned char) ((short) (unsigned char)7));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            {
                                arr_60 [i_0] [i_1] [(unsigned char)5] [i_15] [6] [i_16] = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_40 [i_0] [i_1 + 2] [i_14] [i_0] [i_15] [i_16]))));
                                arr_61 [(unsigned short)1] [i_14] [i_1] [(signed char)4] [i_16] [i_0] [i_15] = var_0;
                                arr_62 [i_0] [i_1] [i_14] [i_15] [i_0] [i_15] [i_14] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                            }
                        } 
                    } 
                }
                arr_63 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1 - 2])), (max((min((((/* implicit */int) var_3)), (-11))), (((((/* implicit */int) (unsigned char)44)) << (((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */_Bool) var_3);
}
