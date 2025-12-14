/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58742
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 6; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_2] [i_2])) | (((/* implicit */int) (unsigned short)52842))));
                        arr_11 [i_0] [i_1] = arr_0 [i_0] [i_0];
                        var_19 = ((/* implicit */unsigned short) ((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))));
                    }
                } 
            } 
            arr_12 [i_0] [i_1] = (-(((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_15))))));
            arr_13 [i_1 - 1] |= ((/* implicit */long long int) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 1; i_4 < 7; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_5 = 4; i_5 < 8; i_5 += 3) 
                {
                    arr_20 [i_5] [i_1 + 1] [i_4 + 2] = ((/* implicit */unsigned short) arr_5 [(unsigned short)1] [(unsigned short)1] [(unsigned short)1]);
                    arr_21 [i_0] [i_0] [i_5] [i_1 - 3] [i_4] [7ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27235)) >> (((arr_5 [i_0] [(short)0] [i_4 - 1]) - (1836751756)))))) ? (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (3271644871U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [8] [1LL])))));
                }
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (short)24878)) >> (((((/* implicit */int) (short)3424)) - (3397)))))))));
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2940644062U)))))));
            }
        }
        arr_23 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((unsigned short) arr_14 [0ULL] [i_0] [i_0])))));
    }
    for (unsigned short i_6 = 2; i_6 < 17; i_6 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_25 [i_6])))))), (var_13)));
        /* LoopNest 2 */
        for (unsigned short i_7 = 2; i_7 < 15; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                {
                    arr_33 [i_7] [i_7 + 3] [i_7] [i_7] = ((/* implicit */unsigned short) (-(min((arr_26 [6]), (((/* implicit */long long int) arr_32 [i_6 + 1] [i_7] [i_6 - 2]))))));
                    arr_34 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (unsigned char)7);
                }
            } 
        } 
        var_22 = ((/* implicit */short) arr_26 [i_6]);
    }
    var_23 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) (unsigned short)0)), ((+((-9223372036854775807LL - 1LL))))))));
    var_24 = ((/* implicit */unsigned int) var_10);
}
