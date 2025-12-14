/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_2 [i_0 - 3]) > var_10))) ^ (!60)));
        arr_4 [i_0] = (min(3225953181, 44));
        arr_5 [i_0 + 2] = 0;
        arr_6 [i_0] [i_0] = -45;
        arr_7 [i_0] [i_0] = 1;
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_11 [14] = (--47);
        var_12 &= ((((min((((arr_0 [3]) ? var_5 : (arr_10 [i_1]))), var_1))) ? (((((var_1 << (var_2 - 68))) < -64))) : (arr_9 [i_1 - 1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_16 [8] [19] = (arr_15 [i_3] [i_3] [i_3]);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_22 [9] [i_3] [i_3] [i_3] = (arr_21 [i_4 + 2] [i_4 + 2] [i_4] [i_4] [i_4] [i_4 + 2]);
                            arr_23 [i_2] = arr_19 [i_2];
                            var_13 = (max(4294967295, 6));
                        }
                    }
                }
                var_14 = (min((~1), (arr_20 [i_2] [i_2] [i_2] [i_2])));
                arr_24 [i_2] [i_2] = (((126 % 47) ? -85 : 86));
            }
        }
    }
    var_15 = 127;
    var_16 = ((var_7 ? var_4 : (min(((85 * (-127 - 1))), 126))));
    var_17 = ((((((-127 - 1) ? 1 : 51))) ? (((min(var_11, var_7)) ? var_7 : var_9)) : var_2));
    #pragma endscop
}
