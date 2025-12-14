/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_10 = ((var_5 < (!15672740175079723115)));
        var_11 = (arr_2 [i_0] [i_0 - 2]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (max((max(30, ((((arr_3 [1]) > 1864270961))))), var_9));
                    var_12 = (min(var_12, ((min(1, -3783632094287016489)))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((~(min((!1), (min(8161579249021560700, var_6))))));
                }
            }
        }
    }
    var_13 = (-(((var_5 && var_8) ? (min(var_1, var_6)) : var_6)));
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            {

                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    var_15 |= ((((var_4 * (arr_13 [i_3] [i_3] [i_5])))));
                    arr_17 [i_3] [i_3] [5] = ((((max((max((arr_12 [13] [13] [i_5 + 1]), 4197058622266477822)), ((-7297317362220192865 ? var_0 : var_8))))) ? (arr_10 [16]) : (min(var_7, (arr_11 [i_5 - 2])))));
                    arr_18 [i_3] [i_4] [i_5 + 1] [i_5 + 1] = (min(3156695552, 0));
                }
                var_16 |= 2251799813677056;
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
