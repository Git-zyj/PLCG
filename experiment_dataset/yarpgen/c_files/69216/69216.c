/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_10;
    var_17 |= ((+(max(((((var_13 + 2147483647) >> 0))), ((-559833301 ? var_8 : -559833301))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_18 += (534039443 ? var_13 : ((((min(-2029335127, (arr_4 [i_1])))) ? ((~(arr_0 [i_0 + 1] [i_0 - 2]))) : (arr_6 [i_1 - 1] [i_0 + 2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (arr_3 [i_3] [i_3]);
                                var_20 = (max(var_20, (((((((arr_1 [i_0 - 1] [i_1 + 3]) | (arr_2 [i_0 - 3] [i_1 + 3])))) || ((min(32755, (arr_1 [i_0 - 2] [i_1 + 2])))))))));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    var_21 = (min(0, 6878064704515571142));
                    var_22 = arr_0 [i_1] [i_0];
                }
                for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_23 = var_15;
                    var_24 = ((((max((arr_7 [i_1] [i_6] [15] [i_1 + 2]), (arr_5 [i_0] [i_0] [i_6])))) ? ((((min(var_9, 67108863))) ? ((1 ? 0 : -559833301)) : -1069615001)) : (((~(arr_11 [i_0] [i_0 - 1] [i_0 - 3] [i_1] [i_0 - 3] [i_6]))))));
                    var_25 ^= (arr_1 [21] [i_1 - 1]);
                    var_26 *= 64148;
                }
                arr_19 [i_0 - 2] [i_0] [i_0] = (((((4227858432 != (arr_1 [i_1 - 1] [i_1 + 1])))) == (min((arr_7 [i_0] [i_0] [i_0] [i_0]), var_4))));
            }
        }
    }
    var_27 = (((((var_5 | (~-32756)))) ? var_8 : ((max(9223372036854775807, 1)))));
    var_28 = (max(var_28, var_12));
    #pragma endscop
}
