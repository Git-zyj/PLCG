/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = ((var_6 ? (max(-87695732, (arr_5 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_2 + 2]))) : (arr_2 [i_0 + 4] [i_0 + 1])));
                    arr_8 [11] [i_1] [11] = ((((0 > (arr_0 [6] [i_0]))) ? (!12168182692474176438) : (87695700 > 2041557252)));
                }
            }
        }
        arr_9 [i_0] = (87695748 - 6278561381235375178);
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        arr_13 [i_3] [8] = 0;
        var_21 *= ((-(arr_5 [3] [5] [3] [5])));
    }
    var_22 = (((max((1629162859 > -15068), (0 ^ 43019)))) ? (((43639 < (!-23)))) : 71);
    #pragma endscop
}
