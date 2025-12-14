/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60949
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) ((unsigned int) ((((((int) arr_0 [i_0])) + (2147483647))) << (((((max((var_6), (((/* implicit */long long int) var_7)))) + (2365LL))) - (6LL))))));
            var_18 += ((/* implicit */unsigned int) min(((+((-(arr_0 [i_1]))))), ((-(var_3)))));
            arr_4 [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)))));
            var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_16)) ? (26ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)7] [12] [i_0])))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min(((-(67108863U))), ((~(((((/* implicit */_Bool) 18446744073709551593ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3341454621U))))))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_2))));
                    }
                    arr_13 [i_3] [(_Bool)1] [i_1] [(short)8] = ((signed char) var_10);
                }
                var_22 = ((/* implicit */unsigned int) var_0);
            }
        }
        for (long long int i_5 = 2; i_5 < 14; i_5 += 3) 
        {
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)111), ((unsigned char)144))))) : ((((+(301875379U))) + (((unsigned int) var_12))))));
            arr_18 [11] [11] = ((/* implicit */_Bool) ((signed char) arr_8 [i_5] [i_5] [i_5 + 1] [i_5 + 1]));
            arr_19 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) / (31LL))));
            arr_20 [i_0] [(signed char)5] [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned short) var_7))), ((~(((((/* implicit */unsigned long long int) -9093372617614719402LL)) ^ (arr_16 [i_0] [i_0])))))));
        }
        var_24 -= ((/* implicit */unsigned short) max((var_3), (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [0U]))) : (var_2))), (max((8202593244781623323LL), (((/* implicit */long long int) arr_15 [i_0]))))))));
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 20; i_6 += 1) 
    {
        var_25 = ((/* implicit */signed char) (unsigned char)129);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 1; i_9 < 21; i_9 += 1) 
                    {
                        arr_31 [7U] [(unsigned short)13] [i_6] [(unsigned short)13] [i_6] = ((/* implicit */long long int) var_5);
                        arr_32 [10U] [10U] [10U] [(_Bool)0] [(_Bool)0] [i_6 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-26))))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) (-(var_9))))));
                        arr_33 [i_6] [5LL] [(_Bool)1] [(unsigned char)21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9 + 1]))) : (var_0)));
                        arr_34 [i_6] [(unsigned short)20] [(signed char)1] [i_9] = ((/* implicit */unsigned long long int) (~(arr_30 [i_9] [i_9 - 1] [(unsigned char)21] [i_9 - 1])));
                    }
                    arr_35 [(short)18] = ((/* implicit */signed char) ((((_Bool) -370594208035088935LL)) ? (((((/* implicit */_Bool) (short)0)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32746))))) : ((-(42ULL)))));
                    var_26 += ((/* implicit */unsigned short) 3960032280583476885ULL);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
            arr_38 [i_6] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 953512664U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))));
            arr_39 [13LL] = ((int) ((((/* implicit */_Bool) 3487976827U)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)63)) > (((/* implicit */int) (signed char)59))));
        }
        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                arr_46 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-2889908937446896298LL)))) ? (((((/* implicit */_Bool) var_9)) ? (3ULL) : (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) (-(3181185986375781574LL))))));
                /* LoopNest 2 */
                for (long long int i_13 = 4; i_13 < 21; i_13 += 2) 
                {
                    for (int i_14 = 1; i_14 < 20; i_14 += 2) 
                    {
                        {
                            arr_51 [i_6] [i_11] [i_13] [i_13] [i_14] [13U] [i_12] = ((/* implicit */unsigned short) (-(((long long int) 3341454636U))));
                            var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [i_13] [i_13 + 1] [i_13 - 3] [i_13]))));
                        }
                    } 
                } 
            }
            var_30 = (+(3173236354569463330LL));
            arr_52 [i_6] |= ((long long int) arr_21 [i_6 + 1] [i_6 + 1]);
        }
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (36ULL))))));
    }
    for (unsigned int i_15 = 2; i_15 < 14; i_15 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                for (unsigned int i_18 = 1; i_18 < 14; i_18 += 4) 
                {
                    {
                        var_32 -= ((/* implicit */unsigned short) ((signed char) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) 1246461234)) : (var_15))))));
                        arr_65 [i_18 - 1] [14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [(unsigned short)4] [(signed char)10] [1LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_16] [3U] [i_17] [i_18] [i_16] [(signed char)4]))) : (max((2676677056790179850LL), (((/* implicit */long long int) (unsigned char)156))))))) ? (max((((/* implicit */unsigned long long int) 0)), (17389898129497147152ULL))) : (((unsigned long long int) 2147483647))));
                    }
                } 
            } 
            var_33 = ((/* implicit */int) ((((/* implicit */long long int) (-(max((((/* implicit */unsigned int) arr_15 [(unsigned short)10])), (var_12)))))) <= (((arr_21 [i_15 + 1] [i_15 - 2]) | (max((((/* implicit */long long int) var_11)), (-8553152896030552331LL)))))));
        }
        for (short i_19 = 1; i_19 < 14; i_19 += 4) 
        {
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 15; i_20 += 2) 
            {
                for (long long int i_21 = 0; i_21 < 15; i_21 += 2) 
                {
                    for (signed char i_22 = 2; i_22 < 13; i_22 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((-361182712), (min((((/* implicit */int) (short)10658)), (var_14)))))) ? (var_15) : (((((/* implicit */_Bool) (unsigned char)132)) ? (3402910443U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            arr_77 [i_15 - 1] [i_19 + 1] [i_20] [i_15 - 1] [i_22] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_50 [(short)21] [i_22 - 1] [i_15 - 1])) ? (arr_50 [i_22] [i_22 + 2] [i_15 - 1]) : (arr_50 [i_22 + 2] [i_22 + 2] [i_15 + 1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)63)))))));
                            var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)63235)), (632009011U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */long long int) 268435455)), (-6696144873601083087LL))))))));
                            arr_78 [i_15] [i_19] [(unsigned char)13] [i_21] [(unsigned short)11] = ((/* implicit */signed char) arr_60 [i_15] [i_15 - 2] [i_15] [10]);
                        }
                    } 
                } 
            } 
            arr_79 [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_23 = 0; i_23 < 15; i_23 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_24 = 2; i_24 < 14; i_24 += 3) 
            {
                for (unsigned short i_25 = 0; i_25 < 15; i_25 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_26 = 0; i_26 < 15; i_26 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) var_16))), (max(((-(var_12))), (((/* implicit */unsigned int) (unsigned short)2676))))));
                            var_37 += ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned int) var_7)), (max((((/* implicit */unsigned int) (signed char)123)), (var_16))))));
                        }
                        arr_88 [10] [10] [0ULL] [i_25] = ((/* implicit */signed char) var_3);
                    }
                } 
            } 
            arr_89 [i_23] [14ULL] [14ULL] = ((/* implicit */unsigned int) ((_Bool) (~(arr_84 [i_15] [i_15 - 1] [(signed char)2] [0U]))));
            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) var_12))));
            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2030127839U)) ? (((/* implicit */int) (unsigned short)3663)) : (((/* implicit */int) (unsigned short)2676))));
        }
        for (unsigned int i_27 = 0; i_27 < 15; i_27 += 3) 
        {
            var_40 = ((/* implicit */unsigned int) (~((-(max((2251799813619712LL), (((/* implicit */long long int) (signed char)-55))))))));
            /* LoopNest 3 */
            for (long long int i_28 = 0; i_28 < 15; i_28 += 3) 
            {
                for (long long int i_29 = 0; i_29 < 15; i_29 += 2) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned short) (+(((unsigned int) 2592542751U))));
                            arr_103 [i_15 - 2] [i_27] [i_27] [i_29] [3U] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((-1LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) max((var_12), (31U))))))) ? ((+(4294967287U))) : (arr_47 [i_15])));
                        }
                    } 
                } 
            } 
            arr_104 [(unsigned char)4] = ((/* implicit */int) max((((/* implicit */long long int) ((33554431U) * (590627206U)))), (((((/* implicit */_Bool) arr_57 [i_15 - 2] [i_15 + 1] [i_15 - 2])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
            /* LoopNest 3 */
            for (unsigned int i_31 = 0; i_31 < 15; i_31 += 1) 
            {
                for (signed char i_32 = 0; i_32 < 15; i_32 += 4) 
                {
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((_Bool) var_14)))));
                            arr_115 [i_15] [i_27] [i_31] [9U] [i_32] [i_33] = ((/* implicit */unsigned char) ((int) -22));
                            arr_116 [8U] [i_27] = ((/* implicit */signed char) 28U);
                        }
                    } 
                } 
            } 
        }
        var_43 *= ((/* implicit */long long int) (((~(((long long int) (_Bool)1)))) > (((((/* implicit */_Bool) arr_71 [i_15 - 1] [(unsigned char)12] [(unsigned short)6] [i_15 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2723741414563377698LL)))));
        arr_117 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_69 [8LL] [(unsigned short)0] [(unsigned short)0]))))))) ? (((long long int) max((var_12), (((/* implicit */unsigned int) (signed char)-103))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_49 [i_15 - 2])), (var_12))))));
        var_44 = ((/* implicit */_Bool) arr_44 [17LL] [1LL] [i_15] [i_15 + 1]);
    }
    var_45 += ((/* implicit */unsigned short) ((unsigned int) ((short) (!(((/* implicit */_Bool) 15))))));
    /* LoopNest 2 */
    for (int i_34 = 4; i_34 < 24; i_34 += 3) 
    {
        for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
        {
            {
                arr_125 [i_34] [(signed char)16] = ((/* implicit */unsigned short) ((long long int) ((unsigned int) arr_122 [i_34 - 2] [i_34 - 2])));
                var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) ((_Bool) 2008610154))))));
                /* LoopSeq 2 */
                for (unsigned char i_36 = 3; i_36 < 24; i_36 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_37 = 0; i_37 < 25; i_37 += 1) 
                    {
                        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                        {
                            {
                                var_47 += ((/* implicit */short) ((unsigned char) (-(var_6))));
                                arr_133 [(short)0] [(signed char)21] [(short)16] [i_35] [i_36] [i_37] [i_38] = 1494828965U;
                            }
                        } 
                    } 
                    var_48 = ((/* implicit */long long int) min((var_48), (-6466015692403780470LL)));
                    arr_134 [10ULL] = ((/* implicit */signed char) max((max((arr_129 [i_34 - 1] [i_36 + 1] [i_36 + 1] [i_36 - 2]), (((/* implicit */unsigned int) ((unsigned short) arr_126 [i_36]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                    var_49 += ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 3402910471U)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_130 [i_34] [1] [i_34 - 4] [i_36 - 3]))))));
                }
                for (unsigned int i_39 = 0; i_39 < 25; i_39 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_40 = 0; i_40 < 25; i_40 += 1) 
                    {
                        arr_142 [(signed char)7] [i_35] [i_39] [i_39] [i_35] [i_34] = ((unsigned int) max(((~(590627213U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_132 [i_34] [(unsigned short)7])))))));
                        /* LoopSeq 3 */
                        for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
                        {
                            var_50 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-12892)), ((unsigned short)31059)))) ? (((unsigned long long int) arr_120 [i_34 - 3] [i_34 - 1])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            var_51 += ((/* implicit */unsigned short) (-(8655511918570745688LL)));
                            arr_145 [12U] [(signed char)4] [i_39] [23] = ((/* implicit */unsigned int) ((long long int) var_6));
                            arr_146 [21U] [21U] [21LL] = ((/* implicit */_Bool) max(((-(((/* implicit */int) ((unsigned char) arr_140 [9ULL] [i_39] [9ULL] [i_34 - 3]))))), (((/* implicit */int) (signed char)-118))));
                        }
                        for (unsigned short i_42 = 4; i_42 < 24; i_42 += 3) 
                        {
                            arr_150 [(_Bool)1] [i_35] [i_39] [i_40] [6LL] [(_Bool)1] = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_148 [24U] [(unsigned char)5] [i_39] [i_40] [i_40] [i_42] [i_42]))))), (((unsigned long long int) arr_144 [i_34] [i_40] [i_39] [(unsigned char)13] [i_34] [i_34] [i_34]))))));
                            arr_151 [15LL] [4ULL] [i_39] [i_39] [i_39] [i_39] = ((/* implicit */short) max(((-(((int) (unsigned short)34479)))), (((/* implicit */int) ((_Bool) var_4)))));
                        }
                        for (unsigned short i_43 = 1; i_43 < 24; i_43 += 4) 
                        {
                            var_52 = ((/* implicit */short) max((min((((/* implicit */unsigned int) -185787552)), (((((/* implicit */_Bool) (unsigned char)226)) ? (var_15) : (arr_138 [i_34]))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned short)5828)))))))));
                            var_53 = ((/* implicit */long long int) arr_141 [i_34 + 1] [19LL] [23U]);
                            var_54 -= ((/* implicit */unsigned char) ((unsigned int) max((var_2), (((/* implicit */long long int) arr_122 [i_43 - 1] [i_34 - 4])))));
                        }
                        var_55 = ((/* implicit */int) var_3);
                        var_56 = var_12;
                    }
                    var_57 -= min((((long long int) arr_130 [i_39] [i_35] [i_35] [6U])), (((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)111)), (var_16)))) & (((((/* implicit */_Bool) (signed char)-94)) ? (-2112310310690987894LL) : (3583063220751021697LL))))));
                    var_58 += ((/* implicit */long long int) ((min((((_Bool) (unsigned short)15111)), (var_8))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (_Bool)1)))))))));
                    var_59 = max((((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (unsigned short)16828)))))), (((((/* implicit */_Bool) max((2132560191U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_4))));
                }
            }
        } 
    } 
}
