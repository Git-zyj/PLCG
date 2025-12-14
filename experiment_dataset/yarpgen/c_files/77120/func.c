/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77120
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
    var_13 = (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)54196)) ? (((/* implicit */int) (unsigned short)11339)) : (((/* implicit */int) (unsigned short)11344))))) & (2528514963U))));
    var_14 = ((/* implicit */unsigned char) (((-(221882165))) * (((/* implicit */int) ((unsigned short) ((var_4) > (var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) var_6);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((var_11) << (((min((var_4), ((-(var_11))))) - (2357945719U)))));
                                var_17 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) (unsigned short)34213)))) + (2147483647))) >> (((((((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [7]))) : (var_11))) << (((/* implicit */int) ((var_6) != (var_4)))))) - (390U)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
