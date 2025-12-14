/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max((((1 ? (var_11 != 1) : var_6))), var_11);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((min((arr_0 [i_0]), (arr_0 [i_0]))));
        arr_4 [i_0] = min((min(((var_10 ? var_1 : 1892623304)), 1)), ((((((-(arr_1 [i_0])))) ? ((((arr_2 [i_0] [i_0]) || 28177))) : (arr_1 [i_0])))));
        arr_5 [i_0] = (((((-(arr_1 [i_0])))) ? (((var_1 + 1728590432) ? 17255 : 1)) : (max((!var_7), ((-2001480238 ? -1200991604 : 127))))));
        arr_6 [i_0] = -11979;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_13 [i_1] = (arr_10 [i_1] [i_2]);
            arr_14 [i_1] = (arr_12 [i_1]);
            arr_15 [i_1] [i_2] [i_2] = (max(-1892623304, 28177));
            arr_16 [i_1] [i_2] = ((((((min(536346624, 4160749568))) ? var_5 : -1)) <= ((max(((~(arr_9 [i_1] [i_2]))), ((var_7 ? var_8 : var_4)))))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_19 [i_1] [i_1] [i_1] = (~(arr_18 [i_3] [i_3] [i_3]));
            arr_20 [i_1] [i_1] = (-(((min(var_10, 288230376151711743)))));
            arr_21 [i_1] = (((((arr_1 [i_1]) || ((min(-28181, -28177))))) ? ((var_8 << (((arr_10 [i_1] [i_3]) + 1188079326)))) : ((~(arr_17 [i_1] [i_3])))));
        }
        arr_22 [i_1] [i_1] = (min(((-((-2032349650 & (arr_7 [i_1]))))), ((min(((1 ? (arr_12 [i_1]) : -2001480217)), var_7)))));
        arr_23 [i_1] [i_1] = 1;
        arr_24 [i_1] = (7627 & -1892623303);
    }
    var_13 = -var_11;
    #pragma endscop
}
