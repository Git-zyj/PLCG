/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_2 - 1] = 3999776043;
                    arr_8 [9] [9] [i_2] = ((max(5401612524816677524, 507935285)));
                }
            }
        }
        var_17 = ((max((arr_6 [i_0 - 3]), (arr_5 [i_0] [i_0 - 2] [i_0 - 3]))));
    }
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        arr_13 [4] = 3787032029;
        arr_14 [20] [i_3 - 1] = (((max((arr_10 [19]), (arr_10 [i_3])))));
        arr_15 [i_3] = (max(((min(3787032011, 507935273))), (min((arr_10 [i_3 - 1]), (max((arr_9 [i_3] [16]), 23103078957253677))))));
    }
    var_18 = (((((min(3787032003, -39)))) ? ((((max(3787031996, 1))) ? 60960 : (max(65535, var_1)))) : (min((max(27053, var_16)), var_11))));
    var_19 = var_9;
    var_20 = (min((max((((var_1 ? 4069680366 : 62161))), 507935290)), (((min(10747703666559095462, 65513))))));
    #pragma endscop
}
