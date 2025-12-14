/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86404
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            arr_11 [i_1] [(unsigned char)2] [i_2] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_5 [(unsigned char)19] [i_3 - 1] [(unsigned char)12])) ? (var_2) : (((/* implicit */unsigned long long int) arr_8 [i_1]))))));
                            arr_12 [1ULL] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) arr_5 [6U] [i_3 - 1] [i_4]);
                            var_19 = ((/* implicit */unsigned long long int) min((((unsigned int) ((0ULL) != (((/* implicit */unsigned long long int) 3374579856U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [(unsigned char)10] [i_0] [6U])) || (((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0] [i_3 + 1])))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_6 [i_0 + 2] [i_0] [i_0] [i_0 + 2])))) ? (((((/* implicit */_Bool) min((3374579856U), (920387440U)))) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_0])))) : (max((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_5 [i_4] [i_3] [i_1]))))) : (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_5)))))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_15 [i_1] [i_1] [i_2] [i_3] [i_3 - 1] [i_0] [i_0] = (+((+(1584438838992593068ULL))));
                            var_21 = (+(4222836880U));
                        }
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((10540187537236993042ULL), (((/* implicit */unsigned long long int) (-(1240499827U)))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((((/* implicit */_Bool) max((var_17), (8202988759041678480ULL)))) ? (var_9) : (((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [(unsigned char)17])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) : (((unsigned int) arr_1 [i_0] [i_0]))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) ((arr_3 [i_0 + 2] [i_0 - 2] [i_0 - 2]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))))))) ^ (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [i_0 - 1]))))))))))));
    }
    for (unsigned char i_6 = 3; i_6 < 20; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    var_25 += max((min((((/* implicit */unsigned long long int) (+(170252175U)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (12950706223676217141ULL))))), (((unsigned long long int) (+(4124715121U)))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [5U] [5U]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 4124715121U)) ? (var_4) : (((/* implicit */unsigned long long int) 4124715120U)))) != (((unsigned long long int) 4942319618210480085ULL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) arr_19 [19U] [(unsigned char)20]))))) ? (arr_23 [i_6 + 1] [2ULL] [i_6 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2217421039U)))))))))));
                    arr_27 [i_7] [i_7] [i_7] [i_8] &= ((/* implicit */unsigned long long int) (+(min((arr_25 [i_6 - 2] [i_6 - 2] [i_6 + 1]), (arr_16 [i_6 - 2] [i_6 + 1])))));
                }
            } 
        } 
        arr_28 [i_6] [i_6] = 10243755314667873136ULL;
    }
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        var_27 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_9] [i_9]))))), (max((9057497879178189372ULL), (((/* implicit */unsigned long long int) 1098580049U))))));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((18446744073709551615ULL) << (((unsigned int) (-(18446744073709551615ULL))))))));
        var_29 -= 4186534739717176344ULL;
        /* LoopNest 2 */
        for (unsigned int i_10 = 3; i_10 < 12; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 3; i_12 < 11; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                        {
                            {
                                var_30 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) arr_30 [i_12] [i_10])))));
                                var_31 = ((/* implicit */unsigned long long int) max((var_31), (var_17)));
                            }
                        } 
                    } 
                    var_32 = (((!(((/* implicit */_Bool) arr_18 [i_9] [i_10 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_10] [i_11])) ? (((/* implicit */int) arr_18 [i_10] [i_11])) : (((/* implicit */int) arr_26 [i_9] [i_10 + 1] [7U] [i_11]))))) : (((unsigned int) arr_26 [i_9] [i_10 - 2] [i_10] [i_11])));
                    var_33 = (i_10 % 2 == zero) ? (((/* implicit */unsigned char) (~(((unsigned long long int) ((((/* implicit */int) (unsigned char)125)) >> (((arr_33 [i_10 + 2] [i_10 - 2] [i_10] [i_10]) - (62478466240749163ULL))))))))) : (((/* implicit */unsigned char) (~(((unsigned long long int) ((((/* implicit */int) (unsigned char)125)) >> (((((arr_33 [i_10 + 2] [i_10 - 2] [i_10] [i_10]) - (62478466240749163ULL))) - (7173297831269845134ULL)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 1) 
                        {
                            {
                                arr_45 [i_10] = min((min((max((((/* implicit */unsigned long long int) var_12)), (var_6))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_15] [i_9]))) : (8202988759041678480ULL))))), (((((/* implicit */_Bool) arr_7 [i_9] [17ULL] [i_11])) ? (((((/* implicit */_Bool) arr_3 [14U] [i_10 - 1] [i_11])) ? (12572415359575196270ULL) : (arr_36 [i_9] [i_10] [i_11] [i_10] [i_9]))) : (max((((/* implicit */unsigned long long int) 1211814877U)), (18446744073709551615ULL))))));
                                var_34 = ((/* implicit */unsigned long long int) ((((arr_4 [i_15]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (var_0))))))) ? (arr_3 [14U] [i_10 - 3] [i_11]) : ((-(min((((/* implicit */unsigned int) arr_40 [i_9] [i_9] [i_9] [i_9])), (arr_2 [i_15])))))));
                                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_14 + 3] [i_10 + 1])) ? (arr_41 [i_14 - 2] [i_10 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? ((+(arr_20 [i_9] [i_9] [i_10 + 2]))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)66)), ((~(((/* implicit */int) (unsigned char)115)))))))));
                                arr_46 [i_9] [i_9] [6ULL] [i_10] = (-(min((arr_23 [i_14 + 4] [i_14 - 1] [i_14]), (arr_23 [i_14 - 3] [11U] [i_14]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_36 = max((((((/* implicit */_Bool) ((var_8) - (arr_39 [i_9] [i_9] [i_9] [i_9] [12ULL] [i_9] [i_9])))) ? (min((((/* implicit */unsigned int) arr_38 [i_9])), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), ((-(532676608U))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_16 = 2; i_16 < 9; i_16 += 3) /* same iter space */
    {
        arr_50 [10ULL] = max((((unsigned char) 170252176U)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(5874328714134355346ULL))))))));
        /* LoopSeq 2 */
        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            arr_55 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((193772645U), (arr_19 [i_16] [i_17])))) ? (((8202988759041678480ULL) >> (((8202988759041678480ULL) - (8202988759041678437ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [2ULL]))))))))) ? (min((18446744073709551615ULL), ((+(var_8))))) : (((((/* implicit */_Bool) 12572415359575196270ULL)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_9)) : (var_17))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (12572415359575196270ULL)))))));
            var_37 = ((/* implicit */unsigned int) var_8);
            var_38 = ((/* implicit */unsigned char) arr_33 [i_16] [i_16] [i_17] [i_17]);
            /* LoopSeq 4 */
            for (unsigned char i_18 = 1; i_18 < 10; i_18 += 3) /* same iter space */
            {
                var_39 = ((/* implicit */unsigned int) min((var_39), (((unsigned int) min((arr_30 [i_18 + 2] [i_16 + 1]), (arr_34 [i_18] [(unsigned char)7] [i_18 - 1] [i_17]))))));
                var_40 = ((/* implicit */unsigned int) ((unsigned long long int) (+(arr_44 [i_18 - 1] [i_17] [i_16 + 1] [5ULL] [10ULL]))));
                arr_58 [(unsigned char)8] [i_18] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_26 [i_16 - 2] [13U] [i_18 + 1] [i_18]))) << (((var_0) - (14129438901088453357ULL)))));
                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) 0U)), (((unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_7))) || (((/* implicit */_Bool) (+(var_9))))))))))));
                /* LoopNest 2 */
                for (unsigned char i_19 = 3; i_19 < 10; i_19 += 1) 
                {
                    for (unsigned char i_20 = 2; i_20 < 10; i_20 += 1) 
                    {
                        {
                            arr_64 [i_16] [i_18] [i_18] [i_19] [0ULL] [i_20] = max((((unsigned long long int) var_16)), (((((/* implicit */_Bool) arr_53 [i_20 + 2])) ? (arr_54 [i_16 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_20 - 2] [i_19 + 1]))))));
                            var_42 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                            arr_65 [i_16] [i_16] [i_16 + 2] [i_17] &= ((/* implicit */unsigned char) ((((arr_4 [i_16 + 2]) | (arr_4 [i_18 - 1]))) ^ (((((/* implicit */_Bool) arr_4 [i_17])) ? (var_8) : (10540187537236993042ULL)))));
                        }
                    } 
                } 
            }
            for (unsigned char i_21 = 1; i_21 < 10; i_21 += 3) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned char) ((unsigned int) (+(arr_25 [i_21 + 2] [i_16 + 3] [i_16 - 2]))));
                arr_69 [i_17] [i_17] [i_17] = arr_14 [i_16 + 3] [i_16 - 1] [i_16] [i_16 + 3];
                var_44 = ((/* implicit */unsigned int) max((var_44), (min((((unsigned int) (unsigned char)197)), (((((/* implicit */_Bool) arr_44 [i_16 - 1] [i_17] [i_16 + 2] [i_21 + 1] [i_21])) ? (4124715121U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_21] [i_21 + 2])))))))));
            }
            for (unsigned int i_22 = 2; i_22 < 11; i_22 += 3) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_16 - 1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_16] [i_16] [i_17] [i_17] [i_17]))))));
                /* LoopSeq 2 */
                for (unsigned int i_23 = 1; i_23 < 10; i_23 += 4) 
                {
                    arr_77 [i_16] [i_22 + 1] [i_23 + 1] = min((((/* implicit */unsigned long long int) ((unsigned char) arr_42 [i_17] [i_17] [i_22 - 2] [10ULL] [i_17]))), ((~(((((/* implicit */_Bool) var_2)) ? (var_10) : (var_17))))));
                    var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) ^ (min((var_1), (((/* implicit */unsigned long long int) var_5))))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_1))) % (((/* implicit */int) min(((unsigned char)255), (var_14)))))))));
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [12ULL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4124715121U))))) : (((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_7 [i_23] [i_16] [i_16]))))))) : (((((/* implicit */_Bool) max((arr_71 [i_16] [i_17] [i_22] [(unsigned char)5]), (var_10)))) ? (min((((/* implicit */unsigned long long int) 0U)), (var_4))) : (arr_33 [i_17] [i_17] [i_22] [i_17])))));
                    var_48 &= ((/* implicit */unsigned long long int) (~((~(var_11)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_24 = 0; i_24 < 12; i_24 += 3) 
                    {
                        var_49 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_9)), (var_4)));
                        arr_81 [i_24] [5U] [i_17] [i_24] = ((/* implicit */unsigned int) ((unsigned long long int) arr_25 [i_17] [i_17] [i_22]));
                    }
                }
                for (unsigned int i_25 = 2; i_25 < 9; i_25 += 4) 
                {
                    var_50 ^= ((/* implicit */unsigned int) var_16);
                    arr_84 [i_16] [i_16] [i_22 + 1] [i_25] &= min((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), (arr_8 [i_25]))), (((unsigned int) max((3346724762U), (arr_37 [i_16 - 1] [i_17] [13U] [i_16 - 1] [i_22] [i_25])))));
                }
            }
            for (unsigned int i_26 = 2; i_26 < 11; i_26 += 3) /* same iter space */
            {
                var_51 = min((10540187537236993042ULL), (((/* implicit */unsigned long long int) 4294967295U)));
                var_52 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_62 [i_16 - 2] [i_17] [i_16 + 3] [i_16 - 2] [i_26 - 2] [i_17] [i_16])))));
            }
        }
        for (unsigned long long int i_27 = 0; i_27 < 12; i_27 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_28 = 0; i_28 < 12; i_28 += 2) 
            {
                for (unsigned char i_29 = 0; i_29 < 12; i_29 += 3) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 12; i_30 += 4) 
                    {
                        {
                            arr_98 [i_16] [6U] [(unsigned char)11] [i_29] [i_30] &= ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4222836880U)) / (var_6)))) ? (((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((unsigned int) arr_53 [1U])))) - (((unsigned int) ((unsigned char) 4124715121U))));
                            arr_99 [i_16] [(unsigned char)1] [i_16] [(unsigned char)1] [i_30] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))) == (((((/* implicit */_Bool) 939524096ULL)) ? (0ULL) : (12572415359575196270ULL))))))));
                            arr_100 [i_29] = var_2;
                        }
                    } 
                } 
            } 
            var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) (unsigned char)76))));
            /* LoopSeq 2 */
            for (unsigned long long int i_31 = 0; i_31 < 12; i_31 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_32 = 0; i_32 < 12; i_32 += 1) 
                {
                    for (unsigned long long int i_33 = 1; i_33 < 9; i_33 += 4) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_16] [i_16 + 1] [i_33 + 1] [i_33 + 2])) ? (((/* implicit */unsigned long long int) arr_24 [i_16 - 2] [i_16 + 1] [i_33 + 1] [i_33 + 2])) : (18446744072770027520ULL))));
                            var_55 &= ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (var_9))), (var_11)))) ? (((/* implicit */unsigned long long int) (-(arr_78 [i_33 - 1] [i_33 - 1] [8U] [i_32] [8U])))) : (((((/* implicit */_Bool) var_4)) ? ((-(var_2))) : (max((0ULL), (((/* implicit */unsigned long long int) arr_20 [i_16 - 2] [i_27] [i_27])))))));
                            var_56 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_88 [i_16] [i_27] [i_31])) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) arr_57 [i_16 - 2]))))) || (((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_9)), (18446744073709551615ULL)))))));
                        }
                    } 
                } 
                arr_110 [i_31] [i_27] [i_16 + 2] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))) ? (var_17) : (arr_54 [i_27])));
                arr_111 [3ULL] [3ULL] [3ULL] [i_31] = ((/* implicit */unsigned char) (-((-(((((/* implicit */int) (unsigned char)255)) >> (0ULL)))))));
            }
            for (unsigned long long int i_34 = 0; i_34 < 12; i_34 += 3) 
            {
                var_57 = ((/* implicit */unsigned int) ((unsigned long long int) (+(5874328714134355345ULL))));
                /* LoopNest 2 */
                for (unsigned char i_35 = 0; i_35 < 12; i_35 += 2) 
                {
                    for (unsigned int i_36 = 0; i_36 < 12; i_36 += 4) 
                    {
                        {
                            arr_120 [i_27] [(unsigned char)5] [i_35] = ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned long long int) var_11)), (var_8))) * (((/* implicit */unsigned long long int) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))) >= (((/* implicit */unsigned long long int) 4294967295U))));
                            var_58 ^= max((((/* implicit */unsigned long long int) 0U)), (12123077514390431421ULL));
                            var_59 = var_11;
                            arr_121 [i_36] [4ULL] [i_34] [i_27] [i_27] [(unsigned char)6] = ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_80 [i_36] [(unsigned char)8] [i_34] [i_27] [3U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_112 [i_16] [i_16 + 2] [i_16] [i_16])), (7233677663859470665ULL)))) ? (min((var_4), (((/* implicit */unsigned long long int) 4294967295U)))) : (((/* implicit */unsigned long long int) min((8188U), (var_18)))))));
                        }
                    } 
                } 
            }
            var_60 = arr_60 [(unsigned char)2];
        }
    }
    for (unsigned int i_37 = 2; i_37 < 9; i_37 += 3) /* same iter space */
    {
        var_61 ^= ((unsigned int) arr_19 [i_37 - 2] [i_37 + 3]);
        var_62 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_70 [i_37] [i_37] [i_37 - 2])) >= (arr_72 [i_37] [i_37 + 1]))))));
    }
    var_63 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) >= (2670299132U)))))))));
}
