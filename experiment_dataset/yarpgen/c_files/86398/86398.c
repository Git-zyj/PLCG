/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = 32767;
                var_20 = (max((max(14, 1853919329764392575)), ((max(0, (max(-14, 16833)))))));
                var_21 = (min(var_21, (((-(~32239))))));
            }
        }
    }
    var_22 = (~-var_6);
    #pragma endscop
}
