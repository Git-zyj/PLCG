/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80209
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_4] [i_2])) || (((arr_14 [i_0 + 3] [(unsigned char)3] [i_2]) < (arr_14 [i_0 - 1] [i_1] [i_1])))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((-(arr_3 [i_0 + 1] [i_0 + 3]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (signed char)54))))))))));
                                arr_15 [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-64)) % (((/* implicit */int) arr_2 [i_0]))));
                                arr_16 [i_2] = ((/* implicit */int) arr_1 [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_22 [i_6] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))) / (18446744073709551615ULL)));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_10 [i_6] [i_6] [i_6] [i_5]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 2146959360)), (18446744073709551615ULL)));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 + 2])) <= (var_10)))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_6 [i_0 + 3] [i_0 + 1])))))))));
                                var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0] [1ULL] [i_0 - 1] [i_0 - 1])) << (((((-347437371) + (347437397))) - (13)))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) var_12)) : (18446744073709551594ULL))) : (arr_24 [i_8] [i_7] [i_2] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (2042163918) : (-507245280))) : (((((/* implicit */_Bool) (~(23ULL)))) ? (((/* implicit */int) arr_28 [i_0 + 2])) : (var_10)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_29 [i_0] [i_0] [i_0 + 1] [i_0]))));
                                arr_34 [i_2] [i_2] [i_2] [i_2] [i_0] = 5179140398084337364ULL;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 14; i_12 += 3) 
                        {
                            {
                                arr_40 [i_0] [i_2] [i_1] [i_2] [(unsigned char)3] [i_12] [(unsigned short)6] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_38 [i_0] [i_0] [14ULL] [i_11] [i_12]))))))) ? (((((/* implicit */_Bool) arr_27 [i_0 + 2] [i_12 + 2] [i_12] [i_12] [i_12 - 1] [i_12])) ? (0ULL) : (max((((/* implicit */unsigned long long int) var_0)), (arr_23 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_30 [i_0] [i_1] [i_0] [i_2] [i_11] [i_12])))))))));
                                var_27 = ((/* implicit */unsigned char) arr_5 [i_12]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_13 = 1; i_13 < 22; i_13 += 4) 
    {
        for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 2) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 4; i_17 < 22; i_17 += 1) 
                        {
                            {
                                var_28 ^= ((/* implicit */int) arr_44 [i_13]);
                                var_29 |= ((/* implicit */int) max((arr_42 [i_13 - 1]), (((/* implicit */unsigned long long int) var_17))));
                                arr_52 [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) arr_43 [i_13] [i_13])) : (((((/* implicit */_Bool) arr_43 [i_14] [i_14 + 1])) ? (arr_45 [i_13] [i_14] [i_13]) : (((/* implicit */int) arr_46 [i_13 + 2] [i_14 + 1] [i_14 + 1] [i_16])))))) - ((~(2036169492)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        for (unsigned char i_19 = 1; i_19 < 20; i_19 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-64))));
                                arr_58 [i_13] [(unsigned short)1] [i_13] [i_13] [i_13] [i_13] [i_13] = max((((((/* implicit */_Bool) 9946853375887207402ULL)) ? (((/* implicit */int) (unsigned short)24122)) : (((/* implicit */int) (unsigned char)154)))), (max((var_3), (((/* implicit */int) arr_43 [i_14 + 1] [i_14 + 1])))));
                                arr_59 [(unsigned char)6] [i_14] [i_15] [i_18] [i_14] [i_13] = ((/* implicit */unsigned char) arr_54 [i_13] [i_13] [i_15] [i_13] [i_18] [i_15]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        for (int i_21 = 2; i_21 < 22; i_21 += 1) 
                        {
                            {
                                arr_66 [i_21] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_21] [i_21] [i_21 - 2] [i_21] [i_21 - 2] [i_21])) ? (((/* implicit */int) ((unsigned char) arr_50 [i_21] [i_21 - 2] [i_21 - 2] [i_21] [i_21 - 2]))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)68)), ((unsigned short)44203))))));
                                var_31 = var_1;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_22 = 2; i_22 < 16; i_22 += 2) 
    {
        for (unsigned char i_23 = 2; i_23 < 16; i_23 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_24 = 2; i_24 < 16; i_24 += 4) 
                {
                    for (signed char i_25 = 1; i_25 < 14; i_25 += 2) 
                    {
                        for (unsigned char i_26 = 1; i_26 < 13; i_26 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_22] [i_23] [i_24] [i_25])) || (((/* implicit */_Bool) arr_61 [i_23] [i_24 + 1] [i_25 + 2])))))));
                                var_33 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)33)) ? (var_11) : (5179140398084337364ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_22] [i_23] [i_23] [i_25] [i_24]))) : (min((((/* implicit */unsigned long long int) (signed char)-54)), (var_2)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_27 = 2; i_27 < 14; i_27 += 4) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 17; i_28 += 4) 
                    {
                        {
                            var_34 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) & (var_19)))) ? ((~(((/* implicit */int) arr_30 [i_22] [i_22] [i_22 + 1] [i_22 - 2] [i_22] [i_22])))) : (((/* implicit */int) min(((unsigned char)0), (arr_64 [i_22] [i_22] [i_23] [i_27] [i_27 + 2] [i_28] [(unsigned short)19]))))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) var_13))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_19), (((unsigned long long int) arr_36 [i_22] [i_22] [i_22] [8ULL] [i_22]))))) ? (((((/* implicit */_Bool) arr_46 [i_27 + 1] [i_27 + 2] [i_27] [i_27 + 3])) ? (arr_60 [i_22] [i_23 - 1] [i_27] [i_28]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_22] [i_23] [i_27] [i_28]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_50 [(signed char)11] [i_23] [i_23] [i_27] [i_28])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_22] [i_28])))) + (var_4))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
