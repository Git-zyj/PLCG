/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7388
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) (unsigned short)252)) : (((/* implicit */int) var_8))))) ^ ((~(var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1008)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (var_2))) : (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)991))) : (min((var_2), (((/* implicit */unsigned int) (unsigned short)252))))))));
    var_13 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-26483))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_2] = arr_9 [i_0] [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */int) arr_4 [i_0]);
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_1 [i_1]);
                    arr_15 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0]);
                }
            } 
        } 
    }
    var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) (unsigned short)46432)))))));
}
