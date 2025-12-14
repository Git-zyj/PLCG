/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((((arr_0 [10]) ? (4294967295 == var_3) : (min((arr_0 [12]), (arr_0 [22]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_11 = (((arr_0 [i_0]) ? (arr_4 [i_0]) : (arr_7 [17] [i_1] [17])));
                            var_12 += (((((4294967288 ? (arr_4 [i_2]) : ((min(5, -23)))))) ? ((((arr_7 [i_0] [i_2] [i_3 - 1]) && var_9))) : ((var_6 ? (max(var_5, var_2)) : 1))));
                            var_13 = (max(var_13, (arr_2 [i_0] [i_0])));
                            var_14 = (min(var_14, (((var_9 ^ ((((3752104183078734378 <= (arr_3 [i_2] [i_2]))))))))));
                        }
                    }
                }
                var_15 = 4294967294;
            }
        }
    }
    var_16 += (max(((~(-6721495849991694982 == 127))), var_9));
    var_17 = (min(var_17, (min(var_2, ((~(min(3758096384, 1))))))));
    var_18 *= (176 - -16);
    #pragma endscop
}
