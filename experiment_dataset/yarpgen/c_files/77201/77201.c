/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_9;
    var_16 = -var_4;
    var_17 *= (((min(0, (5402597626828233687 / 2618877646724067845))) / -78));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = (arr_1 [i_0]);
        var_18 = (arr_1 [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 = ((6010527667387876762 ? ((((((arr_5 [i_1]) | var_1))))) : (max(2618877646724067845, 3303128720541629939))));
        var_20 ^= (min((min(15428012808591104849, (arr_1 [i_1]))), (((!(!1373077509))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = 70;
        arr_9 [i_2] = ((!((((((66 ? 1 : 1081389207))) ? ((min(-72, 1373077509))) : (max(-5449595553133269160, -22247)))))));
        var_21 ^= (!(arr_7 [i_2]));
        var_22 = (((min(var_9, 32751)) + 4042557444));
        var_23 = (max(14680064, var_1));
    }
    #pragma endscop
}
