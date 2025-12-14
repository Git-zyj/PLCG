/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((~((~(arr_1 [i_0]))))) >> (((min(18446744073709551615, (arr_1 [i_0]))) + 27)));
                arr_6 [i_0] [i_0] = ((-(arr_0 [i_0] [i_0])));
            }
        }
    }
    var_19 = (((min((min(-1267837441, var_2)), (var_13 >= var_12))) <= var_16));
    #pragma endscop
}
