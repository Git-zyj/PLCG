/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56169
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
    var_11 = ((/* implicit */short) (-(((((((/* implicit */int) var_9)) | (((/* implicit */int) var_5)))) ^ (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) var_9)))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) 2247401767174144ULL))));
            }
        } 
    } 
}
