/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66074
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
    var_10 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_6 [i_0 - 1] = ((/* implicit */_Bool) var_8);
            arr_7 [17ULL] [17ULL] [17ULL] = var_3;
        }
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2] = ((unsigned long long int) ((unsigned int) var_7));
                arr_16 [i_0] [i_2] [1LL] [(signed char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-13009)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))) : (1163442993201653710LL)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_0 - 2])) ? (((/* implicit */int) var_4)) : (arr_13 [i_5 - 1] [i_0 - 2])));
                            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_23 [i_0] [i_0] [0U] [0U] [i_5] [i_2]) : (((/* implicit */unsigned long long int) -4721048617655655730LL)))))));
                            arr_24 [i_0] [i_5] [i_5] [(unsigned char)6] [i_5] [i_5] = ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
                var_13 |= ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
            }
            var_14 = ((/* implicit */long long int) ((unsigned char) var_2));
        }
        arr_25 [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_0 - 2]))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_15 ^= ((/* implicit */long long int) var_1);
        arr_30 [(unsigned short)11] [i_6] = (-(arr_9 [i_6]));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_6] [i_6])) : (((/* implicit */int) var_1))))) <= (((arr_8 [i_6] [i_6]) | (((/* implicit */unsigned long long int) var_5))))));
        arr_31 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_23 [i_6] [2] [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */int) arr_2 [i_6] [i_6])) : (((/* implicit */int) var_0))));
        arr_32 [i_6] = ((/* implicit */unsigned long long int) arr_4 [i_6] [i_6]);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_26 [i_7]), (arr_26 [i_7]))))));
        arr_37 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((var_2) - (16239905731473277164ULL)))))) ? (arr_36 [i_7] [(unsigned char)13]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2))))))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 4; i_8 < 15; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    arr_42 [i_7] [(short)7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_11 [i_8 + 1]) : (arr_11 [i_8 - 1])))) ? (arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (var_2)));
                    arr_43 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_8 + 1] [i_8 - 2])) <= (((/* implicit */int) ((short) var_0)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_3)), (((var_2) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [(signed char)10] [6ULL] [(signed char)10] [i_10]))))))))))));
            arr_48 [i_7] = ((/* implicit */short) arr_34 [i_10]);
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 4) 
        {
            var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_50 [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))) > (((/* implicit */int) var_0))));
            /* LoopSeq 3 */
            for (unsigned short i_12 = 1; i_12 < 13; i_12 += 4) 
            {
                var_20 ^= ((/* implicit */short) (-(var_6)));
                var_21 = ((/* implicit */long long int) arr_49 [11ULL] [i_7]);
            }
            for (short i_13 = 1; i_13 < 13; i_13 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_22 += ((var_6) != (((/* implicit */int) arr_22 [i_7])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 4) 
                    {
                        arr_64 [i_7] [(short)11] [i_7] [i_7] [i_7] = arr_19 [i_7] [i_11] [i_7] [i_15 + 3];
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)125))) + (-4721048617655655751LL)));
                    }
                    arr_65 [i_11] [i_7] = ((/* implicit */signed char) var_2);
                }
                for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        arr_73 [i_17] [i_17] [(_Bool)1] [i_16] [i_17] [10LL] [i_17] |= ((/* implicit */unsigned long long int) var_5);
                        var_24 = ((/* implicit */int) var_1);
                        var_25 = ((((/* implicit */_Bool) arr_17 [i_11 - 1] [i_13 + 3] [i_13 + 2] [i_13 + 3] [i_11 - 1] [i_16])) ? (arr_67 [i_7] [i_7] [i_7] [i_13 + 3] [i_13 + 3]) : (arr_17 [i_11] [i_11] [i_11 - 1] [i_13 + 3] [i_16] [i_16]));
                        var_26 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
                    }
                    arr_74 [7LL] [7LL] [i_7] [i_16] [i_11 - 1] [i_7] = ((/* implicit */unsigned char) ((signed char) var_7));
                    var_27 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_47 [(signed char)4] [(signed char)4]))));
                }
                var_28 = ((/* implicit */int) ((unsigned char) var_6));
                var_29 += ((/* implicit */short) var_6);
            }
            for (short i_18 = 1; i_18 < 13; i_18 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */signed char) ((long long int) arr_27 [i_18 + 2]));
                var_31 = ((/* implicit */unsigned char) var_7);
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_51 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5)));
            }
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)125)) && (((/* implicit */_Bool) (unsigned short)65512))));
            var_34 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
        }
    }
    var_35 = ((/* implicit */short) var_4);
}
