/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = 0;
        arr_2 [i_0] [i_0] = (-9223372036854775807 - 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_10 [i_2] [0] [i_1] [i_2] = ((+((((arr_5 [i_0] [i_0] [i_0]) && ((((arr_3 [i_0] [1] [i_2]) ? var_1 : 7))))))));
                    arr_11 [i_0] [i_0] [i_1] [i_2] = (!-6067096368429352987);
                    var_14 = ((!(((-((((-32767 - 1) != var_0))))))));
                    var_15 ^= var_1;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_16 = (min(var_16, 1023));
                    arr_20 [i_3] [i_4] [i_4] [i_3] = max(((((arr_9 [i_4 + 1] [i_4 + 1] [9]) > (arr_9 [i_4 + 1] [i_4 + 1] [i_4])))), (min((arr_9 [i_4 + 1] [i_4 + 1] [i_5]), (arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
                }
            }
        }
        var_17 = ((!(((((var_3 * (arr_3 [i_3] [i_3] [i_3])))) >= (min(-9223372036854775795, (arr_12 [i_3])))))));
    }
    var_18 = (max(var_18, ((max(var_10, ((max(10, var_3))))))));
    var_19 = ((max(var_12, var_7)));
    #pragma endscop
}
