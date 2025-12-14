/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82665
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
    var_19 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((var_13) ? (arr_1 [i_1 + 3] [i_1 + 1]) : (arr_2 [i_1] [i_1 + 2]))) >= (max((arr_1 [i_1 + 3] [i_1 + 3]), (((/* implicit */long long int) var_17))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) max(((_Bool)1), (var_13)))) * (((/* implicit */int) ((((/* implicit */long long int) var_8)) <= (-5079429677142419295LL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) && (arr_12 [i_5] [i_5] [i_3] [i_5] [i_3] [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) var_18))))))) : (((var_17) >> (((((/* implicit */int) (unsigned char)132)) - (111)))))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_8 [i_5]))));
                            var_24 *= ((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) + (-8844535259914091721LL))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)132))));
                    var_26 = (!((_Bool)0));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
                    {
                        var_27 = ((var_1) >= (((/* implicit */unsigned long long int) 6410162257665087999LL)));
                        var_28 = ((/* implicit */long long int) var_16);
                    }
                    for (long long int i_8 = 3; i_8 < 17; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1524562354711437040LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-9223372036854775792LL)));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_18))) ^ (((-5079429677142419296LL) & (((/* implicit */long long int) var_11))))));
                        var_31 = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (_Bool)1))));
                            var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_17) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        }
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) 702601228483294625LL);
                    /* LoopNest 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_2] [i_3] [i_10] [i_3] [i_10] [(unsigned char)14]))))), (((var_0) - (5079429677142419312LL))))))));
                                var_36 *= ((/* implicit */unsigned char) (_Bool)1);
                                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) var_17)))))))) == (min((((/* implicit */long long int) var_8)), (var_12)))));
                                var_39 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) >> (((/* implicit */int) var_14))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */long long int) var_17)))))));
                                var_40 = ((/* implicit */unsigned int) min((var_40), ((((~(min((((/* implicit */unsigned int) var_16)), (var_11))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                            }
                        } 
                    } 
                }
                for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_41 = min((((/* implicit */long long int) (unsigned char)44)), (arr_13 [i_15] [i_15] [i_17]));
                                var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (unsigned char)71))))))))));
                                var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_18) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (var_9)))))))) + (min((((/* implicit */long long int) var_8)), ((~(arr_29 [(unsigned char)3] [i_3] [i_16] [i_17])))))));
                                var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (-(max((arr_34 [i_2] [i_3] [i_2] [17LL]), (arr_34 [i_2] [i_3] [i_3] [i_17]))))))));
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */unsigned long long int) ((var_5) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                }
                /* vectorizable */
                for (long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    var_46 = ((/* implicit */long long int) var_9);
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_47 = ((/* implicit */_Bool) -9223372036854775799LL);
                                var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7U)) || (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)254))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        var_49 *= ((/* implicit */unsigned char) (+(var_7)));
                        var_50 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_13))));
                        var_51 = var_12;
                    }
                    for (unsigned char i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 1) 
                        {
                            var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) (+(5338584742435546945ULL))))));
                            var_53 = ((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned long long int) 268435456U))));
                        }
                        var_54 = ((/* implicit */_Bool) var_7);
                        var_55 = ((/* implicit */unsigned char) ((((var_0) + (((/* implicit */long long int) 268435456U)))) / (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                        var_56 = ((/* implicit */_Bool) (-(((/* implicit */int) var_18))));
                        var_57 *= ((/* implicit */_Bool) arr_57 [i_2] [i_2]);
                    }
                    for (long long int i_24 = 0; i_24 < 21; i_24 += 4) 
                    {
                        var_58 = ((arr_47 [i_3]) ? (2669183636034231215LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))));
                        var_59 = ((/* implicit */unsigned long long int) (~(549123872U)));
                    }
                    for (unsigned int i_25 = 1; i_25 < 19; i_25 += 1) 
                    {
                        var_60 -= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                        var_61 = ((/* implicit */unsigned long long int) min((var_61), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_35 [i_25] [i_25] [i_25 + 2] [i_25 + 2] [i_18] [i_25 + 2])))))));
                        var_62 = ((/* implicit */_Bool) ((7209818561987322886LL) << (((var_4) - (4481485315133819066ULL)))));
                        var_63 = ((/* implicit */long long int) min((var_63), (var_15)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_26 = 0; i_26 < 21; i_26 += 2) 
                    {
                        for (long long int i_27 = 0; i_27 < 21; i_27 += 3) 
                        {
                            {
                                var_64 = ((/* implicit */unsigned int) (~(arr_9 [i_2] [i_2] [i_2])));
                                var_65 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_2] [i_3] [i_18] [10ULL] [i_27])))));
                                var_66 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                var_67 = ((/* implicit */long long int) (-(((/* implicit */int) (!(arr_30 [i_2] [i_2]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_28 = 0; i_28 < 14; i_28 += 2) 
    {
        var_68 = ((((/* implicit */unsigned long long int) 2271066440U)) >= (12266047008106865694ULL));
        var_69 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_29 = 0; i_29 < 22; i_29 += 2) 
    {
        var_70 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_29] [i_29]))) : (min((var_11), (4138109648U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_81 [i_29])))))));
        var_71 = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_13))))));
        var_72 -= arr_81 [i_29];
        var_73 -= -436041151280775594LL;
        /* LoopNest 2 */
        for (unsigned long long int i_30 = 0; i_30 < 22; i_30 += 2) 
        {
            for (unsigned char i_31 = 2; i_31 < 18; i_31 += 1) 
            {
                {
                    var_74 = ((/* implicit */unsigned long long int) var_8);
                    var_75 = var_12;
                    var_76 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > ((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
}
