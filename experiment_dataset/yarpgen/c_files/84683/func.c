/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84683
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
    var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) 6U)), (8664756288536023514LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)(-127 - 1))) < (((/* implicit */int) (signed char)-1))));
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((unsigned long long int) 6U));
                        arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_2 - 1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((2844241173686970437LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))))) ? (((/* implicit */long long int) ((int) 7398660905443567074LL))) : (((long long int) 4206324447U))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -138358736))) || (((/* implicit */_Bool) ((long long int) 18446744073709551615ULL)))));
                            arr_16 [i_2] = ((/* implicit */short) ((long long int) (_Bool)1));
                        }
                        for (int i_5 = 2; i_5 < 20; i_5 += 4) 
                        {
                            arr_21 [i_2] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */short) arr_1 [i_2 - 1]);
                            arr_22 [i_0] [i_2] [i_0] [i_3] [i_0] = ((long long int) (signed char)124);
                            var_24 *= ((short) ((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_20 [i_5] [i_3] [i_1] [i_1] [i_0 + 1]))));
                        }
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_0 + 1] [i_2] [i_0] [i_0 - 4] [i_0] = ((_Bool) ((((/* implicit */_Bool) 12523030414476873043ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)127))));
                            arr_26 [i_2] [i_2] [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12158648755438940185ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (6475825533525872971ULL)))) ? (((unsigned long long int) (signed char)(-127 - 1))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (signed char)97)))))));
                        }
                        arr_27 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((((unsigned int) 1250770956U)) >> (((((/* implicit */int) (signed char)-79)) + (80)))));
                        arr_28 [i_0] [i_0] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2] = ((/* implicit */int) ((signed char) (signed char)-125));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_34 [i_8] [i_8] [i_8] [i_8] = ((signed char) 9223372036854775796LL);
                        arr_35 [i_0] [i_1 - 2] [i_1 - 1] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_1 - 2] [i_8] [i_8] [i_1 - 2] [i_8])) ? (arr_11 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3]) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_7] [i_8] [i_1] [i_1])))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)113)) & (((/* implicit */int) (short)1))));
                        var_26 += ((/* implicit */long long int) ((((/* implicit */unsigned int) (-2147483647 - 1))) + (543258015U)));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_38 [i_0] [i_9] [i_0] = ((/* implicit */signed char) ((short) arr_18 [i_0] [i_0 - 3] [i_0] [i_0 - 3] [i_0]));
                arr_39 [i_9] [i_1 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-126)) || (((/* implicit */_Bool) (signed char)63))));
            }
            for (signed char i_10 = 3; i_10 < 22; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_11 = 1; i_11 < 21; i_11 += 2) 
                {
                    arr_44 [i_0] [i_0 + 1] [i_0 - 4] = ((/* implicit */long long int) ((signed char) 4294967295ULL));
                    arr_45 [i_1 - 1] = ((/* implicit */int) ((long long int) 1229216566U));
                }
                /* LoopSeq 2 */
                for (long long int i_12 = 1; i_12 < 21; i_12 += 2) 
                {
                    var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */long long int) 4194303)) : (-7LL)))) : (((unsigned long long int) (short)-26834))));
                    var_28 = ((/* implicit */int) ((((/* implicit */int) (signed char)99)) < (((/* implicit */int) (_Bool)1))));
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967269U)) ? (7772668086901060185LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-69)))));
                }
                for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((signed char) (_Bool)1));
                        var_31 = ((/* implicit */int) ((_Bool) (_Bool)1));
                        arr_54 [i_0] [i_13] [i_10] [i_13] [i_14] [i_14] [i_0] |= ((/* implicit */_Bool) ((arr_24 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_14] [i_14]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_10 - 2] [i_1] [i_10] [i_10 - 2])))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        arr_59 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0 + 3] [i_0 - 4] = ((/* implicit */_Bool) arr_55 [i_0] [i_0] [i_10] [i_0] [i_15]);
                        var_32 = ((((/* implicit */_Bool) 379218142)) ? (((/* implicit */long long int) -1120209687)) : (9223372036854775804LL));
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) -7064520630388966742LL)))))));
                    }
                    var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) arr_19 [i_0 - 2] [i_1] [i_10 - 1] [i_13] [i_13]))));
                }
                var_35 |= ((/* implicit */signed char) ((long long int) arr_19 [i_0 + 2] [i_1 - 1] [i_10] [i_10] [i_10 + 1]));
            }
            for (signed char i_16 = 3; i_16 < 22; i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        {
                            arr_66 [i_18] [i_17] [i_17] [i_16] [i_16 - 2] [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) (signed char)69);
                            var_36 *= (_Bool)1;
                            arr_67 [i_18] [i_16] [i_16] [i_16] [i_0] = ((/* implicit */long long int) arr_9 [i_16] [i_16] [i_16] [i_16] [i_16]);
                        }
                    } 
                } 
                var_37 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-59))) & (((long long int) (-9223372036854775807LL - 1LL)))));
            }
        }
        var_38 |= ((/* implicit */long long int) arr_37 [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_0]);
        arr_68 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (((((/* implicit */_Bool) arr_19 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [(signed char)14] [i_0 - 4] [i_0 - 2]))) : (arr_55 [i_0] [i_0 + 3] [i_0] [i_0] [i_0 + 1])))));
    }
    for (long long int i_19 = 0; i_19 < 12; i_19 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_20 = 1; i_20 < 11; i_20 += 1) 
        {
            var_39 = ((/* implicit */long long int) (signed char)-72);
            arr_74 [i_20 - 1] = ((/* implicit */_Bool) max((6066005019733825642LL), (-4475106692121952810LL)));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_40 &= 18446744073709551615ULL;
            arr_77 [i_19] [i_21] [i_21] = ((/* implicit */signed char) min((4095LL), (((/* implicit */long long int) 146424401U))));
            arr_78 [i_21] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 2161786193861940690ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-126)))));
            var_41 = ((/* implicit */long long int) min((4066286932U), (((/* implicit */unsigned int) -1))));
        }
        for (long long int i_22 = 0; i_22 < 12; i_22 += 2) 
        {
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                for (signed char i_24 = 0; i_24 < 12; i_24 += 4) 
                {
                    {
                        arr_85 [i_19] = ((/* implicit */int) max((((signed char) min((8686319884730173300LL), (((/* implicit */long long int) 2147483633))))), (arr_64 [i_19])));
                        arr_86 [i_19] [i_19] [i_19] [i_22] [i_23] [i_24] = ((/* implicit */unsigned int) arr_19 [i_19] [i_19] [i_19] [i_19] [i_22]);
                        /* LoopSeq 3 */
                        for (signed char i_25 = 0; i_25 < 12; i_25 += 1) 
                        {
                            var_42 = ((/* implicit */short) ((arr_71 [i_23] [i_25]) < (((/* implicit */int) (signed char)-63))));
                            var_43 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3065750730U) >> (((/* implicit */int) (signed char)1))))) ? (min((-8LL), (((/* implicit */long long int) (signed char)71)))) : (min((-1LL), (((/* implicit */long long int) (signed char)-4))))))), (min((((/* implicit */unsigned long long int) arr_41 [i_25] [i_23])), (12331472841092785446ULL)))));
                            arr_89 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_65 [i_19] [i_22] [i_24] [i_24]))) ? (((((/* implicit */_Bool) 8129694234835583502ULL)) ? (1614991287455320462LL) : (((/* implicit */long long int) 2897289210U)))) : (((/* implicit */long long int) ((/* implicit */int) max((min(((short)30798), (((/* implicit */short) (signed char)-1)))), (((/* implicit */short) arr_81 [i_19] [i_19] [i_19] [i_19]))))))));
                            arr_90 [i_19] [i_22] [i_23] [i_19] [i_19] = max((0ULL), (12264685057985068038ULL));
                        }
                        for (long long int i_26 = 4; i_26 < 10; i_26 += 3) 
                        {
                            var_44 = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1602275510)) ? (-7664427124179455562LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_19] [i_22] [i_23] [i_24])))))) ? (((/* implicit */int) ((short) (signed char)98))) : (((/* implicit */int) (_Bool)1))))));
                            arr_94 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2897289192U)), (-7993739674116493090LL)));
                            arr_95 [i_19] [i_19] [i_23] [i_23] [i_26 - 4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((long long int) 149223605751772614ULL))), (((unsigned long long int) (_Bool)1))));
                        }
                        for (unsigned int i_27 = 0; i_27 < 12; i_27 += 2) 
                        {
                            arr_98 [i_19] [i_22] [i_19] [i_24] [i_27] = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned long long int) 580283388)), (((((/* implicit */_Bool) (signed char)-117)) ? (8613518403733913463ULL) : (((/* implicit */unsigned long long int) -2056139891)))))));
                            var_45 = max((((/* implicit */int) arr_96 [i_19] [i_22] [i_23] [i_24] [i_27])), (max((((int) 13065099349975093112ULL)), (((/* implicit */int) ((short) arr_71 [i_24] [i_22]))))));
                            var_46 |= ((/* implicit */short) (signed char)-39);
                            var_47 = (signed char)127;
                        }
                    }
                } 
            } 
            var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) min((18446744073709551615ULL), (18446744073709551614ULL)))) ? (((/* implicit */int) (signed char)26)) : (((int) -1LL))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 4) 
            {
                for (int i_29 = 0; i_29 < 12; i_29 += 1) 
                {
                    {
                        var_49 &= ((/* implicit */long long int) ((signed char) (signed char)108));
                        var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)28816)) : (((/* implicit */int) (signed char)126))))))));
                    }
                } 
            } 
        }
        var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) max((((unsigned long long int) -5457377034584420170LL)), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (signed char)-108)) % (((/* implicit */int) (signed char)-97)))))))))));
        var_52 = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) (signed char)-103)), (-3542822425769522032LL))))), (((long long int) ((((/* implicit */_Bool) (signed char)118)) ? (128238731555156910LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_19] [i_19]))))))));
        var_53 = -293602626967906904LL;
        var_54 ^= ((/* implicit */_Bool) ((unsigned long long int) (signed char)-126));
    }
    var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) ((int) var_10)))));
}
