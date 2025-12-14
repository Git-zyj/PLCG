/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = ((((((1 * 1267713686) == 1))) >> var_2));
    var_21 = ((((var_4 < var_15) && -1399112694)) ? var_5 : (((var_18 == (var_13 > -4334835685904397275)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_22 = (max((arr_4 [i_0 + 2] [i_0 + 3]), (+-2095104)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_0] = ((((max(((var_4 ? var_12 : var_12)), (((var_15 >> (var_12 - 3293847438))))))) && 531019275));
                            var_23 = ((((((((1399112672 ? var_13 : 1))) ? 22 : var_2))) ? (max(var_15, (max((arr_2 [i_0] [i_0]), 54)))) : (arr_4 [i_0 + 3] [24])));
                            var_24 = (((((max(1, (max(var_4, var_1)))))) % (((((var_9 >> (var_3 - 357152613892009681)))) ? 50 : (arr_1 [i_2])))));
                        }
                    }
                }
                var_25 = -0;
            }
        }
    }
    #pragma endscop
}
