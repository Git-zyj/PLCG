/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_13 -= var_2;
                var_14 = ((((!(arr_1 [i_0 - 1])))) << (((!((((arr_4 [i_0] [i_0] [i_0]) ? 1485446925 : var_4)))))));
                arr_5 [i_1] = ((-(arr_0 [i_0 - 1] [i_1 - 2])));
                var_15 = (max(var_15, ((((arr_3 [i_0 + 3] [i_0 + 2]) ? ((max((arr_3 [i_0 + 1] [i_0 + 3]), (arr_3 [i_0 + 1] [i_0 + 2])))) : (((arr_3 [i_0 + 1] [i_0 + 1]) - (arr_3 [i_0 - 1] [i_0 + 2]))))))));
            }
        }
    }
    var_16 = (min(1, 23));
    #pragma endscop
}
