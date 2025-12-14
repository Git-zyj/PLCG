/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((min(((134215680 ? var_10 : var_7)), var_3))) ? (max(var_7, (min(var_5, 1704090886)))) : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = ((var_9 || ((-2781545828 > (((var_1 ? (-32767 - 1) : -66)))))));
                var_13 = (min(((max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))), (((arr_3 [i_0 + 2]) - (arr_3 [i_0 + 1])))));
                var_14 &= (0 + 79);
                var_15 = (max((((arr_2 [i_0]) ? (arr_4 [3] [i_1]) : (125 * 0))), (((var_10 * (arr_3 [i_0 + 1]))))));
            }
        }
    }
    var_16 = ((var_0 || (11063265441101432325 * 0)));
    #pragma endscop
}
