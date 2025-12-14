/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80605
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), ((+(var_12)))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) ^ (((5053306430238167369ULL) % (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) | (arr_0 [i_0] [i_0])));
                        var_16 = ((/* implicit */unsigned char) ((((var_4) & (((/* implicit */unsigned long long int) arr_2 [i_0] [i_2])))) << (((var_1) - (16045214152688522886ULL)))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_8 [i_1] [i_0 + 1] [i_2 + 2]))));
                        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_15 [i_1] [i_2 - 1] [i_1] [i_1] = var_10;
                        arr_16 [i_0] [i_0] |= ((/* implicit */_Bool) max((min((arr_2 [i_0 + 3] [i_0 + 3]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) / (var_2)))))), ((+(var_0)))));
                    }
                    var_19 = ((/* implicit */long long int) (((+(((((/* implicit */unsigned long long int) 3754168373U)) + (35184372072448ULL))))) / (((unsigned long long int) arr_13 [i_2 + 2] [i_2 + 2] [i_0 - 2]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_9))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((_Bool) (+(540798922U)))))));
                            }
                        } 
                    } 
                    arr_31 [i_6] [i_7] [i_6] = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_4 [i_7 - 1] [i_7])) / (var_0)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) * (0ULL))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            {
                                var_22 |= min(((-(var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11] [i_6]))) - (4294967267U)))));
                                var_23 = (i_7 % 2 == 0) ? (((max((18446744073709551615ULL), (((var_3) * (2136073314796939512ULL))))) | (((arr_23 [i_7] [i_7] [i_7] [i_7 + 1]) << (((arr_23 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]) - (2143149077307641829ULL))))))) : (((max((18446744073709551615ULL), (((var_3) * (2136073314796939512ULL))))) | (((arr_23 [i_7] [i_7] [i_7] [i_7 + 1]) << (((((arr_23 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]) - (2143149077307641829ULL))) - (15955225237790175326ULL)))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    arr_40 [i_6] [i_7] [i_6] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))) : (3754168373U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))) : (max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_0)) > (var_3)))), (arr_10 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            {
                                arr_46 [i_6] [i_6] [i_7] [i_14] [i_6] [i_15] = ((((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_6] [i_7] [i_13] [i_13 - 1] [i_7 - 1])))))) == (((/* implicit */int) (!(((/* implicit */_Bool) 536870911ULL))))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((18446735277616529408ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1LL) != (((/* implicit */long long int) 3754168366U))))))))) || (((/* implicit */_Bool) 540798922U))));
                                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (843037977808742307LL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_3))) : (arr_18 [i_7 - 1] [i_7 - 1]))) % (((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_7 + 1]))));
                            }
                        } 
                    } 
                    arr_47 [i_7] = ((min((((/* implicit */unsigned long long int) arr_45 [i_7 - 1] [i_7] [i_13] [i_7] [i_13 - 1] [i_13])), (var_9))) << (((((((/* implicit */int) var_10)) << (((13791539092840478697ULL) - (13791539092840478687ULL))))) - (95209))));
                    arr_48 [i_6] [i_7 - 1] [i_13] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7 - 1] [i_7 + 1]))) : (var_5))))));
                }
                arr_49 [1U] [i_6] [i_7] = ((/* implicit */long long int) (~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_2 [i_7 + 1] [6U]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    arr_54 [i_6] [i_7] [i_16] = ((/* implicit */long long int) ((((var_9) * (((/* implicit */unsigned long long int) 429772522U)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_7] [i_7] [i_7] [i_7]))))))));
                    arr_55 [i_6] [i_16] [2ULL] |= ((/* implicit */long long int) arr_7 [i_7] [i_7 + 1] [i_7 + 1]);
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3865194752U)) < (-5490634772218140051LL)))), (arr_18 [i_6] [i_7 - 1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (min(((~(5249182413083507254ULL))), (((/* implicit */unsigned long long int) 540798914U))))));
                }
                for (unsigned char i_17 = 3; i_17 < 6; i_17 += 3) 
                {
                    var_27 |= ((/* implicit */unsigned char) max((min((arr_38 [i_7 + 1] [i_7 + 1] [i_17 + 2] [i_17 + 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (3754168373U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_6] [2LL] [i_7 + 1] [i_6] [2LL])))))))), (max((max((var_3), (((/* implicit */unsigned long long int) var_2)))), (((108086391056891904ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                    var_28 = (+((-(min((((/* implicit */unsigned long long int) var_6)), (17620369958645891027ULL))))));
                }
                var_29 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_8 [i_7] [i_7 + 1] [i_7 - 1])) || (((/* implicit */_Bool) arr_20 [i_7] [i_7 + 1] [i_7 + 1])))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3754168399U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) < (var_13)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_18 = 2; i_18 < 12; i_18 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_19 = 4; i_19 < 14; i_19 += 2) 
        {
            for (unsigned int i_20 = 1; i_20 < 12; i_20 += 1) 
            {
                {
                    var_30 = ((min((min((((/* implicit */long long int) arr_63 [i_19] [i_19])), (arr_60 [i_18] [i_20]))), (arr_1 [i_18]))) <= (((/* implicit */long long int) ((((arr_11 [i_20] [i_19] [i_18]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(_Bool)1] [i_19]))))) | (429772501U)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 3) 
                        {
                            {
                                arr_72 [i_22] [i_22] [i_18] [i_18] [i_22] [i_18] = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_64 [i_19 - 4])), (var_11))))) % (min((((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned char)249)) ? (var_1) : (8332381620600283670ULL))))));
                                arr_73 [0ULL] [(unsigned char)3] [i_20] [i_22] [i_20 + 1] [i_20] = min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_6)), (var_10)))) ? (((/* implicit */unsigned long long int) 3754168399U)) : (max((arr_68 [i_18] [i_20] [i_21] [i_22]), (33554431ULL))))), ((-(var_4))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (var_2)))), (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) 3754168385U)))))) << (((max((var_8), (((/* implicit */long long int) 540798923U)))) - (5291546298885306500LL)))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned long long int) (((((~(var_8))) + (9223372036854775807LL))) << (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_9)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((var_13) < (((/* implicit */unsigned long long int) arr_2 [i_18] [i_18 + 2])))))))));
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(72057585447993344ULL)))) && (((/* implicit */_Bool) arr_2 [i_18 + 3] [i_18 + 2])))))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((-(var_8)))))));
        var_34 = ((((((/* implicit */_Bool) (unsigned char)255)) ? (arr_2 [i_18] [i_18 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [(_Bool)1] [i_18 + 4])) >= (((/* implicit */int) var_10)))))))) % (arr_2 [i_18] [i_18]));
    }
}
