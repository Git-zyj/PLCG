/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91813
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
    for (int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1925617548U))));
                var_10 = ((/* implicit */int) arr_4 [(short)6] [9U] [(unsigned char)1]);
            }
        } 
    } 
    var_11 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)65535)) % (262143)))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) var_2))));
}
