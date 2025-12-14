/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81127
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
    var_15 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((long long int) (~(arr_1 [i_0] [i_1]))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_6 [i_1] [i_2] [i_3] [i_3]))));
                                var_18 += ((/* implicit */signed char) arr_4 [i_1] [i_1]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_2))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(arr_2 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) 0U)))))))))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_4 [i_0] [(_Bool)1]))))));
                    }
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_23 &= ((/* implicit */signed char) arr_1 [i_0] [i_5]);
                        var_24 = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) ((short) arr_11 [i_1] [i_5]))))));
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 3; i_8 < 13; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned int) (+(var_14)));
                                var_26 ^= ((/* implicit */int) arr_20 [i_8 - 3] [8U] [i_8 - 3] [4LL] [i_8 - 3] [i_8 - 2] [i_5]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_27 += var_4;
                        arr_24 [i_0] [(unsigned char)8] = ((/* implicit */signed char) ((unsigned char) var_4));
                    }
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            var_28 += ((/* implicit */short) var_1);
                            var_29 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_5] [i_5] [i_5]);
                        }
                        var_30 &= ((/* implicit */unsigned int) var_0);
                    }
                }
                /* LoopNest 3 */
                for (signed char i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    for (long long int i_14 = 1; i_14 < 10; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 3; i_15 < 12; i_15 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)6]))));
                                var_32 *= ((/* implicit */unsigned char) arr_21 [i_14 + 1] [i_15 + 1] [i_13] [i_14]);
                                var_33 |= ((/* implicit */signed char) ((unsigned int) arr_8 [i_15] [i_15 + 1] [i_15 + 2] [i_15 + 2] [i_14 - 1]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
