/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = (max(-405731211, ((+(max((arr_5 [i_0]), 1646))))));
                    arr_11 [i_0] [i_1] [i_1] = (max((min(-9588, ((max(0, 133))))), (((max(-19064, (arr_9 [i_0] [i_1] [i_2])))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_10 = ((~(min((max(var_9, var_2)), ((~(arr_0 [i_0])))))));
            var_11 = (max(var_11, (((((~(arr_8 [i_3] [i_3] [i_0] [i_0]))))))));
            arr_15 [i_0] [i_0] [i_3] = -1;
            arr_16 [i_0] [i_0] [i_0] = ((~(((min(var_0, var_4))))));
        }
    }
    var_12 = (-(((!(!0)))));
    var_13 = ((-(max(var_1, ((max(var_2, 1)))))));
    var_14 = (max(var_14, (((((!(!4066932763847420447))))))));
    #pragma endscop
}
