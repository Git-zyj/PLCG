/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [12] [i_0] = (min(var_9, ((max(var_6, var_3)))));
                arr_7 [i_1] [i_1] [i_1] = ((((((-9223372036854775807 - 1) ? 14656877949408754997 : 3536095614))) ? (~var_0) : (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_16 [i_3] [11] [i_2] [i_2] [15] = -9223372036854775807;
                            var_10 = ((((((arr_15 [i_3 - 1] [6] [14]) ? (arr_15 [i_3 + 1] [i_2] [1]) : (arr_12 [i_3 + 1] [i_1] [i_2] [i_2 + 2])))) || (var_1 <= var_0)));
                            arr_17 [19] [i_3] [i_0] = (arr_2 [i_0]);
                            var_11 = ((25 ? (max((min(1834197845006696198, 9223372036854775807)), ((max(9223372036854775807, var_2))))) : 2766600834157605291));
                        }
                    }
                }
            }
        }
    }
    var_12 = (var_3 / var_7);
    var_13 = var_5;
    #pragma endscop
}
