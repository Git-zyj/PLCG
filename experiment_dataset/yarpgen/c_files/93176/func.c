/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93176
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
    var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_9)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_0)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [5ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_5 [i_2 - 2]))) ? (((arr_5 [i_2 - 2]) + (((/* implicit */int) var_6)))) : (arr_5 [i_2 - 2])));
                    var_12 = ((/* implicit */unsigned long long int) ((short) (-((-(arr_5 [i_0]))))));
                }
            } 
        } 
    } 
}
