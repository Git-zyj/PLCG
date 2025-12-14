/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((max((~var_1), (min(var_10, var_2)))) != var_5));
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (max((max((arr_2 [i_0]), (arr_2 [i_1]))), -11283));
                arr_7 [i_1] [i_1] [i_1] &= (((((var_3 ? var_2 : -17))) ? var_5 : (((!(((var_3 & (arr_2 [i_0])))))))));
                arr_8 [i_0] [5] = var_10;
                arr_9 [i_0] = var_11;
                arr_10 [i_1] = min(((10666046207963621934 ? 22330 : 22330)), 11964);
            }
        }
    }
    #pragma endscop
}
