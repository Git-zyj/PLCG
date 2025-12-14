/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73235
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (-(var_11)));
                    var_19 = ((/* implicit */short) (~(6850045856037862590ULL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_10)))) >> (((((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_4)) <= (var_12))))))) - (1401982128U)))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            {
                arr_12 [i_4] [i_4] &= ((((/* implicit */_Bool) arr_7 [i_4] [i_4])) || (((/* implicit */_Bool) (~(17146314752ULL)))));
                arr_13 [i_3] = ((/* implicit */unsigned char) arr_9 [i_3] [i_3]);
            }
        } 
    } 
}
