/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74480
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
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (((max((3660365262U), (var_2))) + (((3660365262U) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [(signed char)13] [i_0] = ((/* implicit */short) (~(var_5)));
                    var_14 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))) + (3660365259U)))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_5);
    var_16 = ((/* implicit */unsigned int) ((unsigned short) var_1));
}
