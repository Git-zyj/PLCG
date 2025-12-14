/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83387
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) ((short) 6976630984074841160LL))) ? (((((((/* implicit */int) (short)-24)) + (2147483647))) << (((((/* implicit */int) var_2)) - (27893))))) : (((/* implicit */int) (short)-3)))) << (((((/* implicit */int) arr_2 [i_1 + 4])) - (17311)))));
                var_11 = ((short) ((long long int) arr_3 [i_0] [i_0] [i_0]));
            }
        } 
    } 
    var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */int) var_2)), ((~(((/* implicit */int) (short)-32)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (((994915946240104859LL) << (((((/* implicit */int) (short)24)) - (24))))))))));
}
