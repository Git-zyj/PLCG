/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((var_1 ? (min(((max(1, 1))), (min((arr_1 [i_0]), 6168190026771788905)))) : 1703641724));
        var_19 = (((!var_6) ? (((119 ? (arr_1 [i_0]) : var_16))) : ((var_16 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_20 = var_3;
                        var_21 ^= 4565006769444770489;
                        var_22 = ((((max(16488151120686887938, 88))) ? -2044 : 191));
                        var_23 = (max((min(((max(-95, -125))), (min(114, (arr_5 [7] [i_2]))))), (min(-1, -1))));
                        var_24 ^= (max(-122, 4565006769444770476));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    {
                        var_25 &= ((((min((arr_17 [i_7] [1] [i_7 + 1] [i_7 - 2] [i_7]), (arr_1 [i_7 + 1])))) ? (((4565006769444770497 ? 65535 : -26439))) : -4565006769444770481));
                        arr_21 [8] [5] [i_5] = var_15;
                    }
                }
            }
        }
    }
    var_26 = (~var_14);
    var_27 = var_18;
    var_28 = (min(var_28, var_6));
    #pragma endscop
}
