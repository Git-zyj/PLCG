/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_1]);
            arr_5 [i_0] [i_0] = ((var_4 != ((((-85 + 2147483647) >> (65535 - 65516))))));
            arr_6 [10] [i_1 + 1] &= (max(1, (-32767 - 1)));
            var_18 = ((0 ^ (min((((arr_0 [i_0] [i_0]) & 65535)), 255))));
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_11 [5] [i_0] [8] = (((max((arr_3 [i_0 + 1] [3] [i_2 - 1]), var_13)) & (((max(-16743, (arr_0 [i_0] [i_0]))) | (arr_3 [i_2] [i_2 + 3] [i_0 + 2])))));
            arr_12 [i_0] = (arr_10 [i_0] [i_0] [i_0 + 2]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_19 = -14;
                            var_20 *= ((((min(-32757, (~0)))) ? (min(-1118877375, ((~(arr_19 [i_3] [i_5]))))) : (arr_20 [i_3])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_21 = ((!(arr_21 [i_0] [i_0 + 2] [i_0] [1] [i_6])));
            arr_26 [i_0] = 247;
        }
        arr_27 [i_0] = -252;
        arr_28 [i_0] = ((((((65516 ? 1 : 7))) ? 65535 : ((18972 ? -32742 : 24)))));
        var_22 = ((1048575 ? 16 : 9431506594120496454));
    }
    var_23 = (min(var_23, var_14));
    #pragma endscop
}
