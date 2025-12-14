/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(var_14, (var_6 - var_0)))) || ((var_12 <= (6030878416812361494 == var_5)))));
    var_16 = (((((var_10 > var_5) ? 62253 : (62253 % -1))) == 24288));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [13] [5] = 19;
                    arr_7 [10] &= (arr_3 [0] [3] [6]);
                    var_17 = (min(var_17, ((((max(321010852, 1890209775)) % ((min(-var_1, (((18446744073709551601 || (-2147483647 - 1))))))))))));
                    var_18 = ((-(((arr_0 [4] [4]) | ((var_11 ? var_4 : var_11))))));
                }
            }
        }
    }
    #pragma endscop
}
