/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60224
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
    var_18 = ((/* implicit */short) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) (~(((unsigned long long int) arr_1 [i_1]))));
        var_20 += ((/* implicit */long long int) ((unsigned short) (~(var_3))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_9 [i_1])))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) max((var_4), (arr_0 [i_1])))) : (((/* implicit */int) arr_4 [i_2])))) : (((/* implicit */int) (!((_Bool)0))))));
            arr_10 [i_1] [i_2] [11U] = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) max((((/* implicit */short) arr_2 [i_2])), (arr_0 [i_1])))), (max((var_0), (((/* implicit */unsigned int) arr_4 [i_2])))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_1))) >> (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_8)))))))));
            /* LoopSeq 4 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (max((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_2] [(_Bool)1] [i_3])) : (((/* implicit */int) arr_6 [i_1]))));
                arr_14 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]);
                var_23 = ((/* implicit */long long int) max((((((/* implicit */int) arr_12 [(short)0] [i_3] [i_3])) >> (((((/* implicit */int) arr_12 [i_3] [i_3] [i_3])) - (109))))), (((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) arr_4 [i_2])), (arr_8 [i_1] [24LL])))))));
            }
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                arr_17 [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((arr_16 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4]) ? (((((/* implicit */_Bool) var_8)) ? (arr_9 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(unsigned short)1] [i_2] [i_2] [i_4])) || (((/* implicit */_Bool) var_0))))))));
                arr_18 [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_4] [(unsigned char)15])) ? (var_14) : (((/* implicit */unsigned long long int) ((int) var_13)))));
                arr_19 [i_1] = ((/* implicit */unsigned short) var_17);
            }
            for (signed char i_5 = 1; i_5 < 24; i_5 += 2) 
            {
                arr_22 [15LL] [i_2] [15LL] [i_1] = ((/* implicit */unsigned short) var_5);
                var_24 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_6 [i_1]), (((/* implicit */unsigned char) ((arr_16 [i_1] [i_1] [i_2] [1U]) || (((/* implicit */_Bool) var_17))))))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_2] [5LL] [i_6 + 2]))));
                            arr_29 [i_1] [23] [i_2] [i_6] [10LL] = ((unsigned char) (~(arr_15 [i_6 + 1] [i_5 + 1] [i_5 + 1])));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((18446744073709551615ULL) * (0ULL))))));
                        }
                    } 
                } 
                arr_30 [i_1] = ((/* implicit */_Bool) ((int) arr_16 [i_1] [i_1] [i_1] [i_5]));
            }
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                var_27 *= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_1 [16LL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_8] [i_2] [i_1] [i_1])) & (((/* implicit */int) var_16))))) : ((~(arr_21 [(unsigned short)2] [i_2] [(signed char)20]))))));
                var_28 = ((/* implicit */unsigned long long int) var_8);
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_25 [i_1] [i_1] [i_1] [i_2] [i_8] [i_1])))))) ? ((((~(var_9))) & (((/* implicit */int) ((unsigned short) arr_2 [i_8]))))) : (((/* implicit */int) ((unsigned short) (~(var_12)))))));
            }
        }
        arr_34 [i_1] = ((/* implicit */unsigned long long int) var_7);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            /* LoopSeq 4 */
            for (int i_10 = 3; i_10 < 23; i_10 += 1) 
            {
                arr_42 [i_1] [i_10 + 2] [(_Bool)1] [i_9 + 1] = var_2;
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_9] [(short)16] [i_9])) ? (arr_21 [i_9] [i_9 + 1] [(unsigned char)18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_9] [i_9 + 1] [i_9] [20U]))))))));
            }
            for (unsigned long long int i_11 = 3; i_11 < 24; i_11 += 1) 
            {
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_9 + 1])) - (((/* implicit */int) arr_36 [i_9 + 1]))));
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((unsigned long long int) (short)-7938)))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        {
                            var_33 = (i_1 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_1] [i_11 - 3])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_39 [(short)9] [i_9 + 1] [(short)9] [i_1])) + (2147483647))) << (((((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) - (94)))))) : (arr_37 [i_9] [i_11] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_1] [i_11 - 3])) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_39 [(short)9] [i_9 + 1] [(short)9] [i_1])) - (2147483647))) + (2147483647))) << (((((((((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) - (94))) + (184))) - (5)))))) : (arr_37 [i_9] [i_11] [i_1]))));
                            arr_51 [i_1] [i_1] [1U] [i_1] [i_1] [1U] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) arr_23 [i_9 + 1] [i_9 + 1] [i_11 + 1] [i_1])) - (arr_25 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_1])));
                        }
                    } 
                } 
                var_34 = arr_23 [i_1] [i_1] [i_1] [i_1];
            }
            for (signed char i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                arr_54 [i_1] = ((/* implicit */unsigned int) var_3);
                arr_55 [i_14] [i_1] [17LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_9 + 1])) ? (((/* implicit */int) arr_2 [i_9 + 1])) : (((/* implicit */int) arr_2 [i_9 + 1]))));
                arr_56 [i_14] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((~(var_14))) - (((arr_5 [i_1]) ? (((/* implicit */unsigned long long int) var_9)) : (arr_49 [i_1] [i_9] [i_1] [i_1] [i_1] [i_14] [i_9])))));
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_1] [i_9 + 1])) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) arr_35 [i_1] [i_1]))));
                var_36 = ((/* implicit */short) (~(((/* implicit */int) arr_41 [i_1] [i_9 + 1]))));
            }
            for (unsigned char i_15 = 2; i_15 < 23; i_15 += 4) 
            {
                var_37 = ((/* implicit */unsigned long long int) ((arr_32 [i_15 + 1] [i_15 - 1] [i_9 + 1]) & (arr_32 [i_15 - 1] [i_15 + 2] [i_9 + 1])));
                var_38 = ((/* implicit */long long int) arr_23 [i_1] [i_9] [i_9] [i_1]);
                var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_53 [i_1] [i_9 + 1] [i_1] [i_9]))));
            }
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))));
        }
    }
    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */short) var_6);
        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) ((int) arr_5 [(unsigned char)18])))))))));
        /* LoopNest 3 */
        for (signed char i_17 = 0; i_17 < 25; i_17 += 1) 
        {
            for (unsigned char i_18 = 1; i_18 < 23; i_18 += 3) 
            {
                for (short i_19 = 0; i_19 < 25; i_19 += 1) 
                {
                    {
                        var_43 = ((/* implicit */unsigned short) (~(var_6)));
                        var_44 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_19]))) - (max((var_0), (var_0))))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_13))))))));
                    }
                } 
            } 
        } 
    }
    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (+(((/* implicit */int) var_13)))))) + (((/* implicit */int) var_15))));
    var_46 = ((/* implicit */signed char) var_7);
}
