/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98243
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
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_13 [i_1] [i_3] [i_2 + 2] [i_1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)-1))))));
                                arr_14 [9LL] [i_1] [i_1] = ((/* implicit */unsigned int) (~(arr_9 [i_1 - 2] [i_1 + 2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_13)), (var_6))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))), (((((((/* implicit */int) (signed char)-51)) - (-713065061))) >> ((((+(arr_9 [i_0 - 1] [2LL]))) - (10392805504787386279ULL))))))))));
                                var_16 = ((/* implicit */unsigned long long int) arr_11 [i_6] [i_6 + 1] [i_5] [i_5] [i_2 + 1] [i_1 - 1] [i_0]);
                                var_17 = ((/* implicit */unsigned short) (short)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) var_10)))));
    var_19 = ((/* implicit */signed char) var_6);
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_2)))))) : (((long long int) 14795140373807899322ULL))))) <= (var_8)));
    var_21 = ((/* implicit */unsigned int) (signed char)-51);
}
