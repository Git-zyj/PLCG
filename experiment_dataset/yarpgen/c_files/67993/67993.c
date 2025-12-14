/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-4611686018360279040 ? (max(var_2, (min(var_7, -4611686018360279041)))) : (((max(((min(var_12, var_1))), 62571))))));
    var_21 = (min((min(12344766298823835716, (var_7 < var_2))), var_13));
    var_22 = (6101977774885715900 && -4611686018360279041);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 6101977774885715900;
        arr_3 [i_0] = 12344766298823835716;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = -4611686018360279041;
        arr_7 [i_1] = (((max(12344766298823835716, -2048)) == var_10));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] = (min(-4611686018360279040, ((min(1, var_15)))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_4] [i_4] [i_5] = (var_17 >> var_5);

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_25 [i_2] [i_3] [i_2] [i_5] [i_4] [i_3] = ((-(arr_9 [i_2] [i_3])));
                            arr_26 [i_2] [i_3] [i_3] [i_2] [i_4] = (((var_0 * var_10) * (arr_24 [i_2] [i_2] [i_4])));
                            arr_27 [i_4] [i_3] [3] [i_3] = ((var_13 <= (max(10617, -4611686018360279041))));
                        }
                        arr_28 [i_2] [i_5] [i_4 + 1] [18] = (6101977774885715900 * var_7);
                    }
                }
            }
            arr_29 [i_2] [i_3] = var_15;
        }
    }
    #pragma endscop
}
