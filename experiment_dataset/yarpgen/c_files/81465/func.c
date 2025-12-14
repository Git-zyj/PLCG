/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81465
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_11 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (min((((/* implicit */unsigned long long int) arr_12 [i_4] [16ULL] [i_2] [i_3 + 1] [i_2])), (((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (arr_11 [(_Bool)1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))))));
                                arr_14 [(unsigned char)16] [i_1] [i_2] [(unsigned char)1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((max(((unsigned short)44156), (((/* implicit */unsigned short) var_6)))), (((unsigned short) arr_11 [i_0] [i_4]))))) || (((/* implicit */_Bool) ((arr_9 [i_4] [i_4] [8LL] [i_3 + 1] [i_3 + 1] [i_3]) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [(signed char)9]))) / (arr_4 [i_2] [i_0])))))))));
                                var_12 |= ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))), (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) + (-7301666643682521249LL))), (((/* implicit */long long int) var_7))))));
                                var_14 = ((/* implicit */unsigned char) (-(((((/* implicit */int) max(((short)12844), (((/* implicit */short) var_4))))) & (((/* implicit */int) arr_16 [i_0] [i_1] [(unsigned char)6] [13ULL] [(unsigned char)18]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */int) var_6)) & (arr_3 [i_7])));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [(unsigned char)16]) >= (((/* implicit */long long int) ((/* implicit */int) var_3))))))) & (((((arr_4 [i_0] [(_Bool)1]) + (9223372036854775807LL))) << (((2020576776U) - (2020576776U))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((!(var_4)))))) | (((/* implicit */int) ((signed char) arr_29 [i_10] [(_Bool)1] [i_10 + 2] [i_10] [i_10 - 1])))));
                                arr_32 [i_1] [i_1] [i_2] [i_9] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) var_9)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)1))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2]))) * (arr_29 [i_0] [i_0] [(unsigned char)11] [4ULL] [(short)3])))))));
                                var_18 = ((/* implicit */long long int) max((((((/* implicit */int) arr_28 [i_9] [i_10] [i_10] [i_10] [i_10 - 1] [i_10])) >= (((/* implicit */int) arr_28 [2ULL] [i_10] [i_10] [9ULL] [i_10 - 1] [6ULL])))), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32034))) & (3982641328U))))))));
                                arr_33 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [2LL] [i_0] = ((((/* implicit */int) ((arr_31 [i_10 + 2] [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 2]) >= (((/* implicit */unsigned long long int) -7301666643682521249LL))))) & (((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        for (int i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    for (unsigned short i_14 = 3; i_14 < 20; i_14 += 1) 
                    {
                        {
                            arr_47 [10] [4LL] = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) arr_41 [16] [i_14 - 3])), (arr_13 [i_14] [i_14] [i_14 - 2] [i_14 - 3] [(unsigned char)10])))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_14 - 2] [i_13] [i_14] [i_13] [i_14 + 1])) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_5 [i_14 - 2] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_14 - 2] [i_13] [i_14] [i_14] [i_14 + 1]))) : (arr_27 [i_14 - 2] [(unsigned char)18] [i_14] [i_14] [i_14 + 1] [i_13] [i_14 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_14 - 2] [i_13] [i_13] [(signed char)6] [i_14 + 1]), (arr_16 [i_14 - 2] [i_13] [6U] [(unsigned short)14] [i_14 + 1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        {
                            var_20 = arr_26 [i_11] [i_12] [i_11] [i_16];
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min(((~((~(((/* implicit */int) (short)-29073)))))), (((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_35 [(unsigned char)11])))))))));
                            arr_53 [i_11] [i_11] [(_Bool)0] [i_15] [i_15] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_12 [i_11] [18ULL] [18ULL] [18ULL] [(unsigned char)4])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_41 [i_16] [i_15])) : (((/* implicit */int) var_1))))))) : ((~(((arr_9 [i_16] [i_16] [i_15] [i_16] [i_12] [i_15]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_11] [i_12] [(short)15] [3LL] [i_11])))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    for (unsigned char i_18 = 1; i_18 < 19; i_18 += 1) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned short) ((var_7) != (((/* implicit */int) arr_8 [i_11] [(unsigned char)8] [i_17] [i_17] [i_19]))))), (min((arr_60 [i_18] [8ULL] [8ULL] [10U] [i_11] [i_11] [i_19]), (((/* implicit */unsigned short) arr_57 [i_11] [i_11] [i_18] [i_19]))))))))))));
                                arr_63 [i_12] [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)115)) && (((/* implicit */_Bool) (signed char)102))))), ((short)29073))))) ^ (min((((/* implicit */unsigned long long int) arr_50 [i_19] [i_18] [i_12] [i_11])), (((arr_13 [4U] [i_18] [4U] [i_12] [(_Bool)1]) * (((/* implicit */unsigned long long int) arr_55 [i_12] [i_12] [i_18]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (short i_21 = 1; i_21 < 20; i_21 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */int) max((((long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_7 [i_11] [i_11] [i_11] [i_12] [i_20] [i_21])) - (7795)))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            arr_71 [i_20] = ((/* implicit */_Bool) ((arr_13 [i_21] [i_21] [(signed char)19] [i_12] [i_11]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_21] [(short)11] [i_20] [15ULL] [i_12] [i_12] [i_11]))) - (3998848936691418810LL))))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) max((((arr_21 [i_11] [(short)6] [i_11]) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)2]))) : (arr_10 [(unsigned short)11] [i_12] [(short)20]))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-29053)) + (2147483647))) >> (((arr_29 [i_11] [i_11] [i_11] [i_12] [i_12]) - (14915450973499920447ULL)))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_12] [i_12] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10)))))))));
            }
        } 
    } 
}
