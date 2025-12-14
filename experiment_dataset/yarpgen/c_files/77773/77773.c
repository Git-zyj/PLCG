/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = ((((min(-1, -1))) ? (arr_3 [i_0] [i_0]) : (((134217727 ? 21157 : -26553)))));
                var_11 = (((((arr_3 [i_0] [i_0]) ? (-32766 - var_4) : (((arr_1 [i_0]) ? 18020 : (arr_3 [i_0] [i_0])))))) ? (arr_2 [2]) : 21155);
                var_12 = (arr_0 [i_1]);
                arr_4 [i_0] = arr_2 [i_1];
                arr_5 [i_0] = ((((((-10038 | -21140) ? ((((-32751 != (arr_3 [i_0] [i_0]))))) : var_0))) ? (arr_3 [i_0] [i_0]) : 4294967295));
            }
        }
    }
    var_13 = var_2;
    #pragma endscop
}
