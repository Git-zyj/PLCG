/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58352
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_17)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) + (((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)254)))))) : (((((((/* implicit */unsigned long long int) var_16)) % (18446744073709551615ULL))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */long long int) arr_8 [8U] [i_2] [i_0] [i_0]);
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                        {
                            var_20 ^= ((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3] [i_4]);
                            var_21 = ((long long int) 7252264561194243812ULL);
                            arr_13 [i_3] = ((_Bool) arr_4 [i_0 - 2]);
                        }
                        for (short i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) -4111635384666767659LL);
                            var_23 = ((/* implicit */long long int) max((var_23), ((((-(4111635384666767658LL))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (7303888899847124644LL)))))));
                        }
                        for (short i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1])) < (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1])))))));
                            var_25 = ((/* implicit */short) arr_2 [i_1]);
                            var_26 = ((/* implicit */long long int) (_Bool)1);
                            arr_19 [i_0] [i_1] [i_1 - 3] [i_2 + 1] [i_3] [i_3] [i_6] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 7252264561194243812ULL)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_5))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (-((-(((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 + 1]))));
                            var_29 -= (!(((/* implicit */_Bool) arr_10 [i_1 + 2] [i_2 + 1])));
                        }
                        arr_22 [i_2] [i_1] = ((/* implicit */int) (!((_Bool)1)));
                    }
                    for (int i_8 = 3; i_8 < 13; i_8 += 2) 
                    {
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 - 2] [i_0] [i_0 - 1] [i_0]))) : (3947313079560608010ULL))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_8])))))))));
                        var_31 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8 + 1])))))) < (((unsigned long long int) arr_3 [i_8 - 3]))));
                    }
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) min((min((4111635384666767659LL), (((/* implicit */long long int) (short)-22652)))), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (signed char)-126)), (arr_11 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))))))));
                            var_33 += ((/* implicit */_Bool) var_11);
                        }
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_2))), (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_2] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))) : (var_9))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_9])) ? (((/* implicit */int) arr_31 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0 - 2]))))))))));
                            arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 2] = ((/* implicit */long long int) (!(((((/* implicit */int) arr_5 [i_0 + 1])) < (((/* implicit */int) arr_17 [i_0] [i_0 - 2] [i_0] [i_0] [i_0]))))));
                            var_35 = ((/* implicit */int) arr_34 [i_0] [i_1] [(_Bool)1] [i_0]);
                        }
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            arr_38 [i_0] [i_1] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))) % (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */long long int) arr_37 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2])) : (var_6))))));
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (~(var_12))))));
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (~(((/* implicit */int) var_17)))))));
                            var_38 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) / (arr_18 [i_0] [i_0] [i_12] [i_0] [i_0 - 1] [i_0] [i_1])));
                        }
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_9]))));
                        arr_39 [i_2 + 1] [i_1] [i_2 + 1] [i_9] = ((/* implicit */unsigned char) arr_9 [i_0 - 1]);
                        arr_40 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_2 + 1]);
                    }
                    var_40 ^= ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) ((arr_7 [i_2]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [(_Bool)0] [i_0 + 1]))))), (((((/* implicit */_Bool) 2251799813685247ULL)) ? (-4574856946764271507LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32)))))))));
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 1; i_14 < 12; i_14 += 3) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned char) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_34 [i_14] [i_14 + 3] [i_14 + 3] [i_14 + 3])))) : (((arr_34 [i_0 + 1] [i_1] [i_1] [i_13]) % (arr_34 [i_0] [i_1 - 2] [i_1 - 2] [i_0])))));
                                var_42 = ((/* implicit */_Bool) ((3U) + (((/* implicit */unsigned int) 1094610056))));
                                var_43 += ((/* implicit */unsigned char) (+(7252264561194243812ULL)));
                            }
                        } 
                    } 
                }
                var_44 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -4547642574803050691LL)))) ? (((((/* implicit */_Bool) arr_21 [i_1 - 3] [i_1 - 3] [i_1 - 3])) ? (((/* implicit */int) arr_21 [i_1 - 2] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_6 [i_1 - 2] [i_1])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_21 [i_1 - 2] [i_1] [i_1])), (arr_31 [i_1 - 3] [i_1 - 1] [i_1] [i_1] [i_1 + 2]))))));
                var_45 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (short)28016))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2]))) : (2139011340U)))));
            }
        } 
    } 
    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((18446744073709551612ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
}
