/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_8 [9] [i_1] = (max(((((arr_4 [i_1] [i_1] [i_1] [i_1 + 1]) > (arr_4 [2] [i_1] [17] [i_1 - 1])))), (arr_4 [i_1] [i_1] [i_1] [i_1 - 1])));
                        arr_9 [i_3] [i_1 + 1] [i_1 + 1] [i_1] = var_11;
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_13 ^= (min((((32754 < 2689121792) ? ((var_5 ? 19 : 41544)) : (arr_0 [i_0 - 2]))), (~18446744073709551615)));
                        arr_12 [i_0] [i_4] [i_2] [i_1] [i_1] [i_0] = (arr_0 [i_1]);
                        var_14 = (min(var_14, ((((28672 > 2) ? 44587 : var_5)))));
                    }
                    arr_13 [i_0] [i_1] [i_1] [i_0] = (min(-1984562016, 4));
                }
            }
        }
    }
    var_15 = (min(var_15, var_12));
    #pragma endscop
}
