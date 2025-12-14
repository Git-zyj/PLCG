/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (var_11 % -5407233757656555713)));
                arr_5 [i_0] [i_0] [i_0] = var_10;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_15 = 43418;

                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    var_16 ^= (~402653184);
                    var_17 -= (((-353595990 / 3870089236841121656) / var_1));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        var_18 = (max(var_18, ((max(((1 ? -4 : (!402653184))), var_3)))));
        arr_16 [i_5] [i_5] = (var_11 * -1);
    }
    var_19 = (max(var_3, (max(-var_3, var_2))));
    #pragma endscop
}
