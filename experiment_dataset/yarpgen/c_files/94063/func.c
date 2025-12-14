/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94063
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
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 &= ((/* implicit */unsigned int) var_5);
                var_11 = ((unsigned char) (-(((/* implicit */int) (unsigned char)95))));
                var_12 += ((/* implicit */unsigned int) ((((_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) ((unsigned int) ((var_7) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_1] [i_0]))))))));
                var_13 *= var_3;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                arr_13 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)160))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    arr_16 [i_2] [i_3] [i_2] [i_4 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) (unsigned char)16)), (arr_15 [i_3] [i_4]))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)80))))))) == (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_4] [i_4] [i_4 - 1]), (arr_4 [i_4] [i_4] [i_4 + 1])))))));
                    arr_17 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (~(arr_8 [i_4 - 1])));
                    arr_18 [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_4 [i_4 - 1] [i_4] [i_4]));
                    var_14 ^= ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_7) ? (var_1) : (((/* implicit */unsigned int) arr_7 [i_2])))))))), (((unsigned int) ((((/* implicit */_Bool) 1881153176U)) || (((/* implicit */_Bool) arr_14 [i_3])))))));
                    var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2413814120U)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (1881153175U)))))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_1 [i_2] [i_3]))));
                }
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    arr_22 [i_2] [i_5] [i_5] &= ((/* implicit */_Bool) min((((/* implicit */long long int) 2413814112U)), (((min((((/* implicit */long long int) 4294967288U)), (7825444394677137484LL))) << (((((/* implicit */int) (unsigned char)60)) - (45)))))));
                    var_16 = ((/* implicit */int) (~(2413814122U)));
                }
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_2 [i_6])))));
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((2413814120U), (var_1))))))) << (((((unsigned long long int) 2413814119U)) - (2413814114ULL)))));
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_11 [i_2] [i_2] [i_2]))) << (((max((((var_3) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_2] [i_3] [i_3] [i_6] [i_6] [i_7]))))), (min((1881153174U), (((/* implicit */unsigned int) var_7)))))) - (115U)))));
                        arr_28 [i_7] [i_3] [i_2] [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) var_2);
                        arr_29 [i_2] [i_6] [i_7] = ((/* implicit */unsigned char) arr_1 [i_2] [i_7]);
                        var_20 += ((/* implicit */unsigned int) (unsigned char)1);
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
                        {
                            var_21 = ((min((((/* implicit */unsigned int) var_2)), (var_6))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                            var_22 ^= ((unsigned int) (+(((long long int) var_2))));
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_23 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) (+(var_1))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3] [i_9])) || (var_2)))), (min((1881153188U), (((/* implicit */unsigned int) var_2))))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 1682503303)) ? ((-(((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1881153166U)))))));
                            arr_34 [i_2] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(var_2))) ? (((unsigned int) arr_23 [i_3] [i_3] [i_7] [i_3])) : (((((/* implicit */_Bool) 2825603234U)) ? (2413814108U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (3176918992U) : (((/* implicit */unsigned int) arr_33 [i_2] [i_3] [i_3] [i_7] [i_3] [i_3])))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
                            var_25 += ((/* implicit */long long int) arr_19 [i_2] [i_2] [i_2]);
                            arr_35 [i_2] [i_9] [i_6] [i_7] [i_9] [i_9 - 1] [i_2] = var_9;
                        }
                        for (int i_10 = 3; i_10 < 19; i_10 += 4) 
                        {
                            var_26 -= (~(max(((-(1881153176U))), (1469364061U))));
                            arr_38 [i_2] [i_3] [i_6] [i_7] [i_10] = ((/* implicit */_Bool) var_0);
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_27 += ((/* implicit */unsigned int) ((long long int) arr_27 [i_2] [i_3] [i_6] [i_6] [i_11] [i_11]));
                        var_28 = ((/* implicit */unsigned char) ((unsigned int) arr_20 [i_3] [i_11]));
                    }
                    for (unsigned int i_12 = 2; i_12 < 20; i_12 += 1) /* same iter space */
                    {
                        var_29 ^= ((((/* implicit */_Bool) var_6)) ? (((1881153176U) << ((+(((/* implicit */int) var_7)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_2] [i_3] [i_3] [i_12] [i_12] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) : (var_6)))))))));
                        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1127776584U)))) ? (((/* implicit */long long int) 1881153174U)) : (max((((/* implicit */long long int) var_4)), (arr_31 [i_3] [i_3] [i_3] [i_3] [i_3])))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (3548953811U) : (((/* implicit */unsigned int) var_4)))))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)10)) ? (-4723111511281605860LL) : (((/* implicit */long long int) 3759906080U))));
                    }
                    for (unsigned int i_13 = 2; i_13 < 20; i_13 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */int) max((((/* implicit */unsigned int) 0)), (1881153188U)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 2069098289))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_2] [i_3] [i_6] [i_13] [i_14]))))) : (((/* implicit */int) ((short) var_3)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1881153166U)))), (min((var_8), (var_0)))))));
                            arr_52 [i_14] [i_3] [i_3] = ((/* implicit */short) (~(max((-139658657), (((/* implicit */int) (_Bool)1))))));
                        }
                        /* vectorizable */
                        for (long long int i_15 = 2; i_15 < 20; i_15 += 4) 
                        {
                            arr_55 [i_2] [i_3] [i_3] [i_13] [i_15] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)15))));
                            var_34 ^= ((unsigned int) 6152284673521975815LL);
                            var_35 *= ((/* implicit */unsigned char) ((arr_41 [i_15]) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_2] [i_13] [i_13 + 1] [i_15 + 1]))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))));
                        }
                        var_36 -= ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_5)))));
                    }
                    var_37 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (3552930316U)))) ? (((/* implicit */long long int) arr_32 [i_2] [i_2])) : (arr_20 [i_2] [i_3]))), (max((((((/* implicit */_Bool) var_4)) ? (arr_20 [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_6] [i_6] [i_3] [i_2] [i_2]))))), (arr_31 [i_2] [i_2] [i_3] [i_3] [i_6])))));
                    arr_56 [i_2] [i_3] [i_6] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                }
                arr_57 [i_2] = ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
    var_38 = var_8;
    /* LoopNest 2 */
    for (int i_16 = 2; i_16 < 21; i_16 += 3) 
    {
        for (int i_17 = 0; i_17 < 23; i_17 += 3) 
        {
            {
                var_39 += ((/* implicit */unsigned int) ((((min((((/* implicit */int) ((((/* implicit */int) (unsigned char)205)) >= (var_4)))), ((~(((/* implicit */int) (_Bool)1)))))) + (2147483647))) << ((((+(((/* implicit */int) (short)31300)))) - (31300)))));
                /* LoopSeq 1 */
                for (unsigned int i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    var_40 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_59 [i_17]))) << ((+(((/* implicit */int) var_7))))))) ? (((/* implicit */int) (!(max((var_2), (arr_5 [i_16])))))) : (((/* implicit */int) var_7))));
                    arr_65 [i_18] = ((/* implicit */_Bool) ((long long int) ((max((((/* implicit */int) var_3)), (1682503303))) + (((((/* implicit */_Bool) arr_3 [i_16])) ? (((/* implicit */int) (_Bool)1)) : (arr_64 [i_16] [i_17] [i_18] [i_18]))))));
                }
            }
        } 
    } 
}
