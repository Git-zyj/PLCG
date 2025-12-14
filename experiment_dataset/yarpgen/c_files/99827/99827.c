/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 = -97;
        var_17 = ((~((~((245 ? -1 : 11))))));
    }
    var_18 += (255 != -var_1);

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_19 = (max(var_19, ((min(245, ((max(244, (arr_9 [i_4] [i_4] [i_3] [i_2] [i_2] [i_1])))))))));
                        arr_11 [i_1] [i_2] [i_2] [i_4] [i_1] = (((min(((2836831180 ? 245 : 124)), 12)) | 60));
                        var_20 = (min((~254), (max((arr_2 [i_2] [i_4]), 2776478981))));
                    }
                }
            }
        }
        arr_12 [i_1] [8] = ((~((-(arr_7 [i_1] [i_1] [i_1])))));
        var_21 += (~-1925703856);
    }
    var_22 = (((var_11 ? -6818312860368056292 : (var_10 >= 995467415))));
    var_23 = 1476510017;
    #pragma endscop
}
