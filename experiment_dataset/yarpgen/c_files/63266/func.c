/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63266
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_17))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) 7197752798513953724LL)) ? (((unsigned int) ((unsigned int) var_11))) : (((/* implicit */unsigned int) 3)));
        arr_4 [i_0] [i_0] = ((/* implicit */int) max((((((((/* implicit */_Bool) var_11)) ? (3002177450U) : (((/* implicit */unsigned int) arr_0 [i_0])))) + (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) ((int) (-2147483647 - 1))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3702968206U)), (arr_1 [i_0] [i_0])))) ? (max((((/* implicit */long long int) (_Bool)1)), (4343645768018716689LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)33274)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (short)-17845);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        for (int i_5 = 1; i_5 < 20; i_5 += 1) 
                        {
                            {
                                arr_18 [i_1] [i_2] [i_4] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) min((4235016391U), (683601125U)))), (min((-9223372036854775791LL), (-5830971941390417826LL)))))));
                                arr_19 [i_1] [i_2] [i_4] [(short)12] [i_5] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((_Bool) max((((/* implicit */long long int) (short)-32175)), (5835761292266397166LL))))), ((unsigned short)1023)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((173955400) ^ (-1664148598)))), (max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47985))) : (arr_16 [i_1] [(unsigned char)22] [i_2] [i_2] [i_1]))), (((/* implicit */long long int) max((-870603279), (((/* implicit */int) (unsigned char)109)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                arr_24 [i_1] [(short)12] [i_3] [9LL] = ((/* implicit */_Bool) ((short) -1509623648));
                                arr_25 [i_7] [i_6] [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 636536404U)) ? (arr_8 [i_6]) : (arr_8 [i_1])))));
                                arr_26 [i_2] [i_3] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13751))) : (-6336341850657611030LL))));
                                arr_27 [i_6] = var_14;
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 1; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) min((var_22), ((~(((/* implicit */int) max((arr_37 [i_10] [i_10 + 1] [20U] [i_10 + 1]), (((/* implicit */short) arr_12 [i_10] [i_1] [i_1] [i_10 + 1])))))))));
                        arr_38 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -2147483637)) ? (2147483647) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) (unsigned short)43604)) ? (((/* implicit */long long int) var_8)) : (arr_23 [i_1] [i_10] [i_10] [i_10] [i_9])))))) ? (((/* implicit */long long int) min((70253494U), (19U)))) : (min((((((/* implicit */_Bool) var_4)) ? (225036782439089101LL) : (arr_23 [7U] [i_8] [7U] [i_9] [i_10 - 1]))), (((/* implicit */long long int) var_5))))));
                        var_23 = (-((~(arr_28 [i_10 + 1]))));
                        arr_39 [i_1] |= ((/* implicit */unsigned short) max((((((/* implicit */long long int) 4294967295U)) ^ (9223372036854775807LL))), (var_3)));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((187697119U), (var_11)))) ? (((/* implicit */int) arr_35 [i_1] [20U] [20U] [i_1] [i_1] [(unsigned char)18])) : (((/* implicit */int) (unsigned char)102))))) <= (((((/* implicit */_Bool) 4294967280U)) ? (3133293150972161787LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (unsigned short)0)))))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
    {
        arr_42 [i_11] = ((unsigned char) var_5);
        arr_43 [i_11] [i_11] &= ((/* implicit */int) ((((/* implicit */_Bool) 3907642131U)) || (((/* implicit */_Bool) arr_28 [i_11]))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_13 = 4; i_13 < 9; i_13 += 4) 
        {
            arr_50 [i_12] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1972306043)) ? (((/* implicit */int) arr_34 [i_13 + 2] [i_13 - 1] [i_13 - 2])) : (((/* implicit */int) (unsigned short)65522))));
            /* LoopNest 2 */
            for (unsigned short i_14 = 2; i_14 < 10; i_14 += 1) 
            {
                for (long long int i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_16 = 2; i_16 < 8; i_16 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((128124245U) / (var_11)))));
                            var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (short)3339)) : (((/* implicit */int) (unsigned short)17))));
                            arr_59 [i_12] [i_14 + 2] [i_14] = ((/* implicit */unsigned short) 2147483632);
                            arr_60 [i_12] [i_12] [i_14 + 1] [i_14] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3273674283U)) ? (((/* implicit */int) (unsigned short)7712)) : (((/* implicit */int) arr_56 [i_12] [i_13] [i_14] [i_14] [(_Bool)1])))))));
                        }
                        for (unsigned int i_17 = 2; i_17 < 8; i_17 += 1) /* same iter space */
                        {
                            arr_65 [i_12] [i_13] [i_14] [10] [0] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)40)) > (((((/* implicit */int) var_10)) * (1066338922)))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((unsigned int) arr_12 [i_12] [i_12] [i_13] [i_17 + 1]))));
                            var_28 += arr_5 [i_12] [i_12];
                            var_29 = ((((/* implicit */_Bool) -1984517805)) ? (1558233197) : (arr_9 [i_13] [i_13 + 2] [i_14 - 1]));
                            arr_66 [i_12] [i_12] [0U] [i_14] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1059515549)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38095)))));
                        }
                        for (unsigned short i_18 = 3; i_18 < 10; i_18 += 4) 
                        {
                            arr_69 [i_14] = ((/* implicit */long long int) ((int) 0U));
                            arr_70 [i_14] = ((/* implicit */unsigned int) ((int) var_18));
                            arr_71 [i_14] = ((/* implicit */unsigned char) ((int) 963980732U));
                            var_30 = ((/* implicit */short) var_16);
                        }
                        for (unsigned int i_19 = 0; i_19 < 12; i_19 += 3) 
                        {
                            arr_76 [i_12] [i_14] [i_14] [(unsigned char)6] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) ((4173448865U) / (((/* implicit */unsigned int) 1415646851))))) ? (((((/* implicit */_Bool) var_17)) ? (2678463454U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) var_8))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) -714253929)) : (var_13))))));
                            var_32 = ((/* implicit */_Bool) arr_5 [i_13] [i_13]);
                        }
                        var_33 += ((/* implicit */short) (~(arr_62 [i_12] [i_13] [i_14] [i_14] [i_15] [i_15] [i_15])));
                    }
                } 
            } 
            arr_77 [i_13] [5] = ((/* implicit */unsigned char) (_Bool)1);
            var_34 = (~(arr_0 [i_13 + 2]));
        }
        for (unsigned short i_20 = 0; i_20 < 12; i_20 += 2) 
        {
            arr_81 [i_12] [i_12] [i_12] = ((/* implicit */long long int) var_15);
            arr_82 [i_12] [i_20] = (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -520809411)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) : (((unsigned int) var_13)));
        }
        for (unsigned int i_21 = 2; i_21 < 11; i_21 += 2) 
        {
            arr_85 [i_21] [i_12] = ((/* implicit */unsigned char) (~(arr_74 [i_21] [i_21] [i_21] [i_21 - 2] [i_21])));
            arr_86 [i_12] = ((/* implicit */int) var_16);
        }
        for (unsigned short i_22 = 3; i_22 < 8; i_22 += 2) 
        {
            arr_89 [i_12] [(unsigned short)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_36 [(unsigned char)1] [(unsigned char)1] [i_12] [(unsigned char)1] [i_22 - 1] [i_22 - 2])) : (((/* implicit */int) arr_36 [i_12] [i_12] [i_12] [i_22] [i_22] [i_22 + 1]))));
            var_35 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((-(arr_13 [i_12] [14LL])))));
            var_37 = ((/* implicit */unsigned int) -2065012883);
            arr_90 [i_12] = ((/* implicit */unsigned int) ((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_22 + 4] [11] [i_22 + 2] [i_22 + 4] [i_12])))));
        }
        /* LoopNest 3 */
        for (unsigned short i_23 = 0; i_23 < 12; i_23 += 4) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                for (unsigned int i_25 = 0; i_25 < 12; i_25 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_26 = 2; i_26 < 11; i_26 += 1) 
                        {
                            var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_25] [i_26] [i_26 - 1] [20LL] [i_26 + 1])) && (((/* implicit */_Bool) arr_72 [i_26] [(unsigned short)2] [i_26 + 1] [i_26 + 1] [i_26 - 1] [i_26]))));
                            var_39 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) 2907781989U)) >= (-661314256645445446LL))));
                        }
                        for (short i_27 = 3; i_27 < 9; i_27 += 1) 
                        {
                            arr_104 [i_27] [(unsigned char)9] [i_12] [i_12] [(short)9] [i_12] = ((/* implicit */int) (unsigned short)65520);
                            arr_105 [i_12] [i_27] [0U] [i_12] [i_12] = ((((/* implicit */int) ((unsigned char) (_Bool)1))) % (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (short)(-32767 - 1)))))));
                            var_40 = ((/* implicit */int) var_4);
                            arr_106 [6] [6] [i_23] [6] [i_27] [(unsigned char)6] [i_27] = ((/* implicit */unsigned int) arr_100 [i_27 + 1] [i_27 + 1] [i_27 - 2] [10] [(short)9]);
                            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */_Bool) 666656997)) ? (((/* implicit */long long int) ((1516788195) / (2033149372)))) : (arr_15 [i_27 - 1] [i_27 - 1] [i_27] [(unsigned char)21] [(unsigned short)13]))))));
                        }
                        arr_107 [i_23] [i_24] [i_24] [(short)3] = ((/* implicit */short) (_Bool)1);
                        arr_108 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) arr_33 [14] [i_24] [14])) : (1916094755U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (_Bool)1))))))));
                        arr_109 [6U] [i_23] = ((/* implicit */int) ((arr_45 [i_12]) >= (2142966434U)));
                    }
                } 
            } 
        } 
        arr_110 [i_12] [i_12] = ((/* implicit */_Bool) ((var_9) ? (var_16) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61794)) ^ (((/* implicit */int) var_18)))))));
        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_12])) ? (arr_28 [i_12]) : (arr_28 [(_Bool)1])));
    }
}
