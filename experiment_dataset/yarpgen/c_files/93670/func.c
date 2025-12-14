/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93670
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
    var_14 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned char) ((signed char) (signed char)-39))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) -1446557053400167291LL))), (((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (-1446557053400167291LL)))))) && (((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)31)), (1056964608))))));
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_7 [i_3] [i_0 + 2] [i_0])) - (((long long int) arr_2 [i_0]))));
                                arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) max(((unsigned char)101), (((/* implicit */unsigned char) (_Bool)1))))), ((unsigned short)63165)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((((/* implicit */long long int) -1056964598)), (4494803534348288LL)))))) : (5182990701384793734ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_16 = min((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) (~(var_10)))), (min((((/* implicit */unsigned long long int) var_2)), (var_12))))));
                                var_17 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 4494803534348288LL)) ? (((/* implicit */int) ((signed char) var_10))) : (((((/* implicit */int) arr_19 [i_0] [(unsigned char)0] [i_2] [i_5 + 1] [i_6] [i_2] [i_2])) - (((/* implicit */int) var_1)))))));
                                arr_21 [i_0] [i_1 + 1] [i_2] [(short)6] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((int) arr_17 [i_6] [i_0] [i_1] [i_0] [i_6])) == (((/* implicit */int) min((var_13), (((/* implicit */unsigned char) arr_2 [i_0])))))))) - (((/* implicit */int) ((signed char) arr_11 [(short)2] [(unsigned short)0] [i_2] [i_2] [2] [i_6] [i_1])))));
                                arr_22 [i_1] [i_1] [i_1 + 3] [(unsigned short)9] [i_1 - 1] = ((/* implicit */signed char) (((~(max((((/* implicit */unsigned int) arr_0 [i_0])), (var_5))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((((/* implicit */int) arr_6 [i_0])), (arr_7 [4ULL] [4ULL] [i_6]))))))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_1 [5U]), (arr_1 [i_0 - 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 1; i_7 < 9; i_7 += 2) 
                    {
                        var_20 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)37099)), (1056964587)))) : (((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                        arr_25 [(unsigned char)9] [i_1] [9ULL] [(unsigned char)9] [i_0 + 1] = ((/* implicit */unsigned long long int) (signed char)-123);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((signed char) arr_7 [i_1] [i_1 - 1] [9LL]));
                        arr_30 [i_1] [i_0 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (1026052592)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1 + 3] [(unsigned short)9] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 1]))) : (arr_3 [i_0 + 3])));
                        var_22 *= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_1 + 3] [i_1 + 1] [i_0] [i_2] [i_8])) <= (arr_15 [i_0] [i_0]))))));
                        arr_31 [i_0 - 1] [i_1] [i_2] [i_8] [i_1] = ((/* implicit */int) (-(((2265168780322193943ULL) % (var_0)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_39 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_0 + 1] [i_1] [i_2] [i_9] [i_9])) != (((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 2] [7ULL] [i_9] [i_10]))));
                            arr_40 [i_0] [i_1 + 3] [i_0] [i_9] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((14006390667953510739ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_3 [i_0 - 1]) : (((/* implicit */unsigned int) ((int) arr_0 [i_0])))));
                            arr_41 [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (short)-1))));
                        }
                        for (unsigned short i_11 = 4; i_11 < 9; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (((-(((/* implicit */int) var_9)))) % ((~(((/* implicit */int) var_9)))))))));
                            arr_44 [i_0 + 2] [8ULL] [i_2] [i_2] &= ((/* implicit */short) (-(1170197093)));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_12)))))));
                            var_25 = ((/* implicit */signed char) min((var_25), (var_6)));
                        }
                        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned long long int) ((int) (signed char)119));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((_Bool) arr_5 [(short)6] [i_2] [i_2])))));
                        }
                        var_28 = ((/* implicit */long long int) ((unsigned long long int) var_8));
                        var_29 = ((unsigned char) ((unsigned int) 4611686009837453312LL));
                        var_30 = ((/* implicit */unsigned int) (unsigned char)0);
                    }
                    for (short i_13 = 1; i_13 < 8; i_13 += 2) 
                    {
                        var_31 = ((/* implicit */long long int) min((min((((unsigned int) arr_48 [i_0] [i_0] [i_0] [i_13 - 1])), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) min((((/* implicit */int) min((arr_1 [i_0 + 2]), (((/* implicit */signed char) arr_19 [i_0] [i_0] [i_2] [i_0] [i_2] [(signed char)6] [i_2]))))), (1359620106))))));
                        arr_49 [(unsigned short)3] [i_1 - 1] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (((((_Bool)0) && (((/* implicit */_Bool) var_7)))) ? ((~(((/* implicit */int) arr_2 [i_0 + 3])))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)7819)), ((unsigned short)53043))))))) - (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)14)) && (((/* implicit */_Bool) -1359620106))))), (((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        for (short i_15 = 1; i_15 < 9; i_15 += 2) 
        {
            {
                arr_56 [i_15] [i_14] [8] = ((/* implicit */_Bool) min((((/* implicit */long long int) max((min((-2019689678), (1712383818))), ((+(((/* implicit */int) var_1))))))), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-6782669062957909976LL))), (((/* implicit */long long int) arr_0 [i_15 + 1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_59 [i_15] = (~((~(((/* implicit */int) var_1)))));
                    var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_14] [i_15])))))));
                }
                for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    var_33 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_2 [i_14])))), (1008)));
                    var_34 = ((/* implicit */short) -2019689663);
                }
            }
        } 
    } 
}
