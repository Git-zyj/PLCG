/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((min((((-32767 - 1) ? var_9 : var_16)), ((((-32765 <= 473922549) > var_3))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [i_2 - 1] [i_2] [i_0] = (max((((-337939971 + 2147483647) >> (-32758 + 32784))), (((-(arr_7 [11]))))));
                    arr_12 [i_0] [i_2] [i_2 + 1] [i_2] = (arr_9 [i_0] [i_1] [i_2]);
                    var_19 = ((((min(1427473837, 32751))) ? (((max(var_9, (arr_8 [i_2 + 2] [i_2] [i_2 + 1]))))) : (-32751 > 0)));
                    var_20 = (max(var_20, ((max((((-(arr_1 [8] [5])))), (min(18446744073709551615, 473922549)))))));
                }
            }
        }
    }
    var_21 &= ((-((((var_1 ? var_14 : var_5)) >> (24613 - 24586)))));
    var_22 = var_14;
    #pragma endscop
}
