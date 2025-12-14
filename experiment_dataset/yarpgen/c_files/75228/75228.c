/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (max(((~(max(0, 0)))), (min((~1), (min(0, 0))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = 0;
            arr_5 [i_0] [i_0] = (~-0);
            var_20 = ((0 ? 8 : 268435455));
            arr_6 [i_0] = ((~((~(arr_3 [i_0] [i_1] [i_0])))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 = (arr_9 [i_0]);
            var_22 = (arr_7 [i_0] [i_0] [i_0]);
            arr_10 [i_0] [i_2] = (((~15940594894818458615) ? ((152 ? (arr_9 [1]) : (arr_2 [i_2] [i_0] [i_0]))) : (arr_0 [i_0])));
        }
        var_23 &= (max((((((min((arr_9 [i_0]), (arr_7 [18] [i_0] [i_0])))) ? 5 : ((max(0, (arr_3 [2] [i_0] [2]))))))), ((max((arr_8 [i_0]), (arr_9 [i_0]))))));
        var_24 = (max((arr_8 [i_0]), 3937687480));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        arr_14 [i_3] = (~(arr_2 [i_3] [i_3] [i_3]));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_25 = (max(-152, (max((((~(arr_16 [i_3 + 1] [i_3] [9])))), (arr_11 [i_3])))));
            var_26 = ((+(min((arr_3 [i_3] [i_3] [i_4]), ((~(arr_11 [i_3])))))));
        }
        var_27 = min((arr_0 [i_3]), (max((min(86, (arr_1 [i_3] [i_3]))), 39607)));
        arr_17 [i_3] = (max(1, (((((~(arr_9 [i_3])))) ? (((max((arr_7 [22] [i_3 + 1] [i_3]), 86)))) : (max(18446744073441116164, (arr_11 [i_3])))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_28 = (max(1, (min((min(-1853342484, (arr_23 [i_6] [i_3] [i_3]))), (max(39607, 13))))));
                        arr_27 [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3] = 4179;
                    }
                }
            }
        }
    }
    #pragma endscop
}
