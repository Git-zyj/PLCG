/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61321
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61991)) / (((/* implicit */int) arr_4 [(_Bool)1]))));
                arr_6 [(unsigned short)1] [i_0] [(unsigned short)1] = ((/* implicit */unsigned short) var_4);
                arr_7 [i_0] [i_1] [i_0] = arr_1 [i_1];
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
}
