/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89662
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
    var_11 = ((/* implicit */unsigned long long int) 4005460364324794942LL);
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_1))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_13 = ((/* implicit */int) (((!(((/* implicit */_Bool) 0ULL)))) ? ((+(arr_4 [i_0 + 1] [i_1] [i_0 + 1]))) : (((/* implicit */long long int) ((unsigned int) 10ULL)))));
            var_14 = ((/* implicit */unsigned long long int) ((4ULL) != (18446744073709551615ULL)));
            var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_0 + 2]);
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) arr_1 [i_0])))))) == (((var_6) / (var_6)))))) : (((/* implicit */int) var_0))));
            var_16 *= var_2;
        }
    }
    for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_8))));
            arr_12 [i_2] = (!(arr_0 [i_2] [i_2 + 2]));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) 0ULL);
            var_20 *= 2480221700U;
            var_21 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((((arr_6 [(signed char)4]) + (9223372036854775807LL))) << (((var_10) - (3988366254U))))), (((/* implicit */long long int) var_5))))), (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_16 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_9))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((unsigned int) arr_10 [i_2]));
            arr_20 [i_2 + 2] [i_2] = ((/* implicit */unsigned char) ((var_9) << (((arr_4 [i_2 + 1] [i_5] [i_5]) - (690580518320817987LL)))));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 2] [8U]))) == (var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1] [i_5]))) : (0ULL)))));
            arr_21 [i_2] [i_5] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
        }
        var_24 = ((/* implicit */signed char) var_7);
    }
    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) min((1ULL), (((/* implicit */unsigned long long int) (unsigned char)247))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            var_26 = ((/* implicit */int) max((var_26), (var_1)));
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_6 [(unsigned char)6]))));
                arr_31 [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) var_0);
            }
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 4; i_10 < 11; i_10 += 3) 
                {
                    for (unsigned int i_11 = 3; i_11 < 11; i_11 += 3) 
                    {
                        {
                            arr_40 [i_6] [i_6] [i_10] [i_10] [i_11 - 2] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)57368)) : (((/* implicit */int) arr_10 [i_6]))));
                            arr_41 [(_Bool)1] [i_9] [2LL] [i_6] [i_11] [i_6] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_6))));
                            var_28 -= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_29 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-19))));
                            arr_42 [8] [i_7] [i_7] [i_7] [i_6] [i_7] [i_7] = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (+(arr_18 [i_6 - 1] [i_6 - 1]))))));
                arr_43 [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(2198339102U))))));
            }
            for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    for (int i_14 = 1; i_14 < 11; i_14 += 1) 
                    {
                        {
                            arr_52 [2] [i_12] &= ((/* implicit */long long int) arr_29 [6] [(short)4] [i_12]);
                            var_31 = ((/* implicit */unsigned short) ((short) var_3));
                            arr_53 [i_6] [i_7] = ((/* implicit */long long int) ((arr_49 [i_6] [i_6 - 1] [i_6 + 1]) + (arr_49 [i_6] [i_6 - 1] [i_6 + 1])));
                            var_32 = ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
                arr_54 [i_6] [i_6] [i_6] [(unsigned short)2] = ((/* implicit */signed char) ((short) (_Bool)1));
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32104)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)70))));
                /* LoopSeq 1 */
                for (unsigned int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    arr_57 [i_7] [i_6] [i_7] [i_7] = ((/* implicit */signed char) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5))))));
                    arr_58 [i_6] [i_12] [i_6] [i_7] [i_6] = ((((/* implicit */int) arr_48 [i_6] [i_6] [i_6] [i_6 + 2])) != (2147483647));
                    arr_59 [i_6 + 1] [2U] [2U] [i_15] &= ((/* implicit */int) ((arr_24 [2] [2]) * (((/* implicit */unsigned long long int) arr_32 [(signed char)12] [i_6 + 1] [(signed char)12]))));
                }
            }
        }
        var_34 += ((/* implicit */unsigned int) ((unsigned short) (-2147483647 - 1)));
    }
    for (unsigned short i_16 = 1; i_16 < 11; i_16 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 2) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    var_35 += ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_16]))));
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (+(((((/* implicit */int) var_2)) + (((/* implicit */int) (short)32103)))))))));
                }
            } 
        } 
        var_37 &= ((/* implicit */unsigned int) 18446744073709551607ULL);
        var_38 = ((/* implicit */_Bool) arr_29 [i_16 - 1] [12] [i_16]);
    }
}
