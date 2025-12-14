/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_6;

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_15 = (arr_1 [i_0]);
        var_16 = (124 && 127);
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 = (min(3419365424, 875601876));
        var_18 ^= 0;
        var_19 = arr_1 [i_1];
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_20 = (min(var_20, (((((min((arr_1 [i_1]), (9223372036854775807 < 875601895)))) ? ((((((-(arr_6 [i_1] [i_1] [i_1]))) != ((var_3 ? (arr_11 [i_4]) : (arr_11 [i_3]))))))) : -var_1)))));
                        var_21 = (max(var_21, (arr_3 [i_1])));
                    }
                }
            }
        }
        var_22 = (arr_3 [i_1]);
    }
    #pragma endscop
}
