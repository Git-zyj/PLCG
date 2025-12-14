/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = ((((((((79986614 ? 1 : 4952))) ? (arr_6 [11]) : 65516))) ? ((max((arr_7 [i_2] [i_2] [i_2] [i_2]), (arr_7 [i_0] [i_1] [i_2] [10])))) : (arr_5 [i_0] [i_1] [i_2])));
                    var_19 = ((arr_2 [i_2]) | 20);
                    arr_8 [i_0] [i_0] [i_0] = (arr_1 [i_2]);
                }
            }
        }
    }
    var_20 = ((((var_9 ? 65507 : var_9))) || ((var_0 && (((var_12 ? 230 : var_16))))));
    var_21 = ((~(((var_8 + var_14) ? (var_2 > 213) : ((0 ? var_9 : 18446744073709551607))))));
    #pragma endscop
}
