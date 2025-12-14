/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 *= 62;
                var_12 -= ((+(min((((arr_2 [i_0] [i_0] [3]) ? (arr_2 [12] [i_1] [i_1]) : (arr_2 [i_1] [i_1] [i_1]))), ((min((arr_3 [i_0] [7] [i_0]), (arr_3 [i_0] [i_0] [i_1]))))))));
                arr_4 [i_1] [i_1] [i_1] = (min((((arr_0 [i_0] [i_0]) ? ((min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0])))) : (((!(arr_3 [i_0] [i_0] [i_0])))))), (((!(((-(arr_2 [i_0] [i_1] [i_1])))))))));
            }
        }
    }
    var_13 &= (~var_8);
    #pragma endscop
}
