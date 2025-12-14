/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 *= ((((arr_1 [i_1 + 2]) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 + 1]))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 = ((~(((var_2 && ((((arr_3 [i_1]) ? (arr_8 [i_0] [i_1 - 2] [i_1 - 2] [0]) : var_1))))))));
                        arr_10 [i_3] = (min(-1739155031, 27918));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_13 += min(((max(-1739155035, -23))), (max(2097151, var_1)));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_4] = (-5 < var_8);
                        var_14 = ((((~(max((arr_8 [i_4 - 1] [i_0] [i_1 - 2] [i_0]), (arr_3 [i_0]))))) * (arr_4 [i_4] [i_0] [i_0] [i_0])));
                        arr_14 [i_0] [i_2] [i_0] [i_1 - 2] [i_0] |= (min(((!(arr_11 [i_1 + 1] [i_4 + 1] [i_1 + 1] [i_4 + 1]))), (-27919 && 607065902099398882)));
                    }
                }
            }
        }
    }
    var_15 = var_7;
    var_16 = ((var_8 && ((min((min(var_8, var_9)), (((var_6 ? var_3 : var_5))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            {
                arr_19 [i_6] = 1311095245;
                var_17 = 16384;
                var_18 = (max(var_18, -16384));
            }
        }
    }
    #pragma endscop
}
