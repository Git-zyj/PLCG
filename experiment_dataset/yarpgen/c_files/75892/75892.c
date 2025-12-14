/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (~var_0)));
    var_18 = (((--11368) % var_12));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [15] [i_2] = (max(-186, (arr_7 [i_0] [i_0] [i_0])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_19 = (max(var_19, ((((arr_10 [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 1] [i_0 - 1]) ? (arr_10 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0 + 1]) : (arr_2 [i_0 - 1] [i_0 + 3] [i_0 + 3]))))));
                        var_20 = (min(var_20, (arr_9 [i_0 + 2] [i_1] [i_1] [i_0] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_21 = (i_0 % 2 == 0) ? ((max((((arr_6 [9] [14] [i_0 + 3] [14]) % (arr_6 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2]))), (((arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 2] [8]) << (((arr_9 [12] [i_0 - 3] [i_0] [11] [16]) + 1629992348))))))) : ((max((((arr_6 [9] [14] [i_0 + 3] [14]) % (arr_6 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2]))), (((arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 2] [8]) << (((((arr_9 [12] [i_0 - 3] [i_0] [11] [16]) + 1629992348)) - 1611066864)))))));
                        var_22 = (min(var_22, ((max(((~(arr_9 [i_4] [i_2] [i_1] [i_1] [i_0 + 2]))), (((arr_4 [i_0 - 2] [i_1] [i_1]) ? 209 : (arr_7 [i_0 + 1] [i_0 + 1] [i_1]))))))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_23 = (((((var_6 / ((-(arr_6 [i_0] [i_2] [i_2] [i_2])))))) ? (((((~(arr_3 [i_0])))) ? -5458971060468376873 : 131)) : (((((1 ? var_4 : 28106)) % (((3896 % (arr_12 [i_0])))))))));
                        var_24 = (min(var_24, (arr_14 [i_0 + 2] [i_0 + 1] [5] [i_0] [1] [11])));
                        var_25 = (max(var_25, (arr_6 [15] [i_2] [i_0] [i_0])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
