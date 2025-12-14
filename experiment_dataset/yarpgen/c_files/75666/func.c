/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75666
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                var_17 = ((((/* implicit */int) ((unsigned char) var_14))) & ((+(((/* implicit */int) var_12)))));
                var_18 ^= ((/* implicit */unsigned int) ((max((((var_14) << (((((((/* implicit */int) var_3)) + (22037))) - (30))))), (((/* implicit */int) var_3)))) == (max((((((/* implicit */int) var_5)) | (((/* implicit */int) var_16)))), ((+(((/* implicit */int) var_7))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_11 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_7)))))));
                        var_20 ^= ((/* implicit */unsigned long long int) var_4);
                    }
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        arr_14 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((var_2) / (((/* implicit */long long int) var_13))));
                        arr_15 [(signed char)0] [i_1 + 1] [i_0 - 1] [i_4 - 2] &= ((/* implicit */unsigned long long int) ((unsigned char) var_4));
                        var_21 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (short)16813)) | (((/* implicit */int) (short)-16813)))));
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) var_7));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) var_9);
                                var_23 = ((/* implicit */unsigned long long int) ((var_14) + (((/* implicit */int) ((signed char) var_13)))));
                                arr_21 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_6))))));
                                var_24 = (+(((/* implicit */int) var_5)));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    var_26 = ((((((/* implicit */_Bool) var_3)) && (var_9))) || (((/* implicit */_Bool) ((int) var_10))));
                    var_27 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) var_8))))), (max((((/* implicit */unsigned long long int) var_6)), (var_0)))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) var_8);
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_29 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((int) var_8))) % (max((var_2), (((/* implicit */long long int) var_3))))))) && (((/* implicit */_Bool) ((long long int) max((((/* implicit */int) var_3)), (var_14))))));
                        arr_30 [i_0 + 1] [i_0 + 1] [9LL] [i_1] [i_8] [(short)8] = ((/* implicit */unsigned int) var_3);
                        arr_31 [i_1] [i_1] [i_8] [(_Bool)1] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7))))))), (((/* implicit */int) var_12))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_30 *= var_0;
                            var_31 = ((/* implicit */_Bool) var_12);
                            arr_35 [i_0] [i_1] [i_9] = (+(890754659));
                            var_32 = ((/* implicit */signed char) (-(((((/* implicit */int) ((signed char) var_7))) & (((/* implicit */int) ((var_11) >= (((/* implicit */int) var_9)))))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 9; i_11 += 2) 
                        {
                            var_33 = ((/* implicit */short) ((((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) - (((/* implicit */long long int) var_11))));
                            arr_38 [i_0] [i_1] [i_0] [i_0 - 1] [(unsigned short)4] = ((/* implicit */unsigned int) ((var_11) + (((/* implicit */int) var_7))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            arr_42 [i_0] [(signed char)2] [i_8] [i_9] [(_Bool)1] &= ((/* implicit */_Bool) (((~(max((var_6), (((/* implicit */unsigned int) var_4)))))) & (max((((/* implicit */unsigned int) var_9)), (var_6)))));
                            var_34 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_16)) | (((/* implicit */int) var_8)))) << (((max((((/* implicit */unsigned int) var_16)), (var_6))) - (996396106U)))))), (min((((/* implicit */unsigned long long int) var_2)), (var_1)))));
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_11)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_16))))), (max((((/* implicit */unsigned int) var_7)), (var_6)))))))))));
                        }
                    }
                    arr_43 [i_0] [i_0] [2ULL] |= ((/* implicit */short) (!(((_Bool) var_15))));
                }
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) ((((max((((/* implicit */int) var_3)), (var_13))) % (var_13))) % ((~(((/* implicit */int) var_16))))));
                            var_37 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))) / (max((((/* implicit */unsigned long long int) ((int) var_4))), (((0ULL) - (((/* implicit */unsigned long long int) 4224387031U))))))));
                            arr_48 [i_1] [(short)1] = (!(var_9));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
    {
        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_17 = 2; i_17 < 19; i_17 += 1) 
                {
                    for (unsigned char i_18 = 4; i_18 < 20; i_18 += 4) 
                    {
                        for (unsigned long long int i_19 = 1; i_19 < 21; i_19 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */int) var_3);
                                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_12))))) - (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 22; i_20 += 1) 
                {
                    for (int i_21 = 1; i_21 < 20; i_21 += 4) 
                    {
                        {
                            arr_67 [i_15] [i_16] [i_21] = var_5;
                            var_40 &= ((/* implicit */short) ((signed char) max((((/* implicit */short) max((((/* implicit */unsigned char) var_10)), (var_16)))), (((short) var_8)))));
                            arr_68 [i_15] [i_15] [(_Bool)1] [i_15] [i_15] [10U] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) max((var_11), (((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_6)))))), (var_1)));
                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_5))))), ((+(var_0)))))))));
                /* LoopSeq 3 */
                for (int i_22 = 1; i_22 < 20; i_22 += 3) /* same iter space */
                {
                    var_43 &= ((/* implicit */short) var_4);
                    var_44 *= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_9))))));
                }
                for (int i_23 = 1; i_23 < 20; i_23 += 3) /* same iter space */
                {
                    var_45 += ((/* implicit */signed char) ((short) var_10));
                    var_46 = var_2;
                    var_47 = ((/* implicit */int) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13)))))))), ((+(max((var_6), (((/* implicit */unsigned int) var_8))))))));
                }
                for (unsigned char i_24 = 2; i_24 < 20; i_24 += 4) 
                {
                    var_48 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (max((var_6), (var_6)))));
                    var_49 &= ((/* implicit */short) (~(max((((var_14) >> (((((/* implicit */int) var_7)) - (74))))), ((~(var_11)))))));
                }
            }
        } 
    } 
}
