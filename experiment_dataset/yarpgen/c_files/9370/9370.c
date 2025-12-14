/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [1] = (!53716);
                arr_7 [i_0] [i_1 - 1] = (((((((2197039136 ? -25040 : var_17))) * 18446744073709551605)) << ((((var_15 >= var_16) >= (var_16 * var_15))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_3] = (((((~var_1) >= var_7))) >= 53716);
                            arr_14 [i_0 + 1] [i_0] = -11820;
                            arr_15 [i_0 + 1] = ((((((~(((-25040 + 2147483647) << (11767941007317997654 - 11767941007317997654))))) + 2147483647)) << ((((arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0 + 1]) >= (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0 - 1]))))));
                            arr_16 [i_0] [i_0 + 1] [17] [i_0 - 1] = ((~((var_5 << (-var_11 + 223)))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, var_17));
    var_20 += (min(var_8, var_2));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            {
                arr_22 [i_5 + 1] [i_5] = (((--39) << ((760293474695285583 ? (!var_3) : (var_9 * 151)))));
                var_21 = min(var_12, var_7);
            }
        }
    }
    #pragma endscop
}
