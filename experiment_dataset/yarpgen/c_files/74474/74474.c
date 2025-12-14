/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 181;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, 2));
                    var_14 = ((1458 / (arr_0 [i_0 - 2])));
                    arr_8 [i_0] = (arr_1 [i_0] [i_1]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_15 = (min(var_15, (arr_3 [i_3] [i_3])));
        arr_13 [i_3] &= ((((((45800 >= var_11) ? var_3 : (~var_4)))) ? ((((1645498266 > (arr_11 [i_3]))))) : (((-1458 ? 1647087998 : (arr_12 [i_3]))))));
    }
    var_16 = (min(var_16, ((((((min(var_7, var_6)))) % (max(var_8, var_11)))))));
    var_17 = (!1647087998);
    #pragma endscop
}
