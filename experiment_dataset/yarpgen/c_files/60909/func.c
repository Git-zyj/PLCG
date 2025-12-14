/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60909
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) var_6);
                                var_21 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 4]);
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_3 + 2] [i_4]))));
                                var_23 = ((/* implicit */_Bool) max((max((arr_8 [i_0] [i_0] [i_0] [2U]), (((/* implicit */unsigned long long int) max((-1LL), (arr_5 [i_0] [i_1] [i_2] [i_1 + 2])))))), (((/* implicit */unsigned long long int) (signed char)115))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1543522244U))));
                                var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_1] [i_0] [i_1] [i_1 + 3]))));
                                var_26 = ((/* implicit */long long int) (+(min((min((arr_11 [i_0] [i_0] [(unsigned short)9] [i_0] [(_Bool)1] [i_0] [(unsigned short)9]), (3194789875U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 145806035U)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) arr_0 [i_0])))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_2] [i_6] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_27 ^= ((/* implicit */_Bool) 554081420U);
                                var_28 -= ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) ((2751445051U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (var_4)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 4; i_12 < 22; i_12 += 2) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_29 = ((((((/* implicit */_Bool) (-(arr_17 [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)214))) : ((~(2250806869U))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_9 + 1] [i_7])) && (((/* implicit */_Bool) arr_21 [i_9 + 1] [i_7])))))));
                                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) 3794506935U)) ? (((/* implicit */unsigned long long int) (-(arr_11 [i_9] [i_7] [3ULL] [i_9] [i_9 + 1] [i_9] [i_9])))) : (((((/* implicit */_Bool) (unsigned short)67)) ? (13388687938537253812ULL) : (((/* implicit */unsigned long long int) arr_11 [i_7] [i_7] [i_12 - 2] [i_12] [i_12 - 2] [i_9 + 1] [i_12]))))));
                                var_31 = ((/* implicit */int) max((max((arr_24 [(unsigned short)4]), (arr_26 [i_12 - 3] [i_12 - 3]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_7]))))))));
                                var_32 = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        {
                            arr_51 [i_14] = ((/* implicit */unsigned short) max((1543522248U), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_42 [i_14] [i_14]), (((/* implicit */unsigned short) (_Bool)1))))) - (max((((/* implicit */int) (unsigned short)47645)), (1221548043))))))));
                            var_33 = ((/* implicit */_Bool) (+(3131171352U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_18 = 3; i_18 < 19; i_18 += 2) 
                {
                    for (unsigned short i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        {
                            var_34 ^= (unsigned short)19200;
                            var_35 = ((/* implicit */unsigned int) (((+(((arr_30 [i_14] [i_15] [i_18] [i_18]) >> (((((/* implicit */int) arr_25 [i_14] [i_18] [i_15] [i_14])) - (41279))))))) ^ (((/* implicit */long long int) (((_Bool)1) ? (arr_52 [i_18]) : (3740885897U))))));
                            arr_59 [i_14] [15] = ((/* implicit */unsigned char) arr_38 [i_18]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_20 = 1; i_20 < 19; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 1; i_21 < 19; i_21 += 3) 
                    {
                        {
                            arr_65 [i_20] [8] [4ULL] [i_21] [4ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_21 - 1] [i_15] [i_20 - 1] [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2497859698U)))) ? (((((/* implicit */_Bool) arr_11 [i_20 + 1] [i_20] [i_20] [i_20] [i_20 + 1] [i_20] [i_20 - 1])) ? (((/* implicit */unsigned int) arr_50 [i_14] [2] [i_20 + 1] [i_20] [(unsigned short)14])) : (min((2497859684U), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_15] [i_21 + 1]))))))));
                            var_36 = ((/* implicit */unsigned long long int) arr_1 [i_14]);
                            var_37 = (((+(3131171362U))) > (((/* implicit */unsigned int) arr_48 [i_21] [i_21 - 1] [i_21] [i_21 - 1] [i_21])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 17; i_22 += 2) 
                {
                    for (unsigned int i_23 = 0; i_23 < 20; i_23 += 3) 
                    {
                        {
                            var_38 = (-(((((/* implicit */_Bool) 1163795935U)) ? (((/* implicit */int) arr_27 [i_22 - 1])) : (((/* implicit */int) arr_27 [i_22 - 2])))));
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) var_17))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_24 = 0; i_24 < 20; i_24 += 3) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 20; i_25 += 3) 
                    {
                        for (unsigned short i_26 = 0; i_26 < 20; i_26 += 2) 
                        {
                            {
                                var_40 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((-(-1393370026))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_13)))))))));
                                var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) 1100177415U))));
                                var_42 = (((~(arr_48 [i_14] [i_14] [i_14] [i_14] [i_14]))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_14] [i_15] [i_24] [7LL] [i_26])) && (((/* implicit */_Bool) 1163795934U))))));
                                arr_79 [i_14] [i_24] [i_14] [i_26] [i_25] [i_25] = ((/* implicit */signed char) min((max((2757632700U), (((/* implicit */unsigned int) arr_42 [i_25] [i_15])))), (2029860744U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_27 = 0; i_27 < 11; i_27 += 3) 
    {
        for (signed char i_28 = 0; i_28 < 11; i_28 += 3) 
        {
            for (int i_29 = 0; i_29 < 11; i_29 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_30 = 0; i_30 < 11; i_30 += 3) 
                    {
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            {
                                arr_94 [i_27] [i_28] [i_29] [i_30] [i_28] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_89 [i_27] [i_28] [i_29] [(unsigned char)7] [i_31]) | (arr_89 [i_27] [i_27] [i_27] [i_27] [i_27])))) == (((long long int) arr_8 [i_27] [i_28] [i_29] [i_30]))));
                                arr_95 [9] [i_28] [3] = ((/* implicit */_Bool) arr_17 [8]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                    {
                        for (unsigned int i_33 = 0; i_33 < 11; i_33 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned int) 17442931920211980865ULL);
                                var_44 += ((/* implicit */_Bool) 10252332520025888253ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_34 = 0; i_34 < 11; i_34 += 1) 
                    {
                        for (unsigned int i_35 = 0; i_35 < 11; i_35 += 1) 
                        {
                            {
                                arr_106 [5U] [i_28] [i_35] [i_27] [i_35] [i_29] = ((/* implicit */int) 4794126116323565549ULL);
                                var_45 += ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [i_35]))) > (arr_83 [i_28]))))) + (((6815398363420180226ULL) % (((/* implicit */unsigned long long int) var_10))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_36 = 1; i_36 < 8; i_36 += 3) 
                    {
                        for (unsigned int i_37 = 1; i_37 < 7; i_37 += 2) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) arr_85 [i_27] [i_29] [i_37 + 4]))));
                                var_47 = ((/* implicit */int) arr_44 [i_37 + 4] [i_37 + 4] [i_37 + 3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
