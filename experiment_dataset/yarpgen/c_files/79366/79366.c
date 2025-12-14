/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [1] = var_2;
        arr_3 [5] = (max(107, (max(2501648274, 148))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_13 -= ((~((((min(142, 75))) ? -4443930997452504224 : (((3 << (1793319022 - 1793318999))))))));
        var_14 -= (arr_7 [i_1 - 2] [i_1]);
        var_15 = ((var_4 <= (var_6 != 75)));
    }
    var_16 ^= var_7;
    #pragma endscop
}
