/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= 155;
    var_15 = ((-1 ? (min((((155 ? -1 : 1391362102))), (((-127 - 1) ? -12399 : 9007198986305536)))) : var_12));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (max(((((min(var_2, var_2))) ^ (arr_3 [i_0] [i_1]))), ((((arr_2 [i_1] [i_2]) || ((((-2147483647 - 1) & -12382))))))));
                    arr_8 [i_0] [1] [i_2] [i_2] = ((((((-1 < var_4) % (arr_2 [i_0 + 3] [i_0 + 1])))) ? var_6 : -576460752303423487));
                }
            }
        }
    }
    var_17 = (min(var_4, var_2));
    var_18 ^= (max(var_1, (min(var_5, (1391362102 >= var_12)))));
    #pragma endscop
}
