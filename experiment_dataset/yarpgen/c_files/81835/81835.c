/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_5);
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((arr_0 [i_0]) ? ((min(-11, 51788))) : 88);
                var_21 = (min(((((arr_1 [i_0 - 1]) == (arr_1 [i_0 - 1])))), ((~(arr_0 [i_0 - 1])))));
                var_22 = ((4294967267 ? -112 : -18998));
            }
        }
    }
    #pragma endscop
}
