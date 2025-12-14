/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (69741423 + 0)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 ^= (((((490471770 % (arr_0 [i_0 + 1] [i_3 - 3])))) ? -1 : var_2));
                            var_14 = 2812427968;
                            arr_8 [i_0] [i_1] [i_1] [i_2 + 1] [i_2 + 1] [i_3] = (((((0 ? 2812427978 : 2812427972))) >= (((((0 ? -1088224289 : var_8))) & (var_6 ^ 8022081184231173924)))));
                            arr_9 [i_1] [i_1] [i_2] [i_3 - 4] = (arr_7 [i_3 - 4] [i_2 + 1] [i_1] [i_0 - 1]);
                        }
                    }
                }
                arr_10 [i_0] [i_1] = ((((((var_10 > ((var_4 ? var_8 : var_0)))))) + (max((((!(arr_3 [i_0 + 1] [i_1] [i_1])))), (max(0, var_7))))));
            }
        }
    }
    var_15 = var_10;
    #pragma endscop
}
