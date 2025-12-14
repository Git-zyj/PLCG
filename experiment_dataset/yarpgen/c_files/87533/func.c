/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87533
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8388607U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
        arr_3 [6LL] = ((/* implicit */int) var_4);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] = var_14;
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */long long int) ((var_13) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_10))));
                    arr_13 [i_3] [i_2] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 4; i_4 < 11; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 3; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_27 [i_7] [i_7] [i_6] [i_5] [i_4 + 1] [i_1] = ((/* implicit */_Bool) var_6);
                                arr_28 [i_1] [i_4] [i_5] [i_1] [i_6] [i_7 + 1] [i_7 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_4)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
                                arr_29 [i_1] [i_4 - 4] [i_5] [i_6] [i_7] = ((/* implicit */long long int) var_8);
                                arr_30 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                                arr_31 [i_1] = var_12;
                            }
                        } 
                    } 
                    arr_32 [i_1] = ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))) ? (var_15) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))));
                }
            } 
        } 
    }
    for (int i_8 = 3; i_8 < 18; i_8 += 4) 
    {
        arr_36 [i_8 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) var_12)))))))) ? (((var_9) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        arr_37 [i_8 + 1] [i_8 + 2] = ((/* implicit */int) var_14);
    }
    var_18 = ((/* implicit */_Bool) var_0);
}
