/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62718
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551593ULL)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) var_15))))), (((unsigned int) (unsigned char)224))))) ? (var_10) : (((/* implicit */unsigned long long int) var_4))));
    var_19 |= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(arr_4 [i_2]))), (((/* implicit */long long int) ((unsigned char) var_3))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_0)) ? (var_10) : (arr_2 [i_1] [i_3]))))), (((((/* implicit */_Bool) (short)3504)) ? (274877906943LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) 4279240761U)), (arr_9 [i_1] [i_1] [i_3] [i_4]))), (var_17)));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (unsigned char)138))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((8875295740798990673ULL), (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)5520))))), (arr_0 [i_2]))))) : (var_16)));
                            var_24 = ((/* implicit */unsigned char) (-(1517564210U)));
                        }
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_20 [i_5] [i_3] [i_2] [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) var_13))))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (short)17134)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) : (((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_5])))))));
                        }
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 2441485439U)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_15)), (var_5)))) : (min((((/* implicit */unsigned long long int) (signed char)-1)), (0ULL))))));
                            arr_24 [i_6] [i_6] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_13))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_6])) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_8 [i_1] [i_2])))) : ((-(-1381841326)))));
                            arr_25 [i_0] [i_1] [i_1] [i_2] [i_3] [i_6] [(unsigned short)17] = ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_16 [9LL] [i_1] [i_2] [i_3] [i_6] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32748))) : (arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                        }
                        var_26 = ((/* implicit */unsigned char) ((unsigned long long int) (((~(var_10))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))))));
                    }
                    var_27 = ((/* implicit */unsigned char) min((var_27), (var_0)));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_4 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-13)))))) / (max((4294967295ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    var_29 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [(unsigned char)14] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (max((((/* implicit */unsigned long long int) var_0)), (var_17))))), (((/* implicit */unsigned long long int) var_3))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        arr_31 [i_0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_7])) ? (((((/* implicit */_Bool) arr_12 [i_7] [i_0])) ? (10888046039841186659ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_7] [i_7] [i_1] [i_8]))))) : (((/* implicit */unsigned long long int) var_5))));
                        arr_32 [i_8] [i_1] [(short)11] [i_8] [i_8] = ((/* implicit */short) ((signed char) var_3));
                        arr_33 [i_8] = ((/* implicit */short) 3663003584U);
                        arr_34 [i_0] [i_8] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)198));
                    }
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        arr_37 [i_0] [i_1] [i_1] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)128)), (2128430239535775965LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) : ((+(var_7)))))) ? (16743567792578567928ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        arr_38 [i_0] [i_1] [i_1] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))) ? (((max((((/* implicit */unsigned long long int) (signed char)-10)), (arr_7 [i_0] [i_1] [i_7]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1LL)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_7] [i_9] [i_9]))) : (((unsigned long long int) var_11))))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_41 [i_0] [i_7] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-31)) ? (arr_9 [i_0] [i_1] [i_7] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (var_7)));
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                        {
                            var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((17136540445148927969ULL), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_7] [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [(unsigned short)13]))))) ? (3945704770U) : (((((/* implicit */_Bool) var_2)) ? (((unsigned int) (unsigned char)131)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10 - 1] [(unsigned short)0] [i_7] [i_0] [18U] [i_10] [14ULL])))))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 15955697975426096052ULL)) ? (((var_4) | (var_1))) : (((/* implicit */unsigned int) ((int) arr_44 [i_7] [i_7]))))) > (((unsigned int) ((614085720U) | (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
                            arr_45 [i_0] [i_1] [i_7] [i_10] [i_10] [i_11] [i_11] &= ((/* implicit */unsigned long long int) var_2);
                        }
                        for (short i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) (unsigned char)3))))));
                            var_33 *= ((/* implicit */_Bool) (~(-1685693600)));
                        }
                        arr_48 [i_0] [i_1] [i_7] [i_10] = ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_0] [(signed char)3])) / (((/* implicit */int) arr_30 [i_0] [i_1] [i_10])))) | (((/* implicit */int) ((2625963683U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_1]))))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [(_Bool)1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]))) : (((((/* implicit */_Bool) -1LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        arr_52 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)76)), (var_17)))) ? (((/* implicit */long long int) (~(392485053U)))) : (1759810538014267644LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) var_12)) < (((/* implicit */long long int) 3U)))))) : (arr_14 [i_0] [i_1] [i_7] [i_13] [i_1]));
                        arr_53 [(unsigned char)12] [i_7] [i_1] [(unsigned char)14] = ((/* implicit */unsigned int) var_17);
                        var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_39 [i_13] [i_0] [i_0]))) | (((/* implicit */int) var_9))));
                    }
                    for (unsigned char i_14 = 2; i_14 < 16; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (+((-(((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_11))))))))))));
                        var_36 = ((/* implicit */unsigned long long int) var_4);
                    }
                    for (long long int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) ^ (((((/* implicit */_Bool) var_12)) ? (-4652106027377143214LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35642)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-1)))) : (var_10)));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)201)) ? (1173749310652878307LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1]))) / (2651705608U))))));
                        arr_60 [i_7] [(unsigned short)8] [12ULL] [i_15] &= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)11272)) : (((/* implicit */int) arr_39 [i_0] [i_7] [i_15])))));
                        var_39 = ((/* implicit */unsigned long long int) var_8);
                    }
                    arr_61 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (min((((/* implicit */unsigned int) -1568620804)), (var_12))) : ((+(var_4))))), (((/* implicit */unsigned int) var_15))));
                }
                for (short i_16 = 2; i_16 < 18; i_16 += 1) 
                {
                    arr_64 [i_0] [i_0] [i_16] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_30 [i_16 - 1] [(unsigned char)10] [i_16])) : (((/* implicit */int) var_11))))));
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) >= (((/* implicit */unsigned long long int) var_16))))))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)187)))));
                    var_41 = ((/* implicit */short) var_12);
                }
                /* LoopSeq 2 */
                for (long long int i_17 = 3; i_17 < 17; i_17 += 1) 
                {
                    arr_67 [i_17] [14LL] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) var_3)))));
                    var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((_Bool)1) ? ((((_Bool)1) ? (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))) < (max((((unsigned long long int) 4294967295U)), (((arr_44 [i_1] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_0] [4U])))))))));
                    arr_68 [i_17] [i_1] [i_17] [i_0] = ((unsigned long long int) ((unsigned char) ((var_4) % (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_0] [i_1] [i_17] [i_17 + 1]))))));
                }
                for (unsigned char i_18 = 0; i_18 < 19; i_18 += 1) 
                {
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) (unsigned short)9629)) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)13812)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0] [i_1] [i_18]))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_0] [i_1] [i_18]))))))));
                    arr_72 [i_18] [i_1] = ((/* implicit */unsigned long long int) 0U);
                }
                /* LoopNest 3 */
                for (int i_19 = 0; i_19 < 19; i_19 += 1) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 1) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_79 [i_0] [i_1] [9U] [i_20] [i_21] &= ((/* implicit */short) var_17);
                                var_44 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)-1)))) ? (var_7) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_0] [(_Bool)1] [(_Bool)1] [i_20] [i_21])))))))) ? (((/* implicit */long long int) min(((((_Bool)1) ? (1698421044U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_0] [i_0] [i_0] [i_0]))))), (658299179U)))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 73627746U)) ? (((/* implicit */int) (short)-1275)) : (((/* implicit */int) arr_78 [i_21] [i_20] [i_19] [i_1] [i_0]))))), (max((((/* implicit */long long int) -1)), (var_5)))))));
                                var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_1] [5LL] [i_21])) : (((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))) ? (((((/* implicit */_Bool) (unsigned short)50821)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) < (var_14))))) : (7U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                                var_46 = ((/* implicit */signed char) (_Bool)0);
                                var_47 = ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((arr_2 [i_20] [i_21]) <= (((/* implicit */unsigned long long int) 8388607)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))) != (-3750857981090770253LL))))))) : (max((((/* implicit */unsigned long long int) ((unsigned char) 0U))), (max((((/* implicit */unsigned long long int) 982991546U)), (var_7))))));
                            }
                        } 
                    } 
                } 
                var_48 = ((/* implicit */unsigned long long int) var_0);
            }
        } 
    } 
}
