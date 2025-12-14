/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = var_13;
                arr_5 [i_0] [i_0] [i_0] = (((((((max(255, var_14))) - var_14))) ? ((var_2 ? 8 : (var_0 | var_9))) : (((((var_3 / 11337468100500962847) && (var_12 / var_1)))))));

                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    arr_10 [i_0] = (((((var_10 | -2487062749787896702) ? (min(var_2, 1924026063230714736)) : ((var_12 ? var_9 : 28)))) / ((((96 <= ((116 ? 130 : var_8))))))));
                    var_16 = (var_10 ? ((-108 ? var_1 : var_7)) : (((var_3 ? var_7 : (7109275973208588786 != 235)))));
                }
            }
        }
    }
    var_17 = (122 > var_12);
    var_18 = ((((((25 ? 121 : var_9)) / var_14)) & (((((((var_5 ? var_13 : 8))) < ((var_3 ? 18446744073709551607 : -28))))))));
    #pragma endscop
}
