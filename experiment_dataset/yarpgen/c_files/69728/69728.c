/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((1 && (((var_4 | ((2813890418167071957 ? 2813890418167071957 : 2813890418167071957)))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 -= ((var_2 ? 1 : (((min(-2, 2813890418167071973)) ^ var_3))));
        arr_3 [i_0] [i_0] = (~(min((~1023), 6754319759214241333)));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_16 = var_1;
        var_17 = (min(1565840890, (~-2813890418167071957)));
        var_18 = (((((1565840890 ? var_13 : (!1859153343)))) | ((-(max(var_7, var_10))))));
        arr_6 [i_1] = -1;
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2 + 1] = var_6;
        var_19 -= (min(202, ((2813890418167071957 ? 2813890418167071996 : -2813890418167071973))));
        var_20 = 0;
        var_21 = (min(var_21, var_13));
        arr_10 [18] [i_2] = 3178302316;
    }
    var_22 = (min(var_22, var_12));
    #pragma endscop
}
