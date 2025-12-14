/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79690
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
    var_11 = ((/* implicit */unsigned int) (unsigned char)179);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_0]), (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) 2370147405U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_5))))) ? (var_3) : (var_3)));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_7);
                            arr_13 [(_Bool)1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_1);
                            var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [(unsigned char)4] [i_3 + 1])) ? (1924819890U) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)94)))), (((/* implicit */int) (unsigned char)167)))))));
                            arr_14 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((var_1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_7)) : (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_7))))));
}
