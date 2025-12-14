/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (((((arr_3 [i_0]) == var_13)) ? (arr_3 [i_0]) : (arr_2 [19])));
                var_18 = (~((((((10154793573942090269 != (arr_2 [i_0]))))) - ((4294967295 ? (arr_1 [1]) : (arr_2 [i_0]))))));
            }
        }
    }
    var_19 = ((!(~var_3)));
    var_20 *= var_9;
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_21 -= min((!2406241569376519512), -1);
                    arr_12 [i_4] [i_3] [i_4] = (arr_6 [i_2 - 2]);
                    arr_13 [i_2] [12] [i_2] = ((((max((arr_1 [i_2 + 1]), (arr_5 [i_2 - 2])))) ? (arr_3 [i_4]) : (max((arr_10 [i_2 - 2] [i_4] [i_4]), (arr_10 [i_3] [i_3] [i_2 - 1])))));
                    var_22 = var_13;
                }
            }
        }
    }
    #pragma endscop
}
