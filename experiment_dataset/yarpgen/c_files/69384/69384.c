/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((var_1 ? ((~((var_5 ? 0 : var_3)))) : (max(1173227141730311473, (~-4629945429221413227)))))));
    var_13 += (~15014554234629651300);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_4 [i_1] [i_1 - 1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = 4095;
                            var_15 |= (((~((var_0 ? 28 : (arr_0 [i_0]))))));
                            var_16 = ((((((max(var_3, (arr_8 [17] [17] [i_0])))) ? var_5 : (6138846960485789374 ^ var_2))) < (((arr_4 [i_1] [i_1 + 1] [i_1 + 1]) ? (arr_4 [i_1] [12] [i_1 + 1]) : (arr_4 [i_1] [11] [i_1 - 1])))));
                            var_17 = (min(var_17, (((((((var_7 <= ((var_3 ? (arr_4 [i_2] [8] [i_2]) : 0)))))) & (~var_1))))));
                            arr_10 [i_0] [i_1] [i_2] [1] [i_2] = ((~(min(var_11, (~20)))));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_0;
    #pragma endscop
}
