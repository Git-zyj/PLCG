/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91895
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) (~(((unsigned int) var_0))));
                                var_21 = ((/* implicit */int) (-((+(min((var_16), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [(short)2] [i_3] [i_4] [i_4] [i_0]))))))));
                                var_22 = ((/* implicit */short) arr_2 [i_0]);
                                var_23 = min((18446744073709551615ULL), (max((((/* implicit */unsigned long long int) (short)9706)), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [4U] [i_2])) ? (((/* implicit */unsigned long long int) 0LL)) : (18446744073709551615ULL))))));
                                var_24 |= ((/* implicit */short) min((4ULL), (8142500874615181422ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_5 = 1; i_5 < 17; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        for (short i_7 = 1; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                                var_25 = ((/* implicit */_Bool) arr_18 [7] [i_5 - 1] [i_5 - 1] [i_7 + 2] [i_7] [i_7]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) min((arr_8 [i_0] [i_1]), (((/* implicit */int) var_12))));
                    var_27 = ((/* implicit */unsigned int) var_15);
                    var_28 = ((/* implicit */int) var_2);
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 18; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_29 &= ((/* implicit */int) arr_0 [i_0] [i_8]);
                        var_30 = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_8] [i_9] [i_9] [i_1]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */short) var_14);
                        var_32 = (+(arr_3 [(unsigned short)15] [7ULL]));
                        var_33 = ((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_8 - 2] [i_0]);
                    }
                    arr_32 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? ((~(((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) (short)31820))));
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_19 [i_0] [i_8]))));
                }
                for (unsigned long long int i_11 = 3; i_11 < 18; i_11 += 3) 
                {
                    arr_36 [i_0] = ((/* implicit */signed char) min((min((422065109473705469ULL), (max((18446744073709551607ULL), (((/* implicit */unsigned long long int) (signed char)119)))))), (1799101814713721460ULL)));
                    var_35 = var_2;
                }
                for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    var_36 = ((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_0]);
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((int) ((arr_8 [i_0] [15U]) >= (arr_8 [i_0] [i_1])))))));
                    arr_40 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) var_19);
                    arr_41 [i_0] [i_0] [i_0] [i_12] = ((/* implicit */unsigned int) arr_12 [i_0]);
                }
                arr_42 [i_0] [i_0] [i_0] = ((/* implicit */int) 2364703619U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 1; i_13 < 11; i_13 += 1) 
    {
        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            {
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */long long int) -603646079)) : (5843312302352586761LL)));
                var_39 &= ((/* implicit */int) max(((+(((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20390))) : (1799101814713721465ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)102)))))));
            }
        } 
    } 
}
