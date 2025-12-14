/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90661
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
    var_12 = ((/* implicit */unsigned int) var_8);
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_8))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                arr_8 [(unsigned char)13] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0 + 1]))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) == (13897603289807201629ULL)));
                arr_9 [i_0] [i_1] [i_2] [9LL] = ((((/* implicit */_Bool) (unsigned char)124)) ? (268435456U) : (var_7));
            }
            for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((13897603289807201627ULL) - (4549140783902349988ULL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7)))))))) : (var_11)));
                arr_14 [i_0] [(short)6] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) 0U))))) ? (min((13897603289807201629ULL), (((/* implicit */unsigned long long int) arr_3 [i_3] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 105893269)) ? (var_9) : (var_9)))))), (((4549140783902349969ULL) << (((((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) - (3294186947U)))))));
            }
            arr_15 [i_1] = ((/* implicit */unsigned int) ((13897603289807201664ULL) % (((/* implicit */unsigned long long int) min((249289789U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))))))))));
        }
        arr_16 [i_0] = ((/* implicit */int) ((unsigned int) -5753741427995990016LL));
        arr_17 [i_0 + 2] = ((/* implicit */long long int) ((min((195934962U), (((/* implicit */unsigned int) (unsigned char)232)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22829)))))) != (((long long int) (-9223372036854775807LL - 1LL)))))))));
        var_16 = ((/* implicit */short) var_7);
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        arr_20 [i_4] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((18446744073709551606ULL) >> (((arr_7 [i_4]) - (182516692U))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_4] [i_4] [i_4]))))));
        var_17 &= var_8;
        var_18 += ((/* implicit */long long int) var_0);
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            arr_23 [i_5] [i_4] = ((/* implicit */long long int) (short)-22829);
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) ^ (var_3)))) ? (((((/* implicit */unsigned long long int) var_6)) + (4549140783902349943ULL))) : (max((((/* implicit */unsigned long long int) var_3)), (var_10))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 4; i_6 < 12; i_6 += 4) 
            {
                for (int i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    {
                        arr_30 [6LL] [i_5] [i_6] = ((/* implicit */int) arr_26 [i_4] [i_4]);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_4] [i_5])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) 19))))) ? (((/* implicit */long long int) var_2)) : ((~(var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 458752U)) ? (var_11) : (1264264207U))))))));
                        var_21 = ((/* implicit */unsigned long long int) (unsigned char)166);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)16256)) >= (((/* implicit */int) (unsigned char)74))))) | (((((/* implicit */_Bool) (-(var_3)))) ? (((int) 0LL)) : (((/* implicit */int) arr_1 [i_5]))))));
                    arr_36 [i_4] [i_4] = min((var_9), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_9] [i_9] [i_8]))))));
                    arr_37 [i_4] [(unsigned char)3] [i_8] [(unsigned char)9] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 831998983U))))) & (arr_31 [i_9] [i_4] [i_8])));
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)11)) / (((/* implicit */int) arr_6 [i_4] [i_5] [i_8]))))) ? (((long long int) (short)13733)) : (((((/* implicit */_Bool) 4549140783902349949ULL)) ? (var_3) : (((/* implicit */long long int) 0U))))));
                    var_24 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) != (((/* implicit */int) ((short) var_9)))))), (((unsigned int) 4101939191U))));
                }
                for (int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        arr_46 [i_11] [11U] [i_8] [i_5] [i_5] [i_4] [i_4] = ((/* implicit */long long int) (~(3217049622U)));
                        arr_47 [i_4] [i_5] [i_4] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_4] [10U] [i_5] [i_8] [i_10] [(unsigned char)12]))))) || (((/* implicit */_Bool) ((unsigned char) arr_35 [i_4] [i_5] [i_5] [i_10] [i_4] [i_4])))));
                        arr_48 [i_4] [i_5] [i_8] [12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                    }
                    var_25 |= ((/* implicit */unsigned int) ((arr_38 [i_4] [i_4] [i_5] [i_10] [i_5] [i_8]) / (((((/* implicit */_Bool) ((4549140783902349949ULL) - (((/* implicit */unsigned long long int) 831998982U))))) ? (13897603289807201629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126)))))));
                    arr_49 [i_4] [i_10] [i_4] [i_4] &= ((/* implicit */unsigned char) arr_25 [i_4] [i_5]);
                }
                var_26 = max((min((((/* implicit */unsigned long long int) var_8)), (((var_10) - (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_28 [i_8] [i_5] [i_8] [i_8] [(unsigned char)1])), (arr_33 [i_8] [i_5])))));
                arr_50 [i_4] [i_4] [i_4] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_22 [i_4])) ? (((/* implicit */unsigned int) 19)) : (195934979U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [20LL] [i_8])))))) == ((+(arr_44 [i_8] [i_5] [i_4] [i_4] [6U])))));
            }
            for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
            {
                arr_53 [i_12] [i_12] [10LL] [i_4] |= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (unsigned char)212)), (arr_43 [i_4] [8LL] [11U] [i_5] [(unsigned char)7] [i_5] [i_12]))) >= (((/* implicit */long long int) (-2147483647 - 1)))));
                arr_54 [i_4] [i_5] [i_12] = ((/* implicit */long long int) max((max((13897603289807201629ULL), (((/* implicit */unsigned long long int) 290980852U)))), ((-(arr_18 [i_4])))));
            }
            for (unsigned int i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
            {
                arr_58 [i_4] [i_13] = ((/* implicit */unsigned int) (+(max((((2251799811588096ULL) / (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) min((arr_3 [i_5] [i_4]), (var_9))))))));
                var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1264264207U)), (((arr_10 [i_13] [i_5] [i_4] [6U]) / (288952146982213359LL)))))), (min((((/* implicit */unsigned long long int) ((var_7) & (4261412864U)))), (min((((/* implicit */unsigned long long int) var_3)), (288230376151711743ULL)))))));
            }
        }
        arr_59 [12U] [i_4] = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (6337099294494335767LL) : (((/* implicit */long long int) var_4))))) | (288230376151711741ULL))));
    }
    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        var_28 &= ((/* implicit */long long int) ((max(((-(3685799611U))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_6))))) >> (((((unsigned long long int) ((int) 4549140783902349987ULL))) - (18446744072799246987ULL)))));
        arr_62 [i_14] = ((/* implicit */int) ((((long long int) ((18158513697557839887ULL) >= (((/* implicit */unsigned long long int) -4075450403838398165LL))))) << (((min((min((arr_5 [i_14] [i_14]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) 4099032318U)))) - (150LL)))));
    }
    var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (4294967295U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (short)4095)))))) : (var_6)))) >= (max((((/* implicit */unsigned long long int) var_3)), ((-(13897603289807201644ULL)))))));
    var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_2)) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) * (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)30)))))))));
}
