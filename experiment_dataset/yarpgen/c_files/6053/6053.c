/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 += ((~((((min(var_4, var_2))) ? (~var_10) : var_0))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_12 = (min(((min(34102, ((min(31119, 6926)))))), (arr_4 [i_0] [i_0])));
                    var_13 = (((((((((var_3 ? var_8 : 16819))) > (arr_1 [i_0]))))) ^ (min((min((arr_1 [i_0]), var_8)), ((min(103, (arr_8 [i_0] [i_1] [i_1] [i_2]))))))));
                }
                var_14 ^= ((min(-2001732478, (arr_1 [i_0]))));
            }
        }
    }
    var_15 = min(((max(((min(-1885, -15989))), var_8))), (min(((var_8 ? var_4 : var_6)), (var_1 < var_4))));
    var_16 &= ((~((-(min(var_7, var_5))))));
    #pragma endscop
}
