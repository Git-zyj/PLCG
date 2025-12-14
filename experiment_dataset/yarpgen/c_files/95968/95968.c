/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((((min((arr_2 [i_0]), (arr_1 [1] [i_0])))) && (arr_4 [i_0] [i_0]))))) > 459585084));
                arr_6 [i_0] [i_1] [9] = -1994277989571854518;
                arr_7 [i_0] = 58464;
                arr_8 [i_0] [6] [8] = (arr_1 [i_0] [i_0]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_14 = (arr_2 [i_2]);
        arr_12 [i_2] = ((-1994277989571854518 ? (arr_9 [i_2 - 2]) : (arr_9 [i_2 + 1])));
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_15 = (min(4149178724, 5035));
        arr_15 [i_3] = ((var_11 ? ((1994277989571854518 ? 1 : 5035)) : -1274210434));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_16 -= -102625541883071096;
        var_17 |= -2031616;
        var_18 = (max(var_18, (arr_16 [4] [1])));
    }
    var_19 = ((var_9 && ((min(var_6, (max(2031621, var_6)))))));
    #pragma endscop
}
