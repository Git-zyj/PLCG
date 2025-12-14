/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78375
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
    var_15 = max((((((((/* implicit */_Bool) (signed char)18)) ? (9615755422222364515ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))) << (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))), ((((_Bool)1) ? (13891448791344224358ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))));
    var_16 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (((/* implicit */int) var_12)))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) : (1890539850860681760ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (var_10) : (var_13))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) + (((var_9) - (var_9))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) % (14986085965099875235ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) : (18169091069678971795ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) == (((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) : (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) > (var_5))))) : (((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
        var_17 = ((/* implicit */unsigned long long int) var_0);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_1] [i_0 + 2] = var_13;
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 ^= ((/* implicit */_Bool) var_6);
                            arr_16 [i_2] [i_4] = ((/* implicit */unsigned long long int) var_0);
                            arr_17 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) min((var_8), (var_12)))), (min((var_11), (var_6))))))) | (var_13)));
                            arr_18 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_2] = min((min((((((/* implicit */_Bool) 18446744073709551611ULL)) ? (7845624275413296892ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))))), (((((/* implicit */_Bool) var_6)) ? (var_10) : (var_10))))), (((((/* implicit */_Bool) ((var_7) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (var_10) : (var_7))));
                            arr_19 [i_3] [i_2] [i_0] = var_6;
                        }
                        var_19 *= ((min((14986085965099875235ULL), (var_5))) % (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_10))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 2; i_5 < 12; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_5)));
                    arr_26 [i_6] = ((/* implicit */unsigned long long int) var_6);
                    arr_27 [i_5] [i_5] [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) ? (min((((/* implicit */unsigned long long int) var_3)), (var_14))) : (((var_7) + (var_1))))), (((/* implicit */unsigned long long int) ((((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))))))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                    {
                        arr_31 [(_Bool)1] [i_6] [i_6] [i_6] [i_6] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) << (((var_10) - (17305759716944991384ULL))));
                        var_21 = ((/* implicit */signed char) min((min((min((var_1), (var_14))), (max((var_9), (((/* implicit */unsigned long long int) var_8)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (min((var_10), (var_5)))))));
                        var_22 ^= ((((/* implicit */_Bool) var_10)) ? (var_1) : (min((((/* implicit */unsigned long long int) min((var_11), (var_2)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))) + (7438296364060123800ULL))))));
                    }
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_13))) | (((((/* implicit */_Bool) var_1)) ? (min((var_14), (((/* implicit */unsigned long long int) var_12)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))))))))));
                            arr_37 [i_0] [i_5] [i_0] [i_0] [i_6] = min((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) != (var_10))))))), (((/* implicit */unsigned long long int) var_3)));
                            arr_38 [11ULL] [i_5] [i_6] = ((((/* implicit */_Bool) min((var_14), (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_10)) ? (var_5) : (var_7))))) : (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                            arr_39 [i_0] [i_6] [i_6] [i_6] [i_8] [i_9] = ((/* implicit */signed char) var_14);
                        }
                        var_24 = min((var_9), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        arr_40 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
                    {
                        arr_45 [i_5] [i_6] [i_6] = min((((/* implicit */unsigned long long int) var_8)), (min((((var_8) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((var_13) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_6] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_13)))) && (min((var_3), (var_8))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) : (((var_4) ? (var_10) : (var_13))))) : (((/* implicit */unsigned long long int) ((min((var_4), (var_8))) ? (((/* implicit */int) ((var_12) || (((/* implicit */_Bool) var_1))))) : (((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))))));
                            var_25 = ((((((/* implicit */_Bool) var_9)) ? (min((var_7), (var_1))) : (((((/* implicit */_Bool) var_1)) ? (var_1) : (var_14))))) + (((max((var_7), (((/* implicit */unsigned long long int) var_11)))) | (((var_7) / (var_7))))));
                        }
                    }
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((min((((var_12) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_0)))) + (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 2; i_13 < 13; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_61 [i_12 - 2] [i_12 - 2] [i_12 - 2] [(signed char)3] [i_12] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */signed char) var_3))))), (var_14)))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_13))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) var_12)), (var_2)))) < (((((/* implicit */int) var_6)) - (((/* implicit */int) var_3)))))))));
                        arr_62 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_8), (var_3)))) + (((/* implicit */int) var_6))))) ? (((15542571833130789450ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))))) : (((((/* implicit */_Bool) ((var_7) << (((((/* implicit */int) var_6)) + (23)))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    }
                } 
            } 
        } 
        var_27 = ((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_13))) : (((var_13) << (((((/* implicit */int) var_6)) + (54))))))) < (((((/* implicit */_Bool) var_13)) ? (((var_14) ^ (var_1))) : (var_10))));
        var_28 ^= ((max((((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))), (var_5))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (var_6))))) < (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
    }
    for (unsigned long long int i_16 = 3; i_16 < 15; i_16 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) ((((var_8) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))))) ? (((min((((/* implicit */unsigned long long int) var_6)), (var_5))) * (((var_14) / (var_7))))) : (min((((/* implicit */unsigned long long int) var_11)), (var_7)))));
        /* LoopSeq 1 */
        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_18 = 1; i_18 < 15; i_18 += 4) 
            {
                arr_71 [i_16 - 3] [i_16 - 3] [i_16] [i_18] = ((/* implicit */unsigned long long int) var_0);
                /* LoopNest 2 */
                for (signed char i_19 = 1; i_19 < 14; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 1; i_20 < 15; i_20 += 4) 
                    {
                        {
                            arr_76 [i_16] [i_19] [i_18 + 1] [i_16] = ((/* implicit */signed char) var_1);
                            var_30 = ((((var_5) << (((var_9) - (12910088962469731680ULL))))) << (((((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_1))) - (11723690251313249229ULL))));
                            var_31 = ((/* implicit */_Bool) var_7);
                            var_32 = ((/* implicit */signed char) var_8);
                        }
                    } 
                } 
                arr_77 [i_16 - 1] [i_16 - 1] [i_16] = ((/* implicit */signed char) var_14);
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 2) 
                {
                    for (signed char i_22 = 1; i_22 < 15; i_22 += 1) 
                    {
                        {
                            var_33 = ((((var_13) < (var_5))) ? (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1))) : (var_5));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (var_9)));
                            var_35 ^= ((/* implicit */_Bool) var_1);
                        }
                    } 
                } 
            }
            var_36 = max((min((var_11), (((/* implicit */signed char) var_12)))), (((/* implicit */signed char) ((min((var_5), (var_13))) < (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
            var_37 = min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_14))) ? (min((var_5), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_8))))))), (var_13));
            var_38 = ((((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_13))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
            var_39 = ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) min(((signed char)-5), ((signed char)0)))), (16899506643795822176ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)126), (((/* implicit */signed char) var_12)))))));
        }
    }
}
