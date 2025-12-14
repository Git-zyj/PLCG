/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((10664737592085360741 ? var_4 : var_5)));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = ((max(-0, (max(65531, (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 -= 0;
                    var_15 -= ((!(((9 ? 0 : 12088)))));
                }
            }
        }
        var_16 += (max((((!(arr_6 [i_0 + 2])))), ((-(arr_5 [i_0 + 1])))));
    }
    var_17 = ((max(((var_5 ? 1963881 : -2532)), (max(33423360, 3970999380)))));
    #pragma endscop
}
