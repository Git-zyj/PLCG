/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93652
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
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] [i_1] = ((/* implicit */_Bool) ((unsigned char) (-(min((var_5), (((/* implicit */long long int) arr_3 [i_0] [i_1])))))));
                            arr_13 [i_1] [i_1] [i_3 - 4] = ((/* implicit */_Bool) arr_9 [i_1]);
                            arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [12]))) ^ (1768491752071574279LL))), (min((var_14), (arr_1 [i_0] [i_1]))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_9 [i_1])))))));
                            arr_15 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_2 [i_0 + 1])))), (((/* implicit */int) max((arr_10 [i_1] [i_1] [i_2] [i_3 - 2]), (arr_10 [i_1] [i_1] [i_2] [i_3 - 2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 22; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((signed char) ((long long int) var_9))))));
                            var_16 |= ((((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_4] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_0 [i_4 + 2] [i_0 + 1]))) & (min((((/* implicit */long long int) arr_16 [i_0] [i_1] [(unsigned short)0])), (((((arr_18 [i_5] [i_1] [i_1] [i_0] [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) var_11)) - (4))))))));
                            var_17 = ((/* implicit */short) max(((+(((/* implicit */int) min((var_6), (((/* implicit */short) var_0))))))), (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_6 = 2; i_6 < 23; i_6 += 1) 
                {
                    for (signed char i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_18 ^= max((((/* implicit */unsigned long long int) max((max((arr_0 [i_0] [i_1]), (((/* implicit */long long int) arr_3 [i_0 - 2] [i_0 - 2])))), (var_14)))), (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) - (arr_19 [i_0] [i_0] [i_0]))))));
                                var_19 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_7 + 1] [i_1]);
                                var_20 = ((/* implicit */int) (-(var_13)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        {
                            arr_36 [i_0] [i_1] [i_9] [i_1] = (!(((/* implicit */_Bool) ((signed char) arr_2 [i_0 - 1]))));
                            arr_37 [4LL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */int) arr_20 [i_1] [i_0] [i_1])), (var_2))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_11 = 1; i_11 < 22; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        for (long long int i_13 = 1; i_13 < 22; i_13 += 3) 
                        {
                            {
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_0 + 1] [i_0 - 2] [i_1] [i_11] [i_11] [i_11]))))) : (var_14)))) ? (arr_18 [(short)2] [i_1] [20] [i_12] [20]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_1])))));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_34 [i_0] [i_0 - 2]), (((/* implicit */long long int) arr_20 [i_12] [i_12] [i_12]))))), ((+(min((((/* implicit */unsigned long long int) var_0)), (var_4))))))))));
                                var_23 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-((-(var_13)))))) >= (((((/* implicit */_Bool) ((long long int) 1768491752071574279LL))) ? (((((/* implicit */unsigned long long int) var_1)) & (13797414415023409867ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 2; i_14 < 18; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        for (signed char i_18 = 2; i_18 < 20; i_18 += 3) 
                        {
                            {
                                arr_58 [i_14] [i_15] [i_16] [i_14] [i_17] [i_14] [i_18 - 1] = ((long long int) max((arr_35 [i_14 + 3] [i_14]), (arr_35 [i_14 + 2] [i_14])));
                                arr_59 [i_14] [i_15] [i_16] [i_17] [i_14] = ((/* implicit */unsigned long long int) (!(var_3)));
                                var_24 -= ((((/* implicit */_Bool) ((((var_4) ^ (((/* implicit */unsigned long long int) 1768491752071574293LL)))) ^ (((/* implicit */unsigned long long int) var_13))))) ? (((long long int) arr_54 [i_14 + 3] [i_18 + 1] [i_18] [i_18 - 1] [2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (var_8)))) ? (((arr_21 [i_17] [i_16]) | (var_5))) : (min((((/* implicit */long long int) arr_35 [i_16] [(unsigned short)6])), (var_8))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_19 = 0; i_19 < 21; i_19 += 3) 
                {
                    for (long long int i_20 = 0; i_20 < 21; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((arr_34 [i_14 - 1] [i_14]), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [(signed char)4]))))))))));
                                var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_55 [i_14] [i_15] [i_14 + 1] [i_20] [i_14])) ? (((/* implicit */int) ((signed char) arr_10 [i_14] [i_15] [i_19] [i_20]))) : (((/* implicit */int) var_7)))), (((((/* implicit */int) arr_5 [i_14 - 2] [i_14 + 2])) << (((var_4) - (15382364068054007262ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_22 = 2; i_22 < 21; i_22 += 3) 
    {
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (long long int i_24 = 1; i_24 < 22; i_24 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_25 = 2; i_25 < 20; i_25 += 1) 
                    {
                        for (unsigned short i_26 = 0; i_26 < 23; i_26 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_10 [i_22] [i_25 + 3] [i_25] [i_25]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_22] [i_25 + 3] [i_25 - 2] [i_25 - 1])) ? (((/* implicit */int) arr_10 [i_22] [i_25 - 1] [i_25 - 2] [i_25 - 1])) : (var_2)))) : (var_4)));
                                var_28 = ((/* implicit */unsigned char) var_12);
                                var_29 = arr_38 [i_22];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_27 = 0; i_27 < 23; i_27 += 3) 
                    {
                        for (long long int i_28 = 1; i_28 < 22; i_28 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((var_13), (-4234074397503036912LL)))), (min((arr_42 [i_22] [i_22] [16] [8ULL] [16] [i_22 - 1] [i_28 + 1]), (((/* implicit */unsigned long long int) arr_21 [i_23] [i_27])))))))));
                                var_31 = ((/* implicit */unsigned char) ((-1768491752071574279LL) != (((/* implicit */long long int) ((/* implicit */int) ((max((9409252339247091686ULL), (((/* implicit */unsigned long long int) arr_4 [i_22])))) == (((/* implicit */unsigned long long int) (+(-3882571223763612231LL))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
