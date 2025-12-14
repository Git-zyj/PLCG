/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] = ((!(((((var_8 ? 1042213298 : var_6)) << (((((arr_0 [i_0]) ? var_0 : (arr_5 [i_0]))) - 3814927030)))))));
            var_13 = (max(3252753997, var_1));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] = 1116892707587883008;
                        var_14 = (min(1020, ((var_10 ? var_9 : ((var_1 ? (arr_0 [i_0]) : var_12))))));
                        arr_15 [i_3] [i_3] &= (((max((3252753990 + 73), ((min(var_8, var_8)))))) < ((var_5 ? (var_4 | 3450682187080271939) : -var_9)));
                        arr_16 [i_0] [i_0] = arr_0 [i_0];
                    }
                }
            }
            arr_17 [i_0] = (((((arr_6 [i_1] [i_1 - 1] [i_1]) ? (-1274578328591244962 != 0) : var_0)) & (((((arr_11 [i_0] [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_1]) || 1))))));
        }
        var_15 = (((var_0 ? var_10 : 26)));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_16 = 16591565712770710902;
        var_17 = ((3450682187080271922 ? 60 : 3));
    }
    var_18 &= var_1;
    #pragma endscop
}
