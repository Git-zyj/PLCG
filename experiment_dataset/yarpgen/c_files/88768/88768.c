/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min((6962717727041591954 * var_15), (((-1 + 2147483647) << (8962268681494714594 - 8962268681494714594))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_18 ^= (((!var_3) / ((-(arr_1 [i_1 - 3])))));
                arr_4 [7] = (arr_3 [6] [15] [7]);
                arr_5 [i_1] [i_0] = (min((17650107074984702076 * 0), (arr_3 [i_1] [i_1 - 2] [i_0])));
            }
        }
    }
    #pragma endscop
}
