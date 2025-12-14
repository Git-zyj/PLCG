/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_13 ? (12072978626740973044 * 6373765446968578594) : var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((var_2 ? (arr_6 [i_0] [i_2]) : (arr_10 [i_0] [i_1] [i_2] [i_0])));
                    var_17 = ((((((arr_2 [i_0] [i_2]) || (arr_1 [i_0] [i_1])))) != (-4319581320745352746 >= var_14)));
                    arr_12 [i_0] [i_1] [i_1] [i_0] = (~7388212652077879415);
                }
            }
        }
    }
    var_18 += ((var_5 ? var_0 : (max(7388212652077879413, -5))));
    #pragma endscop
}
