/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((var_16 ^ 22681), ((((1 ? var_8 : var_1))))));
    var_20 &= 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_8;
                var_21 = (max(((var_1 * (arr_3 [i_0 + 2]))), (!var_5)));
                var_22 &= var_14;
                arr_8 [i_0] |= (arr_2 [i_0]);
                var_23 = ((((((arr_6 [i_0 + 3]) * (arr_6 [i_0 - 2])))) ? (arr_1 [i_1]) : (max(((max((arr_5 [i_0 - 1] [i_1] [i_1]), 0))), ((42855 ? -17156 : var_17))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            {
                var_24 = (((min(((var_11 ? (arr_12 [i_2] [i_2] [i_2]) : -17156)), (max(65534, (arr_11 [14]))))) << (21 <= var_14)));
                arr_15 [i_2] [i_2] = (max(((~(arr_14 [i_2]))), (((arr_14 [i_2]) | (arr_14 [i_2])))));
                arr_16 [i_2] = 13;
                arr_17 [i_2] [i_2] = (((min(var_6, ((var_3 / (arr_13 [6] [i_3]))))) * 23));
                var_25 ^= (~0);
            }
        }
    }
    #pragma endscop
}
