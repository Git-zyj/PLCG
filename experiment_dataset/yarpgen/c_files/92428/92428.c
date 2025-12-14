/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_1 >= 1);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 |= arr_1 [i_0];
        arr_3 [i_0] = var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_1] [11] [i_2] = (var_0 & var_18);
            var_21 = var_2;
            var_22 = arr_5 [i_1];
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_23 *= var_13;
            arr_12 [i_3] [i_3] = (((arr_11 [i_3] [i_3]) || 0));

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_24 = var_18;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_20 [i_3] = var_17;
                            var_25 = 16;
                        }
                    }
                }
                var_26 = ((!(arr_19 [i_3] [i_3 + 1] [i_3] [i_3 + 3] [i_3] [i_3 + 3])));
            }
            arr_21 [i_3] [i_3] [i_3] = var_8;
        }
        arr_22 [i_1] |= (1423688890 | var_17);
    }
    #pragma endscop
}
