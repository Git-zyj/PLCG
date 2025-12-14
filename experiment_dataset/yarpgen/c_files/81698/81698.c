/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min((((~(arr_3 [i_0] [i_1] [i_1 + 3])))), (max(((2 ? 7 : 0)), ((min(var_14, 1)))))));
                arr_5 [1] [i_0] [i_0] = ((!((min(35, 34133)))));
            }
        }
    }
    var_19 = (!var_14);
    var_20 *= 18446744073709551605;
    #pragma endscop
}
