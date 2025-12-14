/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_19 = (((min((((2552776070621838803 ? -1 : var_4))), (26524 | 8148306535321710674))) <= ((min(var_2, (arr_4 [i_0] [i_1] [i_0]))))));
                var_20 = (arr_3 [i_0] [i_0]);
                var_21 = (((((((var_10 ? var_14 : (arr_1 [i_1])))) ? (8148306535321710657 + 13041386455065342992) : (~10298437538387840970))) <= (((((((0 ? var_10 : var_4))) <= 8148306535321710662))))));
            }
        }
    }
    #pragma endscop
}
