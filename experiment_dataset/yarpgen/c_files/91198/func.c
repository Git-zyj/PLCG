/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91198
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
    var_20 = ((4294967290U) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */short) ((((((/* implicit */int) (signed char)13)) >> (((((((/* implicit */_Bool) arr_3 [i_3] [i_1] [i_0])) ? (var_10) : (((/* implicit */long long int) -2084703718)))) - (4615995603748760223LL))))) < (((/* implicit */int) var_1))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 18446744073709551615ULL))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((unsigned int) 4610560118520545280ULL);
        var_23 -= ((/* implicit */long long int) var_8);
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_11))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2084703696)), (2972613581282255456LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))) & (arr_10 [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)15931))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                var_26 = ((/* implicit */_Bool) max((var_26), ((((~(((/* implicit */int) arr_0 [i_4])))) != (((((/* implicit */_Bool) (short)-15918)) ? (((/* implicit */int) (_Bool)1)) : (576854615)))))));
                var_27 += ((/* implicit */short) (~(27U)));
            }
            var_28 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)38202)))) != (((/* implicit */int) (short)4941)))))));
            var_29 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_5]))));
        }
        /* vectorizable */
        for (short i_7 = 4; i_7 < 19; i_7 += 2) 
        {
            arr_24 [i_7] [i_7] [i_4] = ((/* implicit */unsigned int) arr_4 [i_4] [i_4]);
            arr_25 [i_4] |= ((((/* implicit */_Bool) var_14)) ? (2972613581282255456LL) : (((/* implicit */long long int) -2084703708)));
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (((((+(-30LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) -2084703718)) : (-30LL))) + (2084703751LL))))))));
            arr_26 [(short)4] = ((/* implicit */unsigned char) var_11);
        }
        /* LoopSeq 3 */
        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 2) 
        {
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (_Bool)0))));
            var_32 -= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)240)) ? (-1583335895) : (((/* implicit */int) (unsigned char)72))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4944))) : (((long long int) var_5)))) + (9223372036854775807LL))) >> (((-1874091) + (1874091)))));
        }
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            arr_35 [i_4] [4ULL] [i_4] = ((/* implicit */unsigned char) var_8);
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) var_14)), (var_16)))) ? (((int) 1492122092)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15072337252384276859ULL)) ? (((/* implicit */int) (short)-4927)) : (arr_31 [i_4])))) || (((/* implicit */_Bool) var_12)))))));
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3383625356U)) ? (max((7895473291426611755LL), (((/* implicit */long long int) (short)-31359)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-27911)) : (((/* implicit */int) (unsigned short)65522)))))));
            }
            for (int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    var_35 -= ((/* implicit */unsigned int) var_18);
                    arr_42 [(unsigned short)16] [i_9] [i_11] [i_12] [(unsigned short)11] [i_11] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65518)) >> ((((~(var_8))) - (2703092905U)))));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 4; i_13 < 19; i_13 += 2) 
                    {
                        arr_47 [(_Bool)1] [(_Bool)1] [i_11] [(_Bool)1] [i_13] [i_4] [i_11] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_48 [i_13] [i_12] [i_4] [i_9] [i_4] = ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4]))) > (((arr_45 [i_9] [i_9] [i_9] [i_12] [15U]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-22)))))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min(((short)31577), (((/* implicit */short) (_Bool)1)))))) ^ (((((/* implicit */_Bool) arr_23 [i_4] [i_13 - 1] [i_11])) ? (((/* implicit */long long int) 2090918069U)) : (arr_23 [17ULL] [i_9] [i_9]))))))));
                        var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) 911341940U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13] [i_13] [i_12] [i_11] [i_9] [(unsigned short)8]))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_8)))))) >> (((((((/* implicit */_Bool) arr_22 [i_4] [i_9] [i_13 + 1])) ? (((((/* implicit */_Bool) 0)) ? (arr_37 [(unsigned short)18] [(short)2] [(short)2]) : (((/* implicit */long long int) 911341956U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (_Bool)1))))))) - (911341933LL)))));
                        var_38 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    }
                }
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned int) var_5);
                        var_40 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_9] [i_15])) * (((/* implicit */int) var_0))));
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        var_41 -= ((((/* implicit */int) arr_11 [i_4])) * (((((/* implicit */int) (short)-6371)) / (var_18))));
                        var_42 ^= ((/* implicit */long long int) 2147483647);
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((arr_30 [i_14]) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-25849)) : (((/* implicit */int) (_Bool)1))))))))));
                        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) var_18))));
                        var_45 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-12524)))) ? (((((/* implicit */_Bool) arr_33 [i_4] [(unsigned short)4] [(unsigned short)4])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_7 [i_14] [i_9] [i_9]))) : (arr_13 [i_9])));
                    }
                    var_46 = ((/* implicit */_Bool) ((var_0) ? (min((((/* implicit */long long int) ((_Bool) arr_28 [i_4] [i_9] [i_4]))), (((((/* implicit */_Bool) var_8)) ? (-5968562801618899558LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) var_2))));
                    var_47 = ((/* implicit */short) 911341939U);
                    arr_58 [(short)9] [i_4] [i_11] [i_14] = ((/* implicit */long long int) max((var_16), ((short)-29)));
                }
                for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    arr_61 [i_4] [i_18] [i_11] [i_18] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-74)), (arr_55 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (max((((/* implicit */long long int) var_7)), (70368609959936LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                    var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) arr_2 [i_4]))))) % (((/* implicit */int) (signed char)58)))))));
                    arr_62 [i_18] = ((/* implicit */unsigned int) (short)-4941);
                }
                /* LoopSeq 2 */
                for (signed char i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
                {
                    var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-9)))))))) >> (((arr_54 [i_11] [i_9] [i_11] [i_11]) - (3579933220U))))))));
                    var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_19] [i_11] [i_9] [i_4])) ? (((/* implicit */int) ((signed char) arr_6 [(unsigned short)1] [i_9] [i_9] [i_9]))) : (((/* implicit */int) ((arr_53 [i_4] [i_4] [i_4] [i_4] [i_4]) <= (((/* implicit */long long int) (~(var_18))))))))))));
                }
                /* vectorizable */
                for (signed char i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_21 = 0; i_21 < 20; i_21 += 2) 
                    {
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 911341940U)) <= (18446744073709551615ULL)));
                        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30881))) : (3383625356U)));
                        var_53 = ((/* implicit */long long int) (_Bool)1);
                    }
                    arr_73 [i_20] [i_11] [10] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_4] [i_9])) / (((/* implicit */int) (unsigned short)42185))));
                    var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) ((((/* implicit */int) arr_63 [i_4] [i_11] [i_9] [i_4])) / (((/* implicit */int) (_Bool)1)))))));
                }
                arr_74 [i_11] [i_11] &= ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65515)) || (((/* implicit */_Bool) 134217728U))))), (549755805696LL))) > (min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) 4186112U)) ^ (192LL)))))));
            }
            for (int i_22 = 0; i_22 < 20; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 20; i_23 += 2) 
                {
                    for (signed char i_24 = 1; i_24 < 19; i_24 += 2) 
                    {
                        {
                            var_55 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_16)), (4186133U)));
                            var_56 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_11) >> (((arr_22 [i_4] [i_9] [i_22]) - (1076211435)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (arr_4 [(signed char)4] [i_9]))))), (((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) 0ULL)))))));
                            var_57 = ((/* implicit */unsigned long long int) (unsigned char)240);
                            var_58 = ((/* implicit */short) ((((((/* implicit */int) (short)-407)) + (2147483647))) >> (((((/* implicit */_Bool) 4012398454U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)19752))))));
                        }
                    } 
                } 
                var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                var_60 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_65 [i_4] [i_4] [i_22] [i_22])) ? ((~(((/* implicit */int) (short)-11)))) : (((((/* implicit */int) (short)-13761)) / (((/* implicit */int) (_Bool)1))))));
                var_61 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)28710)) : (((/* implicit */int) (_Bool)1)))))));
            }
            var_62 = max((((arr_13 [i_9]) - (arr_13 [i_4]))), (var_10));
        }
        for (long long int i_25 = 0; i_25 < 20; i_25 += 2) 
        {
            var_63 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)9)) ? (8421749028166217021LL) : (((/* implicit */long long int) 63U)))), (arr_53 [i_4] [i_4] [i_25] [i_4] [i_25])));
            /* LoopSeq 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                var_64 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_15)) ? (79U) : (4290781183U)))));
                var_65 *= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 536346624U)) : (16809964037828411578ULL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_85 [(short)8])), (arr_75 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) (signed char)120)))));
                var_66 = ((/* implicit */short) ((((((/* implicit */int) arr_63 [i_26] [i_25] [i_26] [i_4])) * (((/* implicit */int) (signed char)0)))) * (((((((/* implicit */_Bool) 11746359581538730173ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_0)))) * ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65533))))))));
            }
            for (unsigned char i_27 = 2; i_27 < 19; i_27 += 2) 
            {
                arr_92 [i_4] [i_25] [7U] [i_27] = ((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)0)))) / ((~(((/* implicit */int) ((11746359581538730158ULL) != (((/* implicit */unsigned long long int) 0U)))))))));
                var_67 = ((/* implicit */unsigned long long int) max((var_67), (((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)62)), ((short)(-32767 - 1)))))));
            }
            /* LoopSeq 2 */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                var_68 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 114688U)) ? (arr_9 [16U]) : (((/* implicit */int) arr_66 [i_4] [i_25] [i_25] [i_4] [i_25] [i_25]))));
                arr_95 [i_28] [i_28] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)32691)) != (((/* implicit */int) var_13)))))) > (0U))) ? (((/* implicit */int) ((40476671U) < (4145428522U)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13)))) < (((((/* implicit */_Bool) 6172144154506331133ULL)) ? (2130706432U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))))));
            }
            for (short i_29 = 1; i_29 < 17; i_29 += 2) 
            {
                var_69 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */unsigned long long int) 0U)) : (11746359581538730176ULL)))));
                var_70 |= ((/* implicit */int) (signed char)-2);
                arr_98 [i_4] [i_25] [i_25] [i_29] = ((/* implicit */short) (~(max((270215977642229760ULL), (((/* implicit */unsigned long long int) 4120535474U))))));
            }
            /* LoopNest 2 */
            for (long long int i_30 = 0; i_30 < 20; i_30 += 2) 
            {
                for (short i_31 = 0; i_31 < 20; i_31 += 2) 
                {
                    {
                        arr_106 [i_4] [i_25] [i_30] [5ULL] [i_31] [i_31] = ((/* implicit */_Bool) 4294967283U);
                        var_71 = ((/* implicit */short) min((var_71), (((/* implicit */short) max(((unsigned short)57344), (((/* implicit */unsigned short) var_9)))))));
                        var_72 ^= (signed char)17;
                        arr_107 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 1073479680U)))) ? (min((270215977642229758ULL), (((/* implicit */unsigned long long int) var_19)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4145428529U), (967243612U)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_19 [i_31] [i_30] [i_4])) << (((arr_33 [i_4] [i_4] [i_30]) - (582646693173816335ULL))))))))));
                        var_73 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) > (-5176958420564720398LL)));
                    }
                } 
            } 
            arr_108 [17LL] &= ((/* implicit */unsigned char) (+(4294967295U)));
        }
        var_74 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)0))));
        var_75 = ((/* implicit */signed char) max((var_75), (((/* implicit */signed char) ((short) (unsigned short)38377)))));
    }
    for (signed char i_32 = 0; i_32 < 20; i_32 += 2) /* same iter space */
    {
        var_76 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-30804))));
        var_77 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) 1978050783U))) & (((/* implicit */int) (_Bool)1))));
    }
}
