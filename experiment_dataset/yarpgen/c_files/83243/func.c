/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83243
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) (short)-18007);
                                arr_14 [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) var_5);
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)18007)), (8646911284551352320ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_6] [i_0] [i_0] [i_0 + 1] = ((unsigned short) (-(((/* implicit */int) arr_2 [i_0 + 1]))));
                                var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1])))))) : (min((arr_3 [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) 572027492))))));
                                arr_22 [i_6] [i_1] [i_1] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) (short)-18007))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_11 [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) 1146244849)) : (((((/* implicit */unsigned long long int) (-(arr_1 [i_2])))) * (max((arr_4 [i_5] [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_2]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_18 = (+(((int) (short)12975)));
                                arr_28 [i_0] [i_1] [i_2] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_24 [i_7 + 2] [i_0 + 1] [i_0 - 1] [i_0] [i_0])))) ? (max((((/* implicit */long long int) (-(arr_23 [i_0] [i_1] [i_0] [i_7])))), (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_9 [i_7]) : (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((arr_3 [i_0] [i_1]) + (9223372036854775807LL))) >> (((12313060850015643520ULL) - (12313060850015643491ULL))))))))));
                                var_19 = ((/* implicit */long long int) var_6);
                            }
                        } 
                    } 
                    arr_29 [i_0 - 1] = ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 4) 
    {
        for (int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) (+(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (arr_32 [i_9]))), (((/* implicit */unsigned long long int) ((var_10) - (var_15))))))));
                arr_35 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 4670852891176053964ULL))) ? (-1515462119) : ((-(max((((/* implicit */int) var_6)), (-532723826)))))));
                /* LoopNest 3 */
                for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        for (signed char i_13 = 1; i_13 < 21; i_13 += 1) 
                        {
                            {
                                arr_43 [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_36 [i_9 + 1] [i_12] [i_13 + 1] [i_13 + 4])))));
                                var_21 ^= ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
