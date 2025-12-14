/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57937
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((((/* implicit */_Bool) -1LL)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_16)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min(((+(15LL))), (((/* implicit */long long int) min(((unsigned char)155), ((unsigned char)155))))));
                                var_20 = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2854587818088427238LL)))))) * (4201912492U));
                        arr_18 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) var_15);
                        arr_19 [i_1] = (+((-(5772936558529256857LL))));
                    }
                    for (short i_6 = 1; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_7 = 1; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            var_22 += min((((/* implicit */unsigned short) arr_13 [i_0] [6LL] [i_2] [i_0] [i_7 + 1] [i_7])), (min((var_17), (((/* implicit */unsigned short) arr_13 [i_2] [i_6] [i_0] [i_0] [i_1] [i_0])))));
                            arr_24 [i_0] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_6 + 1] [i_1] [i_2] [i_6] [i_6])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_7 + 3] [(signed char)10])) : (((/* implicit */int) arr_11 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_7 - 1] [i_7])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_13)))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 877581663U)) ? (((/* implicit */long long int) 0U)) : (2854587818088427238LL)));
                        }
                        for (short i_8 = 1; i_8 < 19; i_8 += 2) /* same iter space */
                        {
                            arr_29 [i_1] [i_8 - 1] [i_6] [i_2] [4LL] [i_1] = (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)101)), (((2854587818088427238LL) / (3899967804335589695LL)))))));
                            arr_30 [i_1] [i_6] [i_2] = ((/* implicit */unsigned short) (signed char)26);
                            arr_31 [i_0] [i_1] [i_2] [i_1] [i_1] [i_8] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_11)))))))));
                        }
                        for (short i_9 = 1; i_9 < 19; i_9 += 2) /* same iter space */
                        {
                            arr_34 [i_0] [i_0] [i_1] = ((/* implicit */short) ((signed char) min((((/* implicit */long long int) arr_14 [i_6 + 2] [i_9 + 1] [i_2])), (min((((/* implicit */long long int) (unsigned char)101)), (arr_5 [i_1] [i_1] [i_1]))))));
                            arr_35 [i_0] [i_1] [i_2] [i_1] [i_9] = ((/* implicit */signed char) min((((/* implicit */long long int) min(((+(((/* implicit */int) arr_11 [i_0] [10ULL] [i_2] [i_6 - 1] [i_9])))), (((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6]))))), (min((((/* implicit */long long int) 4294967295U)), (-1LL)))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (short)1687)) ? (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) : (((/* implicit */int) var_5)))));
                            var_25 = ((((/* implicit */_Bool) arr_6 [i_6 - 1] [i_6 + 1])) ? ((+(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 2]), (arr_14 [i_6 + 2] [i_6 + 1] [i_6 + 1]))))));
                            var_26 += ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                    var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_0), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) arr_4 [i_0] [(unsigned char)7])))))) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)129)) || (((/* implicit */_Bool) var_4)))))));
                    var_28 = min((((/* implicit */unsigned int) (short)0)), (min((arr_21 [i_1]), (((/* implicit */unsigned int) var_5)))));
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
                    {
                        arr_46 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (_Bool)0);
                        arr_47 [i_0] [i_1] [(signed char)0] [i_12] [i_0] &= ((/* implicit */signed char) (unsigned char)155);
                        var_29 -= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_13 [i_12] [i_12] [i_11] [i_11] [i_1] [i_0]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                    {
                        arr_51 [i_1] [i_1] [i_11] [14ULL] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-1706))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1676)) * (((/* implicit */int) arr_39 [i_0] [i_1] [(unsigned char)2] [i_13]))));
                        var_31 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_6 [i_0] [i_1]) : (((/* implicit */int) var_6)));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0] [i_1] [i_11] [i_13]))) / (arr_8 [i_0])));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_0] [i_1] [(signed char)5] [i_14])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_34 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)155))));
                        var_35 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)34962))));
                        var_36 -= ((/* implicit */unsigned short) (-(arr_8 [i_1])));
                    }
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((arr_36 [i_0]) - (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))))));
                }
                for (signed char i_15 = 2; i_15 < 20; i_15 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */_Bool) arr_14 [i_15 - 1] [i_15 - 2] [i_15 - 2]);
                    var_39 |= ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */int) arr_28 [i_1] [(_Bool)1] [i_15 - 2] [i_15 + 1] [i_15 + 1] [i_15])), (var_0)))), (min((arr_5 [i_0] [i_15 + 1] [i_0]), (((/* implicit */long long int) arr_28 [11U] [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 2] [i_15]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        for (short i_17 = 0; i_17 < 22; i_17 += 2) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
                                var_41 += ((/* implicit */unsigned int) arr_58 [i_16]);
                                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_17 [i_1] [i_16]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_17 [i_0] [i_1]))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (arr_9 [i_15 - 2] [i_15 - 1] [i_15] [i_15 + 2] [i_1] [i_15])))) : (((((/* implicit */_Bool) arr_36 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) : (arr_5 [i_15 - 2] [i_15 + 2] [i_1])))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)0)), (arr_14 [i_15 - 2] [i_15 + 2] [i_15 + 1])))), (min((1LL), (((/* implicit */long long int) arr_14 [i_15 - 2] [i_15 + 2] [i_15 + 1]))))));
                }
                /* vectorizable */
                for (signed char i_18 = 2; i_18 < 20; i_18 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_20 = 0; i_20 < 22; i_20 += 2) 
                        {
                            var_44 -= ((/* implicit */unsigned short) (+(arr_50 [i_0] [i_0] [i_0] [i_0])));
                            arr_74 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)155);
                            var_45 = ((/* implicit */short) arr_5 [i_0] [i_1] [i_1]);
                            var_46 |= ((/* implicit */unsigned long long int) arr_0 [i_18 - 1] [i_18 + 1]);
                            var_47 = ((/* implicit */long long int) arr_26 [i_18 + 2] [i_18 + 1] [i_18 - 1] [i_18 - 1] [i_1]);
                        }
                        for (unsigned int i_21 = 2; i_21 < 20; i_21 += 2) 
                        {
                            arr_77 [i_0] [i_0] [17LL] [i_19] [i_1] = ((/* implicit */int) (unsigned char)155);
                            var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_21 + 1] [i_1] [i_18 - 2])) ^ (((/* implicit */int) arr_14 [i_21 + 1] [i_1] [i_18 - 2]))));
                            arr_78 [(unsigned char)9] [i_1] [i_0] [i_19] [i_21] [i_1] [6LL] = ((/* implicit */int) (-(arr_75 [i_1] [i_21 - 1] [i_18 + 2] [i_18] [i_18] [i_1])));
                            arr_79 [i_1] [i_1] [i_1] [(unsigned char)19] = ((/* implicit */int) ((unsigned short) arr_23 [i_1]));
                            var_49 = arr_76 [i_18] [i_18] [i_1];
                        }
                        for (unsigned int i_22 = 3; i_22 < 21; i_22 += 2) 
                        {
                            var_50 = ((/* implicit */int) min((var_50), (((((/* implicit */_Bool) arr_27 [i_0] [i_18 + 1] [i_0])) ? (((/* implicit */int) arr_15 [i_18] [i_18] [19U] [i_18] [i_18 - 2])) : (((/* implicit */int) var_10))))));
                            arr_82 [i_0] [i_1] [i_0] [i_19] [i_22] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_22] [i_19] [i_18] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)161)) : (arr_44 [i_0] [i_1] [i_18] [i_19] [21LL])));
                        }
                        var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((((/* implicit */_Bool) arr_28 [20LL] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 2] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_18 + 2] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 2] [i_18]))) : (383600387U))))));
                    }
                    var_52 = ((/* implicit */short) (-(arr_3 [i_1] [i_18 - 1])));
                    var_53 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(3740303063U)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_54 [i_0]))));
                }
                var_54 = ((/* implicit */short) (~(min((arr_59 [i_1]), (((/* implicit */unsigned int) arr_14 [i_1] [i_0] [i_0]))))));
                var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_1] [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_23 = 0; i_23 < 20; i_23 += 1) 
    {
        for (unsigned long long int i_24 = 2; i_24 < 19; i_24 += 1) 
        {
            {
                var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) arr_84 [i_23] [i_24])), (var_4))))))))));
                var_57 |= ((/* implicit */int) ((signed char) (_Bool)1));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_25 = 2; i_25 < 12; i_25 += 1) 
    {
        var_58 ^= ((/* implicit */short) var_0);
        var_59 = var_11;
        /* LoopNest 3 */
        for (unsigned short i_26 = 0; i_26 < 15; i_26 += 3) 
        {
            for (unsigned short i_27 = 2; i_27 < 14; i_27 += 4) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    {
                        var_60 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_101 [i_25] [i_26] [i_27] [i_28] [i_26] [i_25] = ((/* implicit */int) min((arr_93 [i_25 - 2] [5U] [(signed char)8]), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))));
                    }
                } 
            } 
        } 
        var_61 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)1687)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_40 [i_25] [i_25 + 2] [i_25] [i_25])) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 0LL)))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30574))) : (arr_50 [i_25 - 1] [i_25] [i_25] [(unsigned char)9])))))) : (min((arr_85 [i_25 + 1] [i_25]), (arr_85 [i_25 + 1] [i_25 - 2])))));
        /* LoopSeq 1 */
        for (long long int i_29 = 3; i_29 < 13; i_29 += 4) 
        {
            arr_106 [i_29] [i_25] = ((/* implicit */int) min((((/* implicit */unsigned int) min((arr_17 [i_25 + 1] [i_25 + 2]), (arr_17 [i_25 + 1] [i_25 + 1])))), (min((arr_81 [i_25 + 3] [i_25 - 2] [i_25 + 1]), (((/* implicit */unsigned int) var_3))))));
            var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) 3740303055U))));
            var_63 = ((/* implicit */int) min((var_63), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1687))))) ? (min((((/* implicit */int) var_17)), (arr_36 [10LL]))) : (min((arr_36 [18]), (((/* implicit */int) var_10))))))));
            var_64 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)99))))) ? (min((((/* implicit */long long int) var_2)), (-9LL))) : (var_9)))));
            /* LoopNest 3 */
            for (unsigned char i_30 = 0; i_30 < 15; i_30 += 1) 
            {
                for (unsigned short i_31 = 2; i_31 < 14; i_31 += 1) 
                {
                    for (int i_32 = 0; i_32 < 15; i_32 += 2) 
                    {
                        {
                            var_65 = ((/* implicit */signed char) min(((short)-1697), (((/* implicit */short) (_Bool)1))));
                            var_66 = ((/* implicit */signed char) (short)-278);
                            var_67 ^= arr_15 [i_25] [(signed char)5] [i_30] [i_31] [i_25];
                        }
                    } 
                } 
            } 
        }
    }
    var_68 += (+(var_2));
    /* LoopSeq 2 */
    for (unsigned char i_33 = 0; i_33 < 20; i_33 += 4) 
    {
        var_69 = min((1748895452), (-995616861));
        var_70 ^= (short)13908;
    }
    for (unsigned short i_34 = 3; i_34 < 17; i_34 += 1) 
    {
        var_71 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (-4475264260303061522LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_34] [i_34] [11U] [i_34] [i_34])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_34 + 2])) ? (var_9) : (((/* implicit */long long int) arr_81 [i_34 + 1] [12U] [i_34]))))))))));
        arr_123 [i_34] [i_34] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_25 [i_34] [i_34 - 1] [i_34] [i_34 + 2] [i_34 + 1]))) ? (((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) * (((((/* implicit */_Bool) -81056303)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_34] [i_34] [16U] [(short)4] [(signed char)16]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_4)))) ? (((/* implicit */int) (_Bool)1)) : (min((4), (((/* implicit */int) (unsigned char)155)))))))));
    }
}
