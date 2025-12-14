/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56349
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) (short)-6732);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_15 = ((/* implicit */long long int) max((((/* implicit */int) var_12)), (((((((/* implicit */int) arr_1 [i_2])) != (((/* implicit */int) var_5)))) ? (((/* implicit */int) (_Bool)0)) : ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))))));
                    arr_10 [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2]))) | (arr_4 [i_2] [i_1] [i_0]))))), (arr_3 [i_1] [i_2] [i_0])));
                }
                arr_11 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((((unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0] [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (short)4954);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        arr_23 [i_6] [i_5] [i_4] [i_6] = ((((((var_3) ? (arr_4 [i_6] [i_4] [i_3]) : (arr_2 [i_6] [i_5]))) + (((/* implicit */unsigned long long int) 2147483647)))) + (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_0)))) + (((/* implicit */int) arr_19 [i_4 - 1] [i_4 + 1]))))));
                        /* LoopSeq 4 */
                        for (signed char i_7 = 1; i_7 < 20; i_7 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) ((((((/* implicit */int) arr_13 [i_5])) != (((((/* implicit */int) var_5)) / (((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((short) var_9))))) : ((+(((((/* implicit */_Bool) arr_9 [i_4 + 1])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3] [i_3] [9LL] [i_7])))))))));
                            arr_27 [i_3] [i_4] [i_4 - 1] [i_5] [i_6] [16ULL] [i_7] = ((/* implicit */signed char) (+(((((arr_25 [i_4] [i_5] [i_4 + 1] [i_7 + 2] [i_4 - 1] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_8)))))))));
                            var_18 = ((((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32)))))) > (((/* implicit */int) var_13)));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 1; i_8 < 20; i_8 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_4] [i_4] [i_6] [i_8 + 3] [i_4 + 1])) & (((/* implicit */int) arr_5 [i_6]))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) (short)4954))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            arr_32 [i_5] [i_6] [i_5] [i_4 + 1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4 + 1])) ? (((/* implicit */int) arr_5 [i_4 - 1])) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_5 [i_4 - 1])) : (((/* implicit */int) max((arr_5 [i_4 + 1]), (arr_5 [i_4 - 1]))))));
                            var_21 += ((/* implicit */unsigned char) ((signed char) (+(arr_0 [i_4 - 1] [i_4 - 1]))));
                            var_22 |= ((/* implicit */_Bool) max((((var_11) & (((/* implicit */long long int) ((/* implicit */int) (short)4954))))), (((/* implicit */long long int) (+(var_9))))));
                            var_23 += ((/* implicit */short) ((arr_24 [i_9] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) ? (max((2080570545971245189ULL), (((/* implicit */unsigned long long int) arr_24 [i_9] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_24 [i_9] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_14))));
                        }
                        for (signed char i_10 = 1; i_10 < 20; i_10 += 3) 
                        {
                            arr_36 [i_3] [i_4] [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_3] [i_4 - 1] [i_5]))) ? (((/* implicit */int) ((arr_3 [i_5] [i_6] [i_10 + 2]) < (arr_3 [i_6] [i_3] [i_10 + 4])))) : (((/* implicit */int) ((arr_3 [i_10 + 3] [i_6] [i_4 - 1]) <= (arr_3 [i_6] [i_4 + 1] [i_3]))))));
                            var_25 |= ((((/* implicit */int) (_Bool)1)) == ((-(((/* implicit */int) arr_8 [18LL] [i_6] [i_6] [i_6])))));
                        }
                        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((2080570545971245189ULL) << (((((/* implicit */int) arr_17 [14U] [i_6])) - (15697)))))))) || (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (4294967295U)))) <= ((~(((/* implicit */int) (short)15408))))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        arr_40 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_5] [i_5] [i_5] [i_5] [i_5])) & (((/* implicit */int) arr_22 [i_3] [i_4] [i_5] [i_11]))));
                        var_27 -= ((/* implicit */_Bool) var_11);
                    }
                    arr_41 [i_3] [i_5] [i_5] = ((signed char) min((((/* implicit */int) arr_1 [i_5])), (((var_3) ? (((/* implicit */int) arr_26 [i_4] [i_4] [i_5] [i_4 + 1] [i_5] [i_4])) : (((/* implicit */int) arr_19 [i_3] [i_4]))))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) (_Bool)1))))), (((((/* implicit */_Bool) arr_29 [i_5] [i_4])) ? (16366173527738306426ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) arr_13 [i_5]))), (arr_9 [i_4 + 1])))))))));
                }
                for (short i_12 = 2; i_12 < 22; i_12 += 3) 
                {
                    var_29 = ((/* implicit */short) max((((((((/* implicit */int) var_14)) <= (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) arr_12 [i_4 - 1] [i_12])) : (((((/* implicit */_Bool) (short)4954)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_11))))), (((/* implicit */long long int) var_5))));
                    var_30 = min((0ULL), (((/* implicit */unsigned long long int) var_10)));
                }
                arr_44 [i_3] [i_4 - 1] [i_4] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_10)) > (max(((-2147483647 - 1)), (((/* implicit */int) var_3)))))));
                arr_45 [i_3] = ((/* implicit */unsigned long long int) ((2305843009213693952ULL) >= (((unsigned long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_0)))))));
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_56 [i_3] [i_3] [i_13] [i_14] [i_3] [i_3] [i_3] = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (16392964707772380739ULL)))) ? (((((/* implicit */_Bool) arr_4 [i_13] [i_13] [i_13])) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((15680672988043815944ULL) / (arr_2 [i_14] [i_14])))));
                                arr_57 [i_14] [i_14] [i_14] [i_15 - 1] [i_4 - 1] [i_3] = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_24 [i_4] [i_4 + 1] [i_13] [i_15 - 1] [i_15 - 1]))))));
                                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_13] [i_14] [i_15 - 1])) ? (((/* implicit */int) arr_55 [i_3] [(short)8] [i_13] [(short)5] [i_14] [i_15 - 1])) : ((-2147483647 - 1)))), ((~(((/* implicit */int) var_5)))))) << (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_13])) && (((/* implicit */_Bool) var_10)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_32 ^= ((/* implicit */unsigned long long int) arr_9 [i_17]);
                                var_33 = ((/* implicit */unsigned int) (signed char)64);
                                arr_64 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_0))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_17 - 1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        for (unsigned int i_19 = 3; i_19 < 23; i_19 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */short) (~(((((/* implicit */int) ((((/* implicit */int) (unsigned char)137)) == (((/* implicit */int) var_10))))) * (((arr_18 [i_19] [i_18] [i_19]) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_26 [i_3] [i_3] [i_19] [i_13] [i_18] [i_19]))))))));
                                arr_70 [i_3] [i_4] [i_19] [i_18] [i_19 - 2] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_6)))))));
                                arr_71 [i_3] [i_19] [i_4 - 1] [i_4] [i_13] [i_4] [i_19] = (!(((/* implicit */_Bool) (((((-(((/* implicit */int) var_10)))) + (2147483647))) << (((/* implicit */int) (!(var_2))))))));
                            }
                        } 
                    } 
                    arr_72 [i_3] [i_4] [i_3] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)21529))))) ? (((/* implicit */int) (!(arr_37 [i_4])))) : (((/* implicit */int) var_12)))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                {
                    var_35 -= ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_51 [i_3] [(unsigned char)16] [i_4 - 1] [(unsigned char)16])) : (((/* implicit */int) (signed char)63)))), (((/* implicit */int) arr_66 [i_3] [i_4 - 1] [i_20] [i_20] [i_20]))))));
                    arr_75 [i_4] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_42 [i_20] [i_20] [i_20] [i_20])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1LL))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_60 [i_3] [i_4] [i_20] [i_20])), (1936224305U)))) : (max((min((var_11), (((/* implicit */long long int) arr_5 [i_20])))), (((/* implicit */long long int) var_9))))));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) ((var_6) > (var_6)))) & (((((/* implicit */_Bool) 1936224305U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))))), ((+(((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
}
