/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (max((min(((max(3227, 4294967295))), (max(var_13, var_6)))), ((min((max(var_12, var_4)), (max(59817, var_8)))))));
    var_15 = (min(var_15, ((max((max(((max(var_9, var_8))), (max(var_4, 8274247685657879643)))), (max((max(var_11, var_7)), (max(var_13, var_4)))))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_16 = (max(1, 17644));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [0] [i_0 - 1] [i_0 - 1] = (min(((max((min(21617, 0)), (max(var_8, (arr_5 [i_0 + 3])))))), (min((max((arr_0 [i_1]), (arr_3 [i_2] [4]))), ((max((arr_7 [i_2] [15] [i_0] [i_0]), 1)))))));
                    var_17 = (max((max((max((arr_2 [i_0]), 0)), ((min((arr_7 [i_0] [i_1] [i_0] [i_2]), var_9))))), (max(56027, 10172496388051671972))));
                }
            }
        }
    }
    var_18 = (max(((min(((max(10103, var_0))), (min(var_11, var_10))))), (max(((max(var_8, var_10))), (max(var_8, 18446744073709551615))))));
    #pragma endscop
}
