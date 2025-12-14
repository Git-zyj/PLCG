/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min((max((max(1931534551, 24195)), 557599698)), (((arr_4 [i_0]) ? 24195 : (arr_2 [i_1])))));
                var_15 = (min(var_15, ((max((min(((-646553818 ? -1931534552 : 1524224184)), var_6)), (arr_5 [i_0] [8] [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                var_16 = (max(var_16, (arr_8 [i_3])));
                var_17 = -557599699;
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
