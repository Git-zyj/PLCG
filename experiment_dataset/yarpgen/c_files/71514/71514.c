/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 &= (((!0) + (min(883405821, var_7))));
        var_17 = (((max(-2534552252510206606, var_13)) < (!92)));
        arr_2 [i_0] |= (max((max(1032497052593930355, var_3)), var_3));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = var_4;
            var_18 = -var_6;
            arr_6 [i_0] = var_8;
        }
    }
    var_19 &= (max(var_15, (max(var_0, var_6))));
    #pragma endscop
}
