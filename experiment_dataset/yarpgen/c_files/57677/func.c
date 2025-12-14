/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57677
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_3 [(unsigned short)16] [i_1]))));
                    var_10 = min((((/* implicit */unsigned int) arr_4 [i_1])), (min((4294967295U), (((/* implicit */unsigned int) arr_0 [i_2])))));
                }
            } 
        } 
    } 
    var_11 = var_0;
}
