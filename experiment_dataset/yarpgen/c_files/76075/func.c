/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76075
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
    for (int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((short) ((short) var_4))))));
                arr_4 [i_0] = ((/* implicit */unsigned int) ((signed char) (unsigned char)12));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)70))))), (((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_2] [i_1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))) : (arr_0 [i_0 + 2] [i_0 + 2])))))))))));
                                var_12 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (signed char)79)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_6);
    var_14 = ((/* implicit */unsigned int) var_9);
    var_15 = var_7;
}
