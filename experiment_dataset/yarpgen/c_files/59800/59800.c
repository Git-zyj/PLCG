/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] &= var_6;
                arr_6 [i_0] [i_1] = ((((4454255842360973770 ? 13091853748753701492 : (arr_1 [i_0] [i_1]))) >> (min(0, var_8))));
                var_19 += var_12;
                arr_7 [i_0] [i_1] [i_1] = (~((4454255842360973770 ? 255 : (((arr_4 [i_1] [i_0] [i_0]) ? (arr_3 [i_1] [i_0] [i_0]) : var_8)))));
            }
        }
    }
    var_20 = (max(var_20, ((5354890324955850123 >> (((--15249259190781896787) - 15249259190781896785))))));
    #pragma endscop
}
