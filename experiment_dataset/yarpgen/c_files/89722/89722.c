/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = 27;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((arr_3 [i_2] [i_1] [i_0]) ? ((((195 ? var_14 : var_12)) | ((max(var_3, (arr_0 [i_0] [24])))))) : (288230376084602880 || var_12)));
                    arr_9 [i_0] [i_1 - 2] [13] = (((((max((arr_0 [i_0] [i_1]), var_0)) > var_7)) ? ((min((((arr_0 [3] [1]) % var_0)), var_0))) : var_11));
                    arr_10 [19] [i_1] [24] = (((max(var_4, (arr_3 [i_1 + 1] [i_1] [i_2])))) ? (arr_1 [23]) : 7);
                    arr_11 [i_0] [i_1] [i_2] = (min((min((arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2]), (arr_6 [i_1 + 2] [1] [i_1 - 2] [i_1]))), var_14));
                }
            }
        }
    }
    #pragma endscop
}
