/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (arr_3 [i_1]);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_16 ^= (1 ? 1 : 15378593267052786252);
                        var_17 = (((arr_2 [i_0] [i_1] [i_2]) ? (arr_2 [i_0] [1] [1]) : (((arr_3 [i_0 - 1]) * (max(18446744073709551615, 2099617203))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_18 = arr_3 [i_0 - 1];
                        arr_13 [i_2] [i_2] [i_2 - 1] [1] = 2099617203;
                    }
                    arr_14 [i_0] [i_2] [18] = var_10;
                }
            }
        }
    }
    var_19 = max(7218481234223203253, (0 / 1));
    #pragma endscop
}
