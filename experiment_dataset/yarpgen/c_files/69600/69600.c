/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_15, ((~((min(var_4, var_4)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        var_17 = ((var_12 ? (((67 ? 7 : 3796))) : (min((arr_0 [i_0]), -7547429455102780887))));
                        var_18 = (max((max((arr_1 [i_1 + 2]), (arr_1 [i_1 + 2]))), (min((arr_1 [i_1 - 4]), (arr_1 [i_1 - 1])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_19 = (max(1, ((((arr_19 [i_4] [i_4]) || (arr_19 [i_5] [i_6]))))));
                        var_20 = ((((max((arr_11 [i_0] [i_4] [i_4] [i_5] [12]), (~var_13)))) ? (max((min(var_14, (-32767 - 1))), (arr_14 [i_0] [i_0] [i_0]))) : (((((arr_11 [i_0] [i_4] [i_5] [i_6] [8]) || (arr_8 [i_0])))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_25 [i_7] = (arr_13 [19] [19] [i_7]);
        arr_26 [i_7] [i_7] = 6534;
        var_21 = (-32767 - 1);
        var_22 = (max(var_10, -26));
    }
    #pragma endscop
}
