/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_7;
    var_12 += (min((((3 < var_1) << (var_8 - 9826))), (min((~1), var_10))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (min(var_10, (((((3 ? 17 : -1))) ? var_8 : (arr_2 [i_1] [i_1] [i_1])))));
                arr_4 [i_0 - 2] [i_0 - 2] [i_1] = ((((min(var_4, 18446744073709551612))) >> ((((~(arr_3 [i_1]))) - 170548414))));
            }
        }
    }
    var_14 = var_5;
    #pragma endscop
}
