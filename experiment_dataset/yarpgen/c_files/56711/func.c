/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56711
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
    var_13 = (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))))) < (((((/* implicit */_Bool) ((int) arr_1 [i_1]))) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 + 1])) : (5296622847955287759ULL)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((var_2), (((/* implicit */long long int) var_9))));
                arr_7 [i_0] [9LL] [(unsigned char)13] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)246)) & (((/* implicit */int) (unsigned char)2))));
                arr_8 [i_1 + 2] [i_0] &= ((/* implicit */signed char) (((-(((unsigned long long int) var_12)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((1152903912420802560ULL) < (((/* implicit */unsigned long long int) 1115779595123767409LL))))))));
            }
        } 
    } 
}
