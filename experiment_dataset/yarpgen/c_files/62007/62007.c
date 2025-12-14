/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((-29455 ? -1758603460 : -93))) ? (var_1 != 86) : 93)) ^ (~var_4)));
    var_17 = (~((2454253577339094552 ? 50 : -11647)));
    var_18 = (((var_3 && 102) ? var_0 : 62));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 += ((!(((~(arr_3 [i_0]))))));
                arr_6 [i_1] = (((14805010192842073454 ? (arr_3 [i_1]) : (arr_3 [i_1]))) >> (((arr_3 [i_1]) - 21)));
                arr_7 [i_0] [i_1] [i_0] = 6905186188277348947;
            }
        }
    }
    var_20 = ((var_13 >= ((169 ? var_7 : var_5))));
    #pragma endscop
}
