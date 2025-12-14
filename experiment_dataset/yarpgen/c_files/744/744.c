/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (15448019137757413112 * 50297);
        var_19 = min(var_4, var_8);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                var_20 = (max(var_20, ((min((max(473581, -473582)), 8787970685530962087)))));
                var_21 = (max(var_21, (((+((((~-473573) == (((!(arr_6 [8] [2] [7]))))))))))));
                arr_7 [2] [1] = -58353;
            }
        }
    }
    var_22 = (((((var_6 ? 40511 : 473577))) <= (!var_13)));
    #pragma endscop
}
