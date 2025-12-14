/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76434
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (18446744073709551615ULL)))))) ? (16208511987071135167ULL) : (((/* implicit */unsigned long long int) 676283545))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_1 [3] [i_0]);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_2 + 1] [i_2 - 2] [i_2 + 1]) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 1] [i_2 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_0]))) : (((((/* implicit */_Bool) ((int) arr_8 [i_0] [i_1]))) ? ((+(arr_7 [i_0] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -676283555)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (((unsigned long long int) 4294967295U))));
                            arr_13 [i_4] [i_1] [i_0] [i_1] [i_0] = 2807139304U;
                        }
                        var_13 = ((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 1]);
                        arr_14 [i_0] = ((/* implicit */short) arr_7 [i_2 - 1] [i_2] [i_2] [i_2 + 1]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) arr_16 [14ULL])) : (((/* implicit */int) arr_16 [12ULL]))));
        arr_18 [i_5] [19U] = ((/* implicit */unsigned long long int) 67108863U);
    }
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((16208511987071135167ULL) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-16))))))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) arr_17 [i_6] [i_6]);
                    var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) -17142884)) != (3352824548U))))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) arr_21 [i_6] [i_8]))))) : (((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */unsigned int) 268434944)) : (1428757456U)))));
                    /* LoopSeq 3 */
                    for (int i_9 = 4; i_9 < 22; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_15 [i_6]))));
                            var_19 = ((/* implicit */int) (+(3826508887U)));
                            var_20 = ((/* implicit */unsigned int) ((int) (_Bool)0));
                            var_21 *= ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)41847)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6] [i_7] [i_6] [i_9 - 2] [i_6])) ? (0ULL) : (16208511987071135167ULL)))) ? (((/* implicit */int) (unsigned short)448)) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)35696))))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
                        {
                            arr_35 [i_7] [i_7] = ((/* implicit */int) var_1);
                            arr_36 [i_6] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (signed char)92))));
                            arr_37 [i_6] [i_7] [i_8] [i_9] [i_9] [i_7] = ((/* implicit */unsigned char) (unsigned short)65531);
                            var_22 = ((/* implicit */unsigned int) var_10);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
                        {
                            arr_40 [i_7] [i_7] [i_8] [0U] [i_12] = ((/* implicit */short) (_Bool)1);
                            var_23 += ((/* implicit */int) arr_21 [i_7] [i_8]);
                            var_24 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_7)))));
                        }
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) max((-2063879321), (arr_26 [i_6] [i_9 - 2] [i_9] [i_9])))) || (((/* implicit */_Bool) min((arr_26 [i_9] [i_9 - 4] [i_9] [i_9]), (arr_26 [6ULL] [i_9 - 2] [(_Bool)1] [i_9]))))));
                        var_26 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_38 [i_9 - 4] [i_9 - 4] [i_6])) * (((/* implicit */int) arr_38 [i_9 - 2] [i_9 - 1] [i_6])))), (((/* implicit */int) min((arr_31 [i_6]), (arr_31 [i_6]))))));
                    }
                    for (int i_13 = 4; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) arr_30 [i_13] [i_8] [(signed char)22] [i_6] [i_6]);
                        arr_45 [i_7] [i_8] [10U] [18U] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2866209848U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (2182256488U)))) ? (((/* implicit */int) arr_16 [i_7])) : (arr_26 [i_8] [i_8] [i_8] [i_8])))) : (((((583152000551137700ULL) + (((/* implicit */unsigned long long int) arr_32 [i_7] [i_7] [i_8] [i_13] [i_7])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        arr_46 [19ULL] [i_7] [(_Bool)1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_13 - 3] [i_8] [i_7] [i_6])) ? (((/* implicit */int) arr_44 [12] [i_13 - 4] [i_13] [i_13 - 1] [i_13 - 1])) : (((/* implicit */int) arr_44 [i_6] [i_7] [i_8] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_7])))))) : (((unsigned long long int) (_Bool)1))));
                    }
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) -320804427)), (3265425772U)))) ? (((((/* implicit */_Bool) 285123641U)) ? (14020708137438031014ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((arr_34 [i_8] [i_6] [i_6] [i_8] [i_8] [i_8]) - (279609325U)))))))) % (min((min((((/* implicit */unsigned long long int) 3812198962U)), (18293629158755316522ULL))), (((/* implicit */unsigned long long int) arr_30 [i_6] [i_7] [i_8] [i_14] [i_14])))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_55 [i_6] [i_7] [i_8] [i_6] [i_7] = ((2953710386U) & (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (65520U))) ? (2866209866U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)19)))))))));
                            var_29 = ((unsigned int) 3896803657U);
                        }
                        var_30 = ((/* implicit */unsigned int) min((14020708137438031020ULL), (((/* implicit */unsigned long long int) 344266306))));
                        var_31 ^= max((max((min((arr_30 [i_7] [i_7] [i_8] [i_6] [i_8]), (((/* implicit */long long int) arr_51 [i_6] [i_7] [i_8] [i_14] [i_14] [i_8] [i_6])))), (((/* implicit */long long int) ((int) (unsigned short)6607))))), (((((/* implicit */_Bool) min((arr_25 [i_6] [i_6]), (((/* implicit */unsigned long long int) 9U))))) ? (((/* implicit */long long int) ((int) 520093696))) : (((long long int) arr_34 [i_6] [i_6] [i_6] [i_8] [i_8] [i_14])))));
                        var_32 = ((/* implicit */unsigned int) arr_30 [0U] [i_7] [i_8] [i_8] [i_14]);
                    }
                }
            } 
        } 
        var_33 *= ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) 262143ULL))))), ((signed char)-114)));
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((_Bool) arr_39 [i_6] [i_6] [2U] [i_16] [i_16] [i_16] [i_6])))));
            /* LoopNest 3 */
            for (long long int i_17 = 2; i_17 < 21; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_36 = ((/* implicit */unsigned long long int) ((min(((+(((/* implicit */int) (short)-31628)))), (((/* implicit */int) (signed char)123)))) + ((~(1917279174)))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */short) arr_17 [i_16] [19]);
            var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        }
        var_39 = (+(((unsigned int) min((((/* implicit */unsigned long long int) arr_63 [i_6] [i_6])), (13364344381620152313ULL)))));
    }
    var_40 = (~(((/* implicit */int) (short)-32767)));
    /* LoopNest 2 */
    for (unsigned int i_20 = 0; i_20 < 24; i_20 += 3) 
    {
        for (unsigned int i_21 = 0; i_21 < 24; i_21 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_22 = 0; i_22 < 24; i_22 += 3) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 3) 
                    {
                        for (unsigned int i_24 = 0; i_24 < 24; i_24 += 3) 
                        {
                            {
                                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_22])) ? (((/* implicit */unsigned int) ((((_Bool) arr_71 [i_21] [i_21] [i_24])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_21] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_20] [i_21] [i_21] [i_22]))) : (3253193390005388606ULL)))) ? (1491533454U) : (((unsigned int) (_Bool)1))))));
                                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_20] [i_20])) ? (16312148023776950555ULL) : (((/* implicit */unsigned long long int) arr_17 [i_22] [i_23]))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 5132372614046220109ULL)))) ? (arr_70 [(short)0] [(short)0] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24418)))))) : (((((/* implicit */_Bool) -1)) ? (max((arr_66 [i_22] [23U]), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                } 
                var_43 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_21] [i_20]))));
                arr_78 [9LL] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 4289999207U)) ? (arr_71 [6ULL] [i_20] [i_21]) : (0U)))));
            }
        } 
    } 
}
