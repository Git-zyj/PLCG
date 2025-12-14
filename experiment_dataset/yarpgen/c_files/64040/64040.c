/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(6122252965724798574, ((((843873949 >> var_6) << (((max(var_6, 1173993556)) - 1173993556)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(var_13, -1));
                var_14 = -4609128335361958189;
                var_15 = (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
            }
        }
    }
    var_16 = (((((((0 ? -1173993556 : var_4))) ^ (var_7 * 10815152185276189672)))) ? var_4 : ((var_4 ? -var_1 : (var_3 != -843873949))));
    #pragma endscop
}
