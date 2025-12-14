/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (min((((arr_6 [i_0] [i_1 + 1]) ? -2147483647 : (arr_6 [i_0] [i_1 - 2]))), ((((max(var_7, 5))) ? (~var_0) : (((arr_5 [i_0]) ^ var_8))))));
                    arr_9 [i_0] [i_0] = ((~(((var_6 == (arr_2 [i_1 + 1] [i_0]))))));

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_14 = var_10;
                        var_15 = var_8;
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_1] [i_0] = (((((var_9 ? (arr_12 [i_1] [i_1 - 2] [i_1] [i_1 - 2]) : (arr_2 [i_1 - 1] [i_0])))) ? 8 : ((var_12 ? (arr_2 [1] [i_0]) : (arr_12 [i_1] [i_1 - 2] [i_1] [i_1 - 2])))));
                        var_16 = ((!(((((max(18446744073709551615, 18014398509477888))) ? (((arr_4 [i_0]) / (arr_12 [0] [i_1] [i_2] [i_4]))) : 1)))));
                        arr_17 [i_4] [i_0] [i_0] [i_0] = min((((((~(arr_0 [i_0] [i_2]))) & (~var_6)))), (((((0 ? (arr_11 [i_0]) : var_9))) ? var_0 : ((2813051592130486889 ? 13 : var_9)))));
                    }
                }
            }
        }
        var_17 = ((2147483633 ? 134 : 1178308447));
    }
    var_18 = (min((((var_11 + (((var_0 + 2147483647) >> (var_4 - 106)))))), var_12));
    #pragma endscop
}
