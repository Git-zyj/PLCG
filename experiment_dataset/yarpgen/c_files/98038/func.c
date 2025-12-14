/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98038
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_18 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2653)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_0 [8])))), (((((/* implicit */_Bool) var_12)) ? (17466845197554210937ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21134)) ? (((((/* implicit */_Bool) (unsigned char)229)) ? (0) : (((/* implicit */int) (unsigned short)11706)))) : (((((/* implicit */_Bool) ((-2027983421) - (((/* implicit */int) (unsigned char)29))))) ? (((((/* implicit */_Bool) 3056890405U)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) (unsigned char)79))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((arr_1 [(unsigned short)12]) <= ((((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_7)))) : (((arr_1 [i_1]) & (((/* implicit */int) var_11))))))));
        var_19 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) 2437416356U)))))), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 14; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */int) ((arr_6 [i_2] [i_3 - 3]) != (((/* implicit */unsigned int) ((int) var_1)))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_3] [i_3 - 3])) ? (var_3) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_14))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3 - 3])) ? (((/* implicit */int) var_15)) : (arr_1 [i_3 - 3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_8 = 2; i_8 < 13; i_8 += 1) 
        {
            arr_26 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-842)) : (((/* implicit */int) (_Bool)1))));
            var_24 = ((/* implicit */unsigned char) 603885599);
        }
    }
    for (unsigned int i_9 = 3; i_9 < 10; i_9 += 4) 
    {
        arr_29 [i_9] = ((/* implicit */unsigned int) ((min((2045779409U), (((/* implicit */unsigned int) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9 + 2] [i_9 - 3] [i_9 - 2])))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            for (unsigned int i_11 = 1; i_11 < 11; i_11 += 4) 
            {
                {
                    arr_35 [i_10] [i_11] = ((/* implicit */unsigned short) arr_10 [i_9]);
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (unsigned short)8788))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                {
                    arr_42 [i_9] [i_13] [i_12] [2] = ((/* implicit */unsigned long long int) (signed char)-34);
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) 4720115061421052517ULL))), (min((((/* implicit */unsigned long long int) arr_1 [i_9 - 3])), (arr_40 [i_9 + 1])))));
                                arr_49 [8ULL] [i_13] = ((/* implicit */unsigned long long int) (-((~(((((/* implicit */_Bool) var_13)) ? (arr_46 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16071)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_16 = 2; i_16 < 10; i_16 += 4) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            {
                                arr_55 [i_13] [i_12] [i_13] [i_16 + 1] = ((/* implicit */signed char) ((_Bool) var_17));
                                arr_56 [i_9 - 2] [1U] [i_13] [7U] [i_13] [i_17] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) min((668795707962739238ULL), (((/* implicit */unsigned long long int) (unsigned short)2653))));
    /* LoopNest 3 */
    for (int i_18 = 0; i_18 < 11; i_18 += 1) 
    {
        for (int i_19 = 0; i_19 < 11; i_19 += 4) 
        {
            for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) 
            {
                {
                    arr_63 [i_18] [(unsigned char)10] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)-14945), (((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_18] [i_18] [i_19] [i_19] [i_20])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_18] [i_19])) ? (arr_10 [i_18]) : (arr_10 [i_18]))))));
                    /* LoopNest 2 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        for (unsigned long long int i_22 = 2; i_22 < 10; i_22 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */int) var_5)) >= ((~(((/* implicit */int) ((unsigned short) 1883787201))))))))));
                                var_29 = ((/* implicit */unsigned int) ((min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_18] [i_18]))))))) / (min((((/* implicit */unsigned long long int) (unsigned short)36578)), (((((/* implicit */_Bool) 11957611435293671589ULL)) ? (arr_40 [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                                var_30 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((arr_9 [i_18] [i_18]) + (2147483647))) << (((((/* implicit */int) var_15)) - (76)))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (13889663015725555140ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1250873408)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (0U)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_18])))))));
                                arr_68 [(unsigned char)2] [i_18] [i_20] [i_21 - 1] [4U] = ((unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)254)), (var_17)))), (((((/* implicit */_Bool) var_12)) ? (13889663015725555138ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_23 = 0; i_23 < 11; i_23 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_24 = 0; i_24 < 11; i_24 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) (unsigned short)30699);
                            arr_73 [i_24] [10U] [i_18] [i_19] [i_18] = ((/* implicit */unsigned int) max((((/* implicit */int) max((var_6), ((unsigned char)79)))), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_18] [i_19] [8])) || (((/* implicit */_Bool) (unsigned char)183)))))))));
                        }
                        for (unsigned int i_25 = 3; i_25 < 7; i_25 += 3) 
                        {
                            arr_77 [i_18] [(unsigned short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)65))))) ? (min((arr_66 [i_23]), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) arr_76 [i_25 - 2] [i_19] [7U] [i_18] [6LL]))))) ? (max(((+(arr_11 [i_18] [i_18] [i_18]))), (((/* implicit */unsigned long long int) (unsigned char)191)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14945)))));
                            var_32 = ((/* implicit */unsigned long long int) max(((signed char)0), (((/* implicit */signed char) ((((/* implicit */int) ((14806259473508653269ULL) > (((/* implicit */unsigned long long int) 2U))))) == (((/* implicit */int) var_16)))))));
                            arr_78 [(unsigned short)3] [i_18] [i_18] [i_20] [i_20] [i_23] [i_25 + 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */long long int) (-(var_2)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_20 [i_18] [i_19] [i_20] [6U] [i_23] [(signed char)9] [13U])) : (var_17))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50101)))));
                            arr_79 [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */short) (-(var_12)));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-1883787204)))) ? (((/* implicit */int) (signed char)54)) : (1842284629)));
                        }
                        arr_80 [(_Bool)1] [i_19] [(unsigned short)10] [i_18] [i_19] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_18] [i_18]))) >= (arr_28 [i_19])))), (min(((+(((/* implicit */int) var_13)))), (((/* implicit */int) (!(((/* implicit */_Bool) 13726629012288499099ULL)))))))));
                        var_34 = ((/* implicit */int) max((max((((/* implicit */long long int) arr_39 [i_18])), (((((/* implicit */_Bool) (unsigned short)46173)) ? (((/* implicit */long long int) 1735497813U)) : (var_17))))), (((/* implicit */long long int) arr_23 [i_18] [i_19] [i_20] [i_20] [i_20]))));
                        var_35 = ((/* implicit */unsigned char) max((min((arr_28 [i_20]), (arr_28 [i_23]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (arr_28 [i_18])))));
                    }
                    for (unsigned char i_26 = 0; i_26 < 11; i_26 += 4) 
                    {
                        arr_84 [(unsigned short)9] [i_18] [i_20] [i_20] [i_20] [(unsigned char)9] = ((/* implicit */unsigned int) (+((~(9924051637983820774ULL)))));
                        var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (4048695391335933131ULL))))))));
                        arr_85 [i_26] [i_18] [9] [i_26] = ((/* implicit */short) min((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_18] [i_26])) : (((/* implicit */int) (unsigned char)177)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */int) var_0))));
                        arr_86 [0LL] [i_18] [i_18] [i_18] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_19])), (var_12)))) ? (arr_43 [i_18] [i_19] [i_20] [i_20] [i_26]) : (arr_33 [i_18])))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))), (arr_64 [i_18] [i_19] [i_18] [i_26])))));
                        /* LoopSeq 4 */
                        for (int i_27 = 3; i_27 < 10; i_27 += 2) 
                        {
                            arr_91 [i_18] [i_26] [i_20] [i_19] [i_18] [i_18] = (!(((/* implicit */_Bool) ((signed char) arr_52 [i_18] [i_18] [i_20] [i_27 - 3] [i_27] [i_26] [(unsigned char)10]))));
                            var_37 = ((/* implicit */unsigned int) min((var_37), (min((((/* implicit */unsigned int) var_7)), (arr_53 [i_19] [i_26] [(unsigned char)10])))));
                            arr_92 [i_18] [i_19] [(unsigned char)3] [4] [i_18] [i_27 + 1] = ((/* implicit */int) min(((-(var_9))), (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) arr_17 [i_19] [13] [i_27 - 2])), (arr_37 [i_18])))))));
                            arr_93 [(unsigned char)10] [i_19] [i_20] [i_18] [i_27] [i_26] &= ((/* implicit */unsigned short) (((~(((((/* implicit */int) var_11)) | (((/* implicit */int) var_11)))))) == ((+(((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)16))))))));
                        }
                        for (int i_28 = 3; i_28 < 10; i_28 += 1) 
                        {
                            arr_97 [i_18] = ((/* implicit */unsigned char) ((unsigned short) 1459048407U));
                            arr_98 [i_18] [i_18] [(unsigned char)8] [i_20] [i_26] [i_19] &= (((-(var_9))) + ((-(13726629012288499106ULL))));
                            arr_99 [(unsigned short)4] [2] [i_18] [i_26] [i_28 - 3] = ((/* implicit */int) (+(arr_64 [i_18] [i_19] [i_20] [i_26])));
                        }
                        for (unsigned long long int i_29 = 0; i_29 < 11; i_29 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_58 [i_18])) ? (arr_16 [i_18] [i_18]) : (((/* implicit */unsigned long long int) var_3))))))) ? (max((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned short) var_10))))), (min((((/* implicit */long long int) arr_43 [i_26] [i_26] [i_20] [i_26] [i_29])), (-4920583021723942887LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79)))));
                            arr_102 [i_18] [i_19] [i_20] [i_18] [0] [i_19] [i_29] = ((/* implicit */int) arr_39 [i_18]);
                            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) -1211121637))));
                            var_40 = ((((int) (unsigned short)19815)) - (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_10))))) <= (min((((/* implicit */unsigned int) var_10)), (4258766144U)))))));
                            var_41 = ((/* implicit */unsigned long long int) ((arr_66 [(_Bool)1]) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)56618)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_30 = 1; i_30 < 10; i_30 += 3) 
                        {
                            var_42 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1475848379)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)71)))) - ((+(((/* implicit */int) var_10))))));
                            arr_106 [i_18] [i_19] [i_20] [i_26] [i_30] = (~((+(((/* implicit */int) var_7)))));
                            var_43 = ((/* implicit */int) ((((1252572284) - (-828134400))) <= (((/* implicit */int) var_10))));
                        }
                    }
                }
            } 
        } 
    } 
}
