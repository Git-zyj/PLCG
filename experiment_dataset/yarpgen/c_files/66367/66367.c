/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0 - 1] [i_1] = (((max(var_3, 255))) ? (~1) : ((-(arr_3 [i_2] [i_1 - 2] [i_0 - 1]))));
                    var_11 = max((max(var_9, ((~(arr_1 [i_0]))))), (var_1 >> var_0));
                    var_12 = ((((min((arr_7 [i_0] [i_1 - 2] [i_2 + 2]), (arr_7 [i_1] [i_1 + 2] [i_2 + 4])))) < ((~(255 | -660828071)))));
                }
            }
        }
    }
    var_13 *= (max(((var_2 ? var_0 : var_10), (var_10 - var_10))));
    var_14 = (max(((((-1 + 2147483647) >> ((2 ? var_0 : 110))))), var_10));
    var_15 = (max(var_15, (((var_5 ? (min(2321604704153533612, 7348231288770186947)) : ((-29671 ? 16125139369556018004 : 255)))))));
    #pragma endscop
}
