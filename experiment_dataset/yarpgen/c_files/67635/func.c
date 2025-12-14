/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67635
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                arr_7 [i_0] [(short)7] = ((/* implicit */unsigned short) var_7);
                arr_8 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (var_2) : (((((/* implicit */_Bool) 2924898699U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)131)) > (arr_4 [i_0]))))));
                arr_9 [i_0] [i_0] = ((/* implicit */int) var_8);
                var_10 = ((/* implicit */unsigned char) max((-9041124554362937123LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_0]), (((/* implicit */short) (unsigned char)131))))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) var_7)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    var_11 += ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((-9041124554362937123LL) + (9223372036854775807LL))) << (((2924898699U) - (2924898699U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 - 1] [2]))) : (((((/* implicit */_Bool) arr_14 [i_2] [16LL])) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [4] [i_3] [(unsigned char)6]))))))) > (min((((unsigned long long int) var_5)), (2ULL)))));
                    var_12 = ((/* implicit */unsigned int) arr_10 [i_4] [i_2]);
                    var_13 += ((((((/* implicit */_Bool) (short)32749)) ? (arr_18 [i_4] [i_3] [i_3] [i_2]) : (arr_18 [i_2] [i_3] [(unsigned char)3] [i_4]))) & (((((/* implicit */_Bool) 2044823693)) ? (arr_18 [i_2 - 1] [i_3] [i_4] [i_4]) : (((/* implicit */int) (unsigned short)1333)))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_5]))))))));
                                var_15 += var_0;
                                var_16 += ((/* implicit */long long int) arr_18 [i_2 - 1] [i_4] [i_4] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (~(min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_3))))));
    var_18 ^= ((/* implicit */unsigned short) var_7);
}
