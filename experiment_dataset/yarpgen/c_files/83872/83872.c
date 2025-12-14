/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = 0;
                arr_6 [i_0] [i_0] [i_1] = var_10;
                var_17 = (max(var_17, (((-(min((arr_4 [i_0]), (arr_2 [i_0] [i_1]))))))));
                var_18 *= 47450;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            {
                var_19 = ((var_5 ? (arr_8 [23]) : ((-var_10 * (arr_11 [i_2])))));
                var_20 = 1;
                var_21 *= (((((((arr_10 [i_2]) * (arr_8 [i_2])))) ? (arr_7 [i_2 + 1] [i_3 + 4]) : (((min(6955, 1)))))) < (arr_11 [i_3]));
            }
        }
    }
    var_22 = var_10;
    #pragma endscop
}
