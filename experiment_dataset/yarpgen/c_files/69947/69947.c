/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 << (24576 - 24574)));
    var_11 = var_9;
    var_12 |= (min(((max(237, 1879048192))), (((((max(32767, 117))) < var_0)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [14] = (max((arr_2 [i_0]), (-1214918267 & 56030)));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [5] = var_5;
                    arr_11 [i_2] [i_1 - 1] [12] |= ((arr_0 [i_0]) - var_8);
                    arr_12 [i_0] [i_1 - 2] [i_2] [i_2] |= (((arr_2 [i_0]) > ((max(42454, 80)))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_15 [2] [2] = (((((42454 ? var_2 : var_5)) <= ((107 ? 11 : 42470)))));
                        var_13 += (23094 ? 23082 : 9514);
                        var_14 = 2237059347728453893;
                        var_15 ^= (max(121, 112));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_16 = 279223176896970752;
                        var_17 -= ((!((min((((7534790285334552604 ? var_0 : (arr_4 [10])))), (min(2237059347728453901, 255)))))));
                    }
                }
            }
        }
        var_18 ^= (((((arr_2 [i_0]) + (arr_2 [i_0]))) - ((((((arr_16 [i_0] [i_0] [i_0] [i_0]) || var_0))) * (0 < 255)))));
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        arr_20 [i_5] = (max(9223372036854775808, 65520));
        var_19 = (max(var_19, var_1));
        var_20 ^= 17;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_21 = (((((228 ? 56030 : -7757059204454853581)) == 105)));
                    var_22 = (max(var_22, (((var_2 || (((var_5 ? (arr_13 [i_6] [9] [i_5 + 1] [11] [i_5 - 2]) : var_3))))))));
                }
            }
        }
        var_23 = (min(var_23, ((min(1931396387, 2237059347728453887)))));
    }
    #pragma endscop
}
