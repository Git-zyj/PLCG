/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71966
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
    var_20 = ((/* implicit */signed char) max((var_20), (((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)37)) ? (-5337689529250167175LL) : (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_10)) ? (var_7) : (var_3))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5713052895281542591LL)) ? (((/* implicit */long long int) 2433768768U)) : (-5337689529250167188LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) : (((unsigned int) -5337689529250167166LL))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17548297668127785910ULL)) ? (-5337689529250167175LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) ((unsigned char) 3140399400U)))));
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((_Bool) ((arr_9 [i_1]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [8ULL] [i_1] [8ULL] [(short)8]))))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_12) ? (13756606478080303898ULL) : (((/* implicit */unsigned long long int) -5337689529250167173LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-86)))) : (((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_16)))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5337689529250167173LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))) : (16641677598199930643ULL)));
                            var_26 = ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_2] [i_1] [(unsigned short)0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [10LL]))));
                        }
                    } 
                } 
                arr_11 [i_2] = ((/* implicit */unsigned int) ((signed char) ((_Bool) 8167663725997241293ULL)));
                arr_12 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) -5337689529250167175LL))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (6613674062385497365ULL))) : (((var_12) ? (8167663725997241292ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2]))))));
                var_27 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned char)13] [(unsigned char)13] [i_2] [13U])) ? (10279080347712310306ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2])))))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_0]))) : (((/* implicit */int) ((_Bool) var_0)))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (short)12))) ? (((/* implicit */long long int) ((int) var_9))) : (((long long int) (unsigned char)168))));
            }
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_5] [i_7] [i_7] = ((/* implicit */signed char) ((short) 5337689529250167166LL));
                        var_29 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 5337689529250167147LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7))) : (-19LL))));
                        arr_22 [i_7] [i_1] [i_5] [i_6 - 1] [i_7] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_5] [i_6] [i_7])))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */int) ((unsigned int) ((short) (unsigned short)37394)));
                        var_31 -= ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) arr_10 [i_8] [i_0] [i_0] [i_1])));
                        arr_26 [i_8] [i_6] [0LL] [1ULL] [1ULL] = ((signed char) ((long long int) 5337689529250167163LL));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_8])) ? (((/* implicit */int) (short)-15)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [i_1] [i_8] [(unsigned char)6]))))) ? (((((/* implicit */_Bool) var_18)) ? (var_7) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))))))));
                        arr_27 [i_0] [(unsigned char)0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7439602006561936445ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)255))) : (5337689529250167163LL)))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))));
                    }
                    arr_28 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 562949953421312LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned short)9] [i_5] [i_6 + 1]))) : (4208123465398258351LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_5) : (arr_18 [i_6] [i_0] [i_5] [i_0] [i_5])))) : (((((/* implicit */_Bool) (short)7)) ? (arr_19 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21908)))))));
                }
                arr_29 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_13 [i_0] [i_5])))) : (((((/* implicit */_Bool) -5337689529250167149LL)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            }
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
            {
                arr_32 [i_0] [i_1] [(_Bool)1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-42)) ? (((/* implicit */int) (short)-256)) : (((/* implicit */int) (signed char)0))));
                var_33 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7))));
                var_34 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (var_19) : (((/* implicit */int) var_12)))));
            }
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_10]))) : (((/* implicit */int) ((short) arr_4 [i_0] [5LL] [i_10])))));
                arr_35 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((arr_10 [i_0] [i_1] [i_10] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_10] [i_10]))) : (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [2U] [i_1] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))));
                var_36 = ((unsigned long long int) (unsigned short)24039);
                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [(_Bool)1] [i_0] [i_10] [i_10]) ? (8167663725997241294ULL) : (((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_10] [i_10]))))) ? (((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (10279080347712310323ULL))) : (((unsigned long long int) arr_13 [i_0] [i_0]))));
            }
            var_38 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 5337689529250167172LL))) ? ((((_Bool)1) ? (((/* implicit */int) (short)-13)) : (((/* implicit */int) (unsigned short)31)))) : (((/* implicit */int) ((signed char) 8167663725997241293ULL)))));
            arr_36 [6LL] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 3703849807U)) : (var_3))));
        }
        /* LoopSeq 1 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                var_39 -= ((unsigned char) ((unsigned long long int) arr_2 [(unsigned short)4]));
                var_40 = ((/* implicit */unsigned int) ((signed char) ((_Bool) 2225871745236185934LL)));
                var_41 = ((/* implicit */int) ((unsigned int) (signed char)-82));
                var_42 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_11] [i_11] [i_11 - 1] [i_0] [i_0] [i_11])) ? (((/* implicit */int) (short)-256)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-3804)))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_11] [i_12])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))) : (5337689529250167137LL)));
            }
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
            {
                arr_44 [i_0] [i_11] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) -2859867626175649364LL))) ? (((var_12) ? (((/* implicit */int) arr_38 [i_11])) : (((/* implicit */int) (short)511)))) : (((/* implicit */int) ((short) (_Bool)1)))));
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    arr_47 [i_0] [i_11 - 1] [i_11] [i_11 - 1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 5594550408256777129ULL)) ? (((/* implicit */int) (short)18)) : (((/* implicit */int) var_4)))));
                    var_44 = ((/* implicit */_Bool) ((((_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_16)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_25 [4U] [i_0] [i_11] [i_13] [i_14])) : (var_3)))));
                }
                for (unsigned int i_15 = 2; i_15 < 12; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))) : (-5337689529250167133LL)))))));
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */long long int) var_11)) : (var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31311)))))) : (((long long int) arr_1 [i_0] [11LL]))));
                    }
                    var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_19 [i_0]))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        {
                            var_48 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (short)12)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 3810141371U)) ? (((/* implicit */int) (short)-17)) : (((/* implicit */int) (short)40)))) : (((/* implicit */int) ((short) (short)15149)))));
                            var_49 = ((/* implicit */unsigned int) ((_Bool) ((short) 10454785318693352966ULL)));
                            var_50 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) arr_17 [i_0] [i_11] [i_11] [i_17] [i_18])));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_21 = 0; i_21 < 14; i_21 += 1) /* same iter space */
                    {
                        var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_34 [i_0] [i_20] [i_21]))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_11)) : (1222265345479525729ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_19])))))))));
                        arr_65 [i_0] [i_21] [i_11] [i_20] [i_21] = ((/* implicit */unsigned long long int) ((((_Bool) var_12)) ? (((((/* implicit */_Bool) -5337689529250167188LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967271U))) : (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(_Bool)1] [i_11 - 1] [i_19]))) : (4254043374U)))));
                        arr_66 [i_0] [i_11] [i_19] [i_20] [i_11] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)8)) ? (arr_64 [(unsigned char)10] [i_11 - 1] [i_11] [i_19] [i_20] [i_21]) : (-5337689529250167173LL))));
                        var_52 = ((/* implicit */signed char) ((unsigned int) (unsigned char)235));
                        var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_24 [i_21] [i_11 - 1] [i_19] [i_11 - 1] [i_0])) : (var_19)))))));
                    }
                    for (signed char i_22 = 0; i_22 < 14; i_22 += 1) /* same iter space */
                    {
                        var_54 = ((/* implicit */unsigned int) ((long long int) (short)18));
                        var_55 = ((/* implicit */unsigned char) ((((_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) (signed char)107)) ? (8167663725997241293ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) ((unsigned long long int) ((unsigned int) 236002285))))));
                    }
                    var_57 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)34668));
                }
                var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned char)4] [(_Bool)1] [i_19])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-17467))))) ? (((/* implicit */int) ((signed char) arr_25 [i_0] [i_11] [i_19] [i_11] [8LL]))) : (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) arr_4 [0ULL] [i_11] [i_11 - 1])) : (((/* implicit */int) arr_62 [(unsigned char)7] [i_19] [i_11] [i_11 - 1] [5ULL] [i_0]))))));
            }
            for (unsigned long long int i_23 = 0; i_23 < 14; i_23 += 3) 
            {
                var_59 = ((/* implicit */unsigned long long int) max((var_59), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11288)) ? (9) : (((/* implicit */int) (signed char)4)))))));
                var_60 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) arr_42 [i_11] [i_11 - 1] [i_11])));
                arr_72 [i_11] [(signed char)3] [(signed char)3] [i_23] = ((unsigned char) ((short) arr_63 [i_0] [i_0] [i_23] [i_23]));
                /* LoopSeq 1 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_61 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_16))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((short) var_17)))));
                    arr_76 [(unsigned char)2] [(unsigned char)2] [i_23] [i_11] = ((/* implicit */_Bool) ((short) ((unsigned short) arr_60 [i_0] [i_11] [i_11] [i_24])));
                    var_62 = ((/* implicit */int) ((unsigned char) ((unsigned short) var_13)));
                }
                var_63 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)40011)) : (((/* implicit */int) (unsigned char)124))));
            }
            var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [5U])) ? (arr_13 [11LL] [(unsigned char)13]) : (((/* implicit */unsigned long long int) arr_18 [i_0] [i_11] [i_0] [i_0] [i_11]))))) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_20 [(unsigned char)1] [i_11] [(unsigned char)1] [i_0] [i_11] [i_0] [i_0])))))));
            /* LoopSeq 2 */
            for (short i_25 = 0; i_25 < 14; i_25 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_26 = 0; i_26 < 14; i_26 += 3) 
                {
                    arr_81 [10LL] [i_11] [i_26] [10LL] [i_25] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-95))))) ? (((((/* implicit */_Bool) 7149067493275896802LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_11] [i_25] [(short)6]))) : (8167663725997241295ULL))) : (((unsigned long long int) arr_50 [i_26] [i_26] [i_25] [(unsigned short)4] [(unsigned short)4]))));
                    var_65 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_23 [(signed char)13] [i_11] [i_25])) ? (((/* implicit */int) arr_51 [i_11] [i_11] [i_11] [i_25] [i_26])) : (((/* implicit */int) (_Bool)1)))));
                    var_66 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)255)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3827557056202502917LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_56 [i_0] [i_11 - 1] [i_0]))))) : (((unsigned long long int) arr_17 [i_25] [i_11] [i_26] [i_26] [i_26]))));
                    var_67 &= ((/* implicit */short) ((signed char) ((signed char) (_Bool)1)));
                }
                for (unsigned short i_27 = 0; i_27 < 14; i_27 += 4) 
                {
                    arr_84 [i_11] [i_27] [i_25] [i_25] [i_11 - 1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)2] [i_11 - 1] [i_25] [i_27]))) : (arr_42 [i_11] [i_11 - 1] [i_27]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5))))));
                    arr_85 [i_11] [i_11] [i_25] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_11 - 1] [i_11 - 1] [i_25]))) ? (((((/* implicit */_Bool) arr_60 [i_0] [i_11 - 1] [i_11] [(_Bool)1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [12U] [12U] [i_25] [12U]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_59 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-53)))))));
                }
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    arr_88 [i_11] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (arr_86 [i_0] [i_28]) : (((/* implicit */unsigned long long int) arr_25 [i_0] [i_11] [i_11] [i_25] [i_28]))))) ? (((((/* implicit */_Bool) 8167663725997241300ULL)) ? (((/* implicit */int) arr_59 [i_0] [0LL] [10ULL])) : (((/* implicit */int) arr_57 [i_0] [i_11] [i_25] [9ULL] [i_0] [i_28])))) : (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    var_68 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_11] [(_Bool)1] [i_28]))) : (var_8)))) ? (((((/* implicit */_Bool) arr_20 [i_11] [i_11] [(_Bool)1] [i_28] [i_11] [(_Bool)1] [i_28])) ? (((/* implicit */int) (short)29530)) : (((/* implicit */int) (unsigned char)234)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_17 [i_11] [i_11] [i_11] [i_11] [i_11]))))));
                    /* LoopSeq 3 */
                    for (int i_29 = 0; i_29 < 14; i_29 += 3) 
                    {
                        var_69 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_11] [i_0] [i_0])) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233)))))) ? (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((unsigned char) (signed char)-1)))));
                        var_70 = ((unsigned int) ((((/* implicit */_Bool) var_18)) ? (-1) : (((/* implicit */int) var_13))));
                        var_71 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (68719476735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_11] [i_0] [i_25] [i_25]))))));
                    }
                    for (long long int i_30 = 1; i_30 < 13; i_30 += 1) 
                    {
                        arr_93 [i_0] [i_11] [i_0] [i_11] [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0] [i_11 - 1] [(unsigned short)12] [i_28]))) : (arr_74 [i_30] [i_11] [i_25])))) ? (((/* implicit */long long int) ((unsigned int) arr_82 [i_0]))) : (((long long int) (_Bool)1))));
                        arr_94 [i_0] [i_11] [i_11] [i_25] [(signed char)12] [i_11] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) arr_41 [i_11] [i_25] [i_28])) : (var_2))));
                        var_72 = ((/* implicit */long long int) ((signed char) ((unsigned int) (signed char)-13)));
                        var_73 = ((/* implicit */long long int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_77 [12U] [12U] [i_25] [i_28])) : (((/* implicit */int) (unsigned char)145)))));
                    }
                    for (unsigned long long int i_31 = 0; i_31 < 14; i_31 += 1) 
                    {
                        arr_98 [i_11] [i_11] [3] [i_28] [i_28] [i_31] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3188083189U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)12628))));
                        var_74 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_28] [i_25] [i_11] [(unsigned short)0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (var_7)))) ? (((/* implicit */int) ((unsigned short) arr_54 [i_28]))) : (((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) arr_75 [i_0] [i_28] [i_31])) : (((/* implicit */int) var_1))))));
                        var_75 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((((/* implicit */_Bool) (unsigned short)31630)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_83 [i_11] [i_25] [i_28] [i_28])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_11] [i_11])) ? (arr_25 [i_0] [i_11 - 1] [i_25] [i_28] [i_31]) : (((/* implicit */int) (unsigned short)49622))))));
                    }
                    var_76 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)3))))) ? (((((/* implicit */_Bool) var_17)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((unsigned long long int) (short)32)));
                }
                arr_99 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)0))) ? (((((/* implicit */_Bool) 134217727U)) ? (arr_18 [i_0] [i_0] [i_11] [i_25] [i_25]) : (1106884107U))) : (((/* implicit */unsigned int) ((int) arr_55 [8U] [i_25])))));
            }
            for (unsigned int i_32 = 2; i_32 < 12; i_32 += 1) 
            {
                arr_102 [(unsigned char)11] [(unsigned char)11] [i_32] [i_11] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (short)-32759)) ? (2966735334U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198))))));
                var_77 = ((/* implicit */short) ((signed char) (unsigned short)28297));
                /* LoopSeq 4 */
                for (unsigned int i_33 = 0; i_33 < 14; i_33 += 3) /* same iter space */
                {
                    var_78 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12)))) : (((unsigned int) (unsigned char)238))));
                    var_79 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14396017448236163240ULL)) ? (((/* implicit */int) arr_89 [i_0] [i_0] [i_32] [i_33] [i_33])) : (((/* implicit */int) (unsigned char)32))))) ? (((unsigned long long int) arr_68 [i_0] [i_11 - 1] [i_33])) : (((/* implicit */unsigned long long int) ((unsigned int) var_3)))));
                    var_80 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_33 [i_0] [(unsigned char)13] [i_33])) ? (((/* implicit */unsigned long long int) arr_25 [i_0] [i_11] [8] [(_Bool)1] [i_33])) : (var_16))));
                }
                for (unsigned int i_34 = 0; i_34 < 14; i_34 += 3) /* same iter space */
                {
                    var_81 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32742)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7)))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) ((_Bool) (short)-29420)))));
                    var_82 = ((/* implicit */int) max((var_82), (((/* implicit */int) ((unsigned short) ((long long int) 16992542152154885727ULL))))));
                    arr_108 [i_0] [i_11] [i_32] [i_34] |= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_43 [i_32])) ? (((/* implicit */unsigned long long int) var_17)) : (arr_42 [i_0] [i_32] [i_34]))));
                }
                for (unsigned int i_35 = 0; i_35 < 14; i_35 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_36 = 0; i_36 < 14; i_36 += 4) 
                    {
                        var_83 = ((/* implicit */long long int) min((var_83), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (short)29420)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_3)))))));
                        var_84 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) arr_43 [i_35])) : (((/* implicit */int) var_14)))));
                        var_85 = ((/* implicit */long long int) ((short) ((unsigned char) arr_31 [i_0] [(unsigned char)6] [i_0] [i_0])));
                    }
                    /* LoopSeq 3 */
                    for (short i_37 = 0; i_37 < 14; i_37 += 1) /* same iter space */
                    {
                        var_86 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_114 [i_37] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)48))) : (1106884094U))));
                        arr_118 [i_0] [i_0] [(signed char)0] [i_11] [(_Bool)1] [i_11] [i_37] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)-46))) ? (((unsigned long long int) var_16)) : (((/* implicit */unsigned long long int) ((long long int) arr_17 [i_32 - 1] [i_32 - 1] [i_32 + 2] [i_32] [i_32])))));
                        var_87 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_11])) ? (((/* implicit */unsigned long long int) 1003039520U)) : (17240571318017540962ULL)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) ((unsigned short) arr_25 [i_11] [i_11] [i_11] [i_11] [i_37])))));
                        arr_119 [i_0] [i_11] = ((/* implicit */unsigned long long int) ((((_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)240)) ? (var_18) : (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_51 [i_11] [i_11] [i_32] [(unsigned char)1] [i_32])) : (((/* implicit */int) (short)-31354)))))));
                    }
                    for (short i_38 = 0; i_38 < 14; i_38 += 1) /* same iter space */
                    {
                        var_88 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_100 [i_32 + 2] [i_32] [8])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_32 + 1] [i_35] [i_38])))))) ? (((/* implicit */int) ((short) -3534997366504475350LL))) : (((arr_73 [i_0] [(signed char)2] [i_0] [i_0] [i_0]) ? (579075197) : (((/* implicit */int) var_13))))));
                        var_89 = ((/* implicit */unsigned int) min((var_89), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((((/* implicit */_Bool) 244096330120990457LL)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (short)-76)) ? (((/* implicit */int) (short)50)) : (((/* implicit */int) var_14)))))))));
                    }
                    for (short i_39 = 0; i_39 < 14; i_39 += 1) /* same iter space */
                    {
                        var_90 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1003039520U)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) arr_23 [i_0] [i_0] [(short)7]))))) ? (((((/* implicit */_Bool) 4882978992753318960LL)) ? (2922150388U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_39] [i_11 - 1] [i_11 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-29420)))))));
                        var_91 = ((/* implicit */signed char) ((_Bool) ((arr_10 [i_0] [i_11] [i_32 - 2] [i_35]) ? (var_16) : (arr_114 [i_0] [i_0]))));
                    }
                }
                for (int i_40 = 0; i_40 < 14; i_40 += 4) 
                {
                    var_92 += ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_16)) ? (arr_101 [i_40] [i_32] [i_0]) : (((/* implicit */unsigned long long int) var_19)))));
                    arr_129 [i_0] [i_11] [i_40] [i_11 - 1] [i_11] [i_11] = ((((/* implicit */_Bool) ((unsigned int) arr_61 [i_0] [i_11] [i_32 - 1] [i_32 + 1] [i_40]))) ? (((/* implicit */unsigned long long int) ((long long int) arr_56 [1U] [i_32 - 2] [i_11]))) : (((((/* implicit */_Bool) -1874286268)) ? (18014398509481983ULL) : (((/* implicit */unsigned long long int) var_11)))));
                }
            }
        }
        /* LoopNest 2 */
        for (signed char i_41 = 1; i_41 < 13; i_41 += 1) 
        {
            for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
            {
                {
                    var_93 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_42] [i_0] [5] [i_41] [i_41] [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */_Bool) -8675779152967268874LL)) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_42])) : (((/* implicit */int) arr_38 [i_41])))) : (((/* implicit */int) ((unsigned short) var_10)))));
                    /* LoopSeq 2 */
                    for (short i_43 = 0; i_43 < 14; i_43 += 3) 
                    {
                        var_94 ^= ((/* implicit */unsigned short) ((((_Bool) 0U)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_75 [i_0] [i_42] [i_0])) : (((/* implicit */int) (unsigned char)255))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_44 = 0; i_44 < 14; i_44 += 4) 
                        {
                            var_95 = ((/* implicit */long long int) ((_Bool) (unsigned char)162));
                            var_96 = ((/* implicit */long long int) min((var_96), (((/* implicit */long long int) ((short) ((unsigned char) arr_82 [i_42]))))));
                        }
                        for (unsigned int i_45 = 0; i_45 < 14; i_45 += 1) 
                        {
                            arr_142 [i_0] [i_42] [i_42] [i_43] [i_45] = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) var_8)));
                            var_97 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 2079774751U)) ? (var_2) : (4294967292U))));
                            var_98 = ((unsigned long long int) ((unsigned int) 3022759947U));
                        }
                    }
                    for (long long int i_46 = 0; i_46 < 14; i_46 += 1) 
                    {
                        var_99 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_111 [i_42] [(unsigned char)3] [i_41 - 1] [i_46])) ? (17982932945571052249ULL) : (var_8))));
                        var_100 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_41] [i_42] [(short)12] [i_46])) ? (var_16) : (((/* implicit */unsigned long long int) var_19)))));
                        var_101 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */long long int) var_18)) : (arr_79 [i_46] [i_42] [i_42] [10ULL] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)29405)))) : (((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_42] [i_46])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_16)))));
                        var_102 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_42]))) : (arr_30 [i_0] [i_41] [i_42] [i_46])))) ? (((long long int) (short)-29421)) : (((((/* implicit */_Bool) 8819160121547545220ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_0] [i_41] [i_42] [i_46]))) : (arr_79 [i_0] [i_41] [i_42] [i_42] [i_46]))));
                    }
                    var_103 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_97 [(_Bool)1] [i_41 + 1] [(_Bool)1] [i_0])) ? (1272207349U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_96 [i_0] [(signed char)1] [i_41 + 1] [i_42] [i_42]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_47 = 0; i_47 < 14; i_47 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_48 = 1; i_48 < 13; i_48 += 1) 
        {
            var_104 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_71 [i_47] [(_Bool)1] [i_48 + 1] [i_47])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_16))));
            var_105 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 3759107620U)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (short)-59))));
            var_106 = ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))));
        }
        for (long long int i_49 = 3; i_49 < 13; i_49 += 3) 
        {
            arr_151 [i_49] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_47] [i_49] [i_47] [i_49 + 1] [i_47] [i_47] [i_49])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_139 [i_47] [i_47] [i_47] [i_47] [6U])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1149195752162122754ULL)))) : (((unsigned long long int) arr_130 [i_49]))));
            var_107 = ((/* implicit */int) ((long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))) : (18446744073709551611ULL))));
            /* LoopNest 2 */
            for (unsigned long long int i_50 = 3; i_50 < 12; i_50 += 1) 
            {
                for (unsigned long long int i_51 = 0; i_51 < 14; i_51 += 4) 
                {
                    {
                        arr_159 [i_47] [i_49] [i_49] [i_51] = ((/* implicit */long long int) ((signed char) (short)29423));
                        arr_160 [i_47] [i_49] [i_49] [i_51] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)52))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_69 [i_47] [i_47] [i_47] [4U] [i_51])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_131 [(signed char)0])))))));
                        arr_161 [i_49 + 1] [i_50] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (short)76)) : (((/* implicit */int) (short)-29421))))) ? (((((/* implicit */_Bool) arr_97 [i_47] [i_47] [i_47] [i_47])) ? (((/* implicit */int) (short)29411)) : (((/* implicit */int) (short)-5009)))) : (((/* implicit */int) ((unsigned short) (unsigned char)0)))));
                        var_108 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_50 - 3] [i_51])))) : (((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (3022759947U)))));
                    }
                } 
            } 
            arr_162 [i_47] [i_47] [i_47] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)8] [i_49])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_80 [i_47] [i_49] [i_47] [i_47])))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_47] [i_49]))) : (((((/* implicit */_Bool) var_18)) ? (536957281440369451ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_47])))))));
            var_109 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_40 [i_47] [i_47] [i_49 + 1]))) ? (((((/* implicit */_Bool) (short)8956)) ? (-1558885100701262055LL) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_47] [i_49 - 1] [i_47] [i_49 - 2] [i_49 - 3] [i_47]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_141 [i_47] [i_49] [i_49] [i_49] [i_49] [i_47] [i_49]))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_52 = 1; i_52 < 12; i_52 += 1) 
        {
            var_110 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (short)-29410)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (3022759961U))));
            var_111 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (short)11103))) ? (((unsigned int) 3022759956U)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3883610793U)) ? (((/* implicit */int) (short)-18994)) : (((/* implicit */int) (short)76)))))));
        }
        for (unsigned long long int i_53 = 0; i_53 < 14; i_53 += 4) 
        {
            var_112 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_47] [i_53] [i_47])) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned char)177)) ? (2545357829U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29419))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)255)))))));
            var_113 = ((/* implicit */long long int) min((var_113), (((/* implicit */long long int) ((unsigned short) ((short) arr_144 [i_47] [i_47] [i_53] [i_53] [i_53]))))));
        }
    }
}
