/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = (min(((((min(4028958311, (arr_2 [i_0])))) ? (-2031791477464515041 & var_6) : (var_6 | 2031791477464515047))), ((~(min((arr_5 [i_0] [i_1]), 639990363))))));
                    arr_11 [i_0] [i_1] = ((((max(((var_12 % (arr_7 [i_0] [3] [3]))), (((1 ? (arr_9 [i_0] [i_1] [i_2]) : 1)))))) ? (((-(arr_3 [i_1])))) : ((2031791477464515046 % (((-135189618 ? 15 : (arr_7 [i_0] [13] [i_2]))))))));
                }
            }
        }
    }
    var_15 = -19907;
    var_16 = 714509362;
    var_17 = ((((max(var_6, var_14))) ? (max(1086956552, 127)) : (var_0 % -88)));
    #pragma endscop
}
