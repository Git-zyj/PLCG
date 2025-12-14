/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = (((((255 | 28) ? var_14 : 201)) >= var_7));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((61 ? 194 : 65534));
        var_22 = 204;
        arr_5 [i_0] [i_0] = (min((var_19 + var_5), (((((arr_3 [i_0]) - 23510))))));
        arr_6 [i_0] = (((((~(arr_1 [i_0])))) ? (arr_2 [i_0] [i_0 - 1]) : var_7));
    }
    var_23 = ((var_1 >> (((((~var_19) ? var_2 : (~-14825))) - 4529300690528023886))));
    #pragma endscop
}
