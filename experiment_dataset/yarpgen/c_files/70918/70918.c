/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] = ((((((arr_2 [15] [15]) & (arr_7 [i_0 - 2] [i_0] [i_0])))) ? (arr_5 [i_1 - 1] [i_0 + 3]) : ((-16 ? var_12 : 3916632155711244750))));
                    var_13 ^= (((arr_6 [i_0 + 2]) ? (arr_0 [i_1 - 1] [i_1 - 1]) : ((((arr_3 [i_0] [i_0] [i_0]) * (arr_7 [i_2] [i_1] [i_0 + 3]))))));
                }
            }
        }
        var_14 &= 2039356824937336607;
        var_15 = (min(var_15, -12637));
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                {
                    var_16 = 8556;
                    var_17 = (((((!-122) != (arr_14 [i_4]))) ? ((((arr_16 [i_4] [i_4] [i_4]) - ((((var_1 || (arr_13 [i_4])))))))) : (min(((8556 ? -83 : 18446744073709551599)), (max(var_9, var_5))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((min(((((arr_18 [i_7 - 1] [i_3] [i_5] [i_3 + 1]) + (arr_12 [i_3] [i_4 - 2] [i_3])))), ((var_2 % (max(5, 2039356824937336607)))))))));
                                var_19 = 8774137183637450162;
                                var_20 *= ((34 || (((~((-(arr_15 [i_6] [i_3] [i_3]))))))));
                                arr_23 [i_4] [i_6 + 1] [i_5] [22] [i_4] = max(68, -112);
                                var_21 = -15679320545573065896;
                            }
                        }
                    }
                }
            }
        }
        var_22 = var_11;
    }
    var_23 = (max(var_23, (((var_8 - ((((((var_9 ? var_11 : var_0))) || 2039356824937336615))))))));
    #pragma endscop
}
