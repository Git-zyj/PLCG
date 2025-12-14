/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 -= 37366;
        var_19 |= (((arr_0 [i_0 - 2]) ? (arr_2 [i_0 + 1]) : -7));
        var_20 -= ((-572811592 > (9223372036854775808 / 16044224135922121014)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_0 - 2] = ((1 ? (arr_5 [i_0 - 2]) : (arr_8 [i_0 + 1] [1])));
                    var_21 = 725288598419053029;
                }
            }
        }
    }
    var_22 = var_2;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 15;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_5] = (min(((41666 + (arr_6 [i_4 + 3]))), (min(((max((arr_2 [i_3]), (arr_3 [i_5] [3])))), ((48938 ? (arr_11 [i_5]) : 7716))))));
                    arr_17 [i_5] = ((((max(((127 ? 9172205246848115943 : var_2)), (arr_4 [i_4 - 3] [i_5 - 2])))) ? ((((arr_11 [i_4 - 4]) ? (!var_9) : (arr_2 [i_5])))) : ((~(arr_3 [i_5 - 4] [i_4 - 4])))));
                    var_23 = (arr_7 [i_3] [19]);
                }
            }
        }
    }
    #pragma endscop
}
