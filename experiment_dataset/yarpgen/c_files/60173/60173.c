/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~-54);

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] = -17827;
        var_14 = (~var_2);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_15 = ((~((-(arr_3 [i_1 + 1] [i_1])))));
        arr_6 [i_1] = (max((((var_12 ? 6250 : 3))), ((((-89 + 2147483647) >> (((min(var_8, var_5)) - 23)))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_15 [i_2] = (12705 ^ 92);
                arr_16 [i_2] = (max(((((378000611 ? 30549 : var_2)) ^ 1389822037)), (((((arr_14 [i_2] [i_2] [i_2]) ? 92 : var_10)) | ((var_3 ? 45 : var_7))))));
            }
        }
    }
    var_16 *= (min(-1, var_5));
    var_17 = ((-15 * (max(-var_7, ((min(-105, var_5)))))));
    #pragma endscop
}
