/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90041
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_0))))) ? (var_5) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))), (((/* implicit */unsigned long long int) var_3))))));
                                arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1] [i_4 - 1] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                                var_12 = ((/* implicit */_Bool) max((var_5), (min((((/* implicit */unsigned long long int) (!(var_3)))), (((var_7) ? (var_9) : (var_1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_13 *= var_10;
                                arr_19 [i_0 + 1] [i_0] [5] [i_0] [i_0 + 1] = ((/* implicit */short) var_2);
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)234))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((min((((/* implicit */unsigned long long int) var_7)), (var_1))), (max((var_5), (((/* implicit */unsigned long long int) var_6))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned short)17049))))));
                }
            } 
        } 
    } 
    var_15 ^= max((((/* implicit */unsigned long long int) min((var_3), ((!(((/* implicit */_Bool) (signed char)59))))))), ((+(min((((/* implicit */unsigned long long int) 1702409554U)), (var_9))))));
}
