/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62212
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)48695)) << (((((/* implicit */int) (unsigned short)51100)) - (51092)))));
                /* LoopSeq 4 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65517)) && (((/* implicit */_Bool) (unsigned short)4928))));
                    var_19 = max(((unsigned short)65534), ((unsigned short)65532));
                    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 119205446U)) ? (((long long int) (-(((/* implicit */int) (short)-24721))))) : (((/* implicit */long long int) 3497204878U))));
                    var_21 *= ((/* implicit */unsigned short) ((-2078179262018330287LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60582)))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)60586)) ? (((/* implicit */int) (unsigned short)60582)) : (((/* implicit */int) (unsigned short)15205))));
                }
                /* vectorizable */
                for (short i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((-5561757271570230189LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534)))));
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)51100)) ? (((/* implicit */int) (unsigned short)12712)) : (((/* implicit */int) (short)946))));
                        var_24 = ((/* implicit */long long int) ((short) (unsigned short)9));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((unsigned int) (unsigned short)11862)))));
                        var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -408940777580138132LL)) ? (((/* implicit */int) (short)938)) : (((/* implicit */int) (short)-975))));
                    }
                    var_27 = ((/* implicit */unsigned short) ((long long int) arr_9 [(short)4] [i_1] [i_1] [i_3 - 3]));
                    var_28 = ((/* implicit */long long int) (-(((/* implicit */int) (short)970))));
                }
                for (long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                {
                    var_29 = var_9;
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) arr_6 [7U] [i_1]);
                                var_31 |= ((/* implicit */unsigned int) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6943)))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_32 |= ((/* implicit */long long int) ((((/* implicit */int) (short)32767)) - (((/* implicit */int) (unsigned short)6144))));
                    arr_26 [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)47067)) - (((/* implicit */int) (short)1792))));
                }
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((((/* implicit */_Bool) -1436811238980839012LL)) ? (398945839U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1383)))))));
                        var_34 += ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (unsigned short)43893))) * (((((/* implicit */_Bool) (unsigned short)64829)) ? (((/* implicit */int) (short)992)) : (((/* implicit */int) (unsigned short)43899))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                    {
                        arr_34 [i_1] [i_1] [i_9] [i_0] = ((/* implicit */short) -3861940940416878545LL);
                        arr_35 [i_1] [i_1] [(unsigned short)19] = ((/* implicit */short) ((((/* implicit */_Bool) -3861940940416878523LL)) ? (((/* implicit */int) (short)12608)) : (((/* implicit */int) (unsigned short)51100))));
                        var_35 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
                        var_36 = ((unsigned short) -408940777580138111LL);
                        var_37 = ((((/* implicit */_Bool) 17592185782272LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4960))) : (-3861940940416878553LL));
                    }
                    for (unsigned int i_12 = 1; i_12 < 23; i_12 += 2) 
                    {
                        arr_38 [i_0] [i_0] [i_9] [i_1 + 3] [i_9] [i_12 + 1] &= ((/* implicit */short) ((unsigned int) 2448728458U));
                        arr_39 [i_1] = ((/* implicit */short) (unsigned short)47067);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_38 |= ((/* implicit */short) (~(((/* implicit */int) max(((unsigned short)15862), (((/* implicit */unsigned short) arr_24 [i_9] [i_1 + 3] [i_9])))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)41428)) ? (((/* implicit */int) (short)-16003)) : (((/* implicit */int) (short)970))));
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >= (((((/* implicit */int) (unsigned short)47798)) / (((/* implicit */int) (unsigned short)15)))))))));
                        }
                        for (long long int i_15 = 3; i_15 < 23; i_15 += 2) 
                        {
                            var_41 &= ((/* implicit */short) var_16);
                            arr_49 [i_0] [i_1 + 3] [i_1] = arr_0 [i_0] [5U];
                        }
                        for (short i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) (~(4930636361612275293LL))))));
                            arr_52 [i_1] = ((/* implicit */unsigned short) (short)23204);
                            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-6799)) ? (((/* implicit */int) (short)23198)) : (((/* implicit */int) (unsigned short)65513))));
                            arr_53 [i_1] [20LL] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)536))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned short) min((var_44), (var_9)));
                            arr_57 [i_0] [i_0] [i_1 + 1] [i_9] [i_1] [i_17] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_14)) ? (1176093982U) : (3063594527U)))));
                            var_45 = ((/* implicit */unsigned short) 3118873314U);
                        }
                    }
                    arr_58 [i_0] [i_1] [(unsigned short)23] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3118873313U)) ? (((/* implicit */int) (short)-12590)) : (((/* implicit */int) (short)12633))));
                    var_46 = ((/* implicit */short) ((3487916365860817425LL) / (4932098403509936114LL)));
                    arr_59 [i_0] [i_9] [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 2653913858U)) || (((/* implicit */_Bool) -9223372036854775790LL))))), ((unsigned short)58343))))) | (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51094)))))));
                }
                /* vectorizable */
                for (short i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1)) | (((/* implicit */int) (short)13383)))))));
                    /* LoopSeq 1 */
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        var_48 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3408203071U)) ? (4294967295U) : (801254154U)));
                        var_49 += ((/* implicit */short) ((unsigned short) 4163636721U));
                        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)14451)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12604))) : (3695619858U)));
                        var_51 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2276437316U))));
                        var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)14428))));
                    }
                    var_53 = ((short) 1176093973U);
                    var_54 = ((/* implicit */unsigned int) max((var_54), (((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)24030)))))));
                    arr_66 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned int) 599347437U));
                }
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 24; i_20 += 2) 
                {
                    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        {
                            var_55 = ((/* implicit */short) arr_22 [9U] [i_1] [i_21] [i_1] [i_0] [i_20]);
                            var_56 = ((/* implicit */long long int) arr_72 [i_0] [i_1]);
                            var_57 = ((/* implicit */short) max((((/* implicit */unsigned short) (short)-24058)), ((unsigned short)51094)));
                            arr_73 [i_0] [i_1] [(short)12] = ((/* implicit */unsigned int) (unsigned short)51085);
                        }
                    } 
                } 
            }
        } 
    } 
    var_58 = ((/* implicit */short) var_5);
    var_59 |= ((/* implicit */short) var_12);
}
