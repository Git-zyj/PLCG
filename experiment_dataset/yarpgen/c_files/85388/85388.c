/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = (min(var_14, var_12));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 = ((-(arr_1 [i_0 + 1])));
        arr_2 [i_0] = ((var_11 ? (524287 < var_12) : (4294443013 >= var_3)));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_16 = (max(4294443008, (arr_1 [i_1])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [7] [i_2] [i_3 - 2] [i_0] = (var_2 % (arr_7 [i_0 + 3] [i_0] [i_0] [i_0] [i_0] [i_0 + 1]));
                            var_17 = (((((54959 ? var_7 : 524287))) <= (arr_5 [i_2] [i_3])));
                            var_18 = var_4;
                        }
                    }
                }
            }
        }
        var_19 = var_8;
    }
    var_20 = var_2;
    #pragma endscop
}
