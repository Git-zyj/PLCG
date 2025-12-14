/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96792
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_2])))))), ((((!(((/* implicit */_Bool) 622079844U)))) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [11LL] [11LL])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (_Bool)0);
                            arr_12 [i_0] [i_1] [(signed char)3] [3ULL] = (+(arr_6 [i_0] [i_1] [i_3] [i_3]));
                        }
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((long long int) 622079863U));
                            var_19 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) arr_10 [i_1])), (330023931740891429ULL)))));
                        }
                        arr_15 [i_0] [i_1] [8] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2318510560462090494ULL)) ? (((/* implicit */int) arr_13 [i_0] [(unsigned short)8] [i_2] [(unsigned short)8] [i_2])) : (((/* implicit */int) arr_10 [i_3]))));
                    }
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) min(((_Bool)1), (arr_0 [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    for (int i_6 = 2; i_6 < 12; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_11 [i_0] [(_Bool)1] [i_2] [(_Bool)1] [i_6]))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) var_13);
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_16 [i_6 + 1] [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2])), (622079844U)))) ? (((((/* implicit */_Bool) var_8)) ? (arr_9 [i_1] [i_6 - 2] [i_6] [i_6] [i_6 + 1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                            var_24 ^= ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned char) ((_Bool) arr_18 [(short)9] [12LL] [(unsigned short)5] [12LL] [(unsigned short)5] [i_6 + 1] [i_6]))), (var_11))));
                            var_25 = min((((/* implicit */unsigned long long int) ((int) var_5))), (var_10));
                        }
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            arr_23 [i_6 - 2] [i_1] [3] [i_6] [i_6] = ((/* implicit */unsigned short) var_14);
                            var_26 ^= ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_6))));
                            var_27 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (622079844U)))))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0))))) : (min((var_10), (var_12)))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6] [5] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), (var_6))))) : (min((arr_14 [i_9]), (((/* implicit */unsigned long long int) 3672887452U)))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_7 [i_0] [3LL] [i_2] [i_2])) : (arr_6 [i_9] [i_1] [i_1] [i_0]))))))));
                            var_30 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_8 [i_1] [5LL] [i_1] [i_2] [i_2] [i_2])), (var_0)));
                            var_31 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 8489080785003166086ULL)) ? (((/* implicit */long long int) 31U)) : (arr_4 [i_1])))) ? (((/* implicit */int) arr_13 [4LL] [3LL] [i_2] [i_1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32256))))))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_2 [i_6] [i_6 - 2] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3672887452U)));
                        }
                        var_33 = ((/* implicit */long long int) 32760U);
                    }
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        arr_31 [i_0] [i_0] [7ULL] [i_0] [i_0] = ((/* implicit */int) (-((-(arr_26 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                        var_34 = ((/* implicit */long long int) (_Bool)1);
                    }
                }
            } 
        } 
        var_35 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? ((~(4103499535616533297LL))) : (((/* implicit */long long int) (~(4294967295U)))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
        var_36 = ((/* implicit */long long int) var_4);
    }
    var_37 = ((/* implicit */int) (-(min((min((((/* implicit */unsigned int) var_4)), (32772U))), (((/* implicit */unsigned int) (_Bool)1))))));
}
