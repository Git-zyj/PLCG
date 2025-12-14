/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 ^= var_10;
        var_13 = (max(var_13, -27948));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 -= (((arr_3 [i_1]) / (arr_4 [i_0] [i_0])));
            arr_5 [i_0] [13] [13] = var_7;

            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                arr_9 [i_0] [14] [i_0] = -27949;
                arr_10 [i_0] [i_0] [i_2] = ((~(arr_6 [i_0] [i_2 + 3] [i_2 + 3] [i_0])));

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_14 [i_0] [i_0] [i_0] [i_3] = (~(arr_13 [i_3] [i_2] [i_1] [i_0]));
                    var_15 = ((var_0 ? 4450527557797878208 : (arr_7 [i_3] [i_2 - 1] [i_2] [i_2 + 1])));

                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_16 = ((((((arr_7 [i_0] [i_2] [i_2] [i_2]) ? 229 : var_5))) ? (arr_11 [i_2 - 1]) : var_3));
                        var_17 &= 1188186314;
                        var_18 *= (arr_15 [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 3] [i_3]);
                        var_19 = ((~(arr_17 [i_0] [i_4] [4] [i_4 + 2] [i_4 + 1] [i_0])));
                        var_20 = (~(arr_8 [i_4] [i_4] [i_4 - 1] [i_2]));
                    }
                    var_21 = (0 - var_5);
                }
                var_22 = (arr_18 [i_0] [i_1] [i_1] [i_2] [i_1] [1]);
                var_23 += (254 ^ 6052209758776080204);
            }
            arr_19 [8] &= (((17313484328517496649 || 13996216515911673412) ? (~182) : -4450527557797878208));
            arr_20 [14] [18] &= (arr_4 [i_0] [i_1]);
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_24 = ((((min((arr_12 [i_5]), (arr_1 [i_5])))) ? (min((arr_1 [i_5]), var_9)) : (((max((arr_1 [i_5]), var_0))))));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_32 [i_8] [i_5] [i_5] [i_5] = (max(((((arr_30 [i_5] [i_6] [i_7] [i_8] [i_8]) - ((var_6 ? var_5 : 162))))), ((((max(203, (arr_26 [i_7] [i_6] [i_6] [i_5])))) ? (min(1792, 17313484328517496673)) : (max(var_1, (arr_28 [i_5] [i_6] [i_6] [i_5])))))));
                        arr_33 [i_5] [i_5] = (arr_25 [i_5] [i_5]);
                    }
                }
            }
            arr_34 [i_5] = (min(((max(229, (arr_21 [i_5] [i_6])))), ((-(min(12, 12394534314933471403))))));
            var_25 = (min(var_25, ((((((15333387434563081930 ? 18446744073709551615 : 6052209758776080212))) ? ((-(min(13996216515911673414, (arr_0 [i_5]))))) : (!255))))));
            arr_35 [i_5] [i_5] [i_6] = ((((!(arr_17 [i_5] [i_5] [i_5] [22] [i_5] [i_5])))));
        }

        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            var_26 = (min((min(15900, (((arr_18 [15] [i_9] [i_5] [8] [i_9] [i_9]) ? (arr_3 [i_9]) : 229)))), var_11));
            var_27 = (((((~(arr_0 [i_5])))) ? (min(402653184, -1784)) : ((-(!190)))));
        }
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_28 ^= (max(((~(min(var_9, (arr_8 [i_10] [i_10] [i_10] [i_10]))))), ((max((arr_7 [i_10] [i_10] [i_10] [i_10]), (!118))))));

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_43 [i_10] [i_11] = ((!((min((arr_39 [i_11]), (arr_39 [i_10]))))));
            var_29 = (arr_42 [i_10] [i_11] [i_11]);
        }
        var_30 = min((max((511 * 18446744073709551615), (arr_1 [i_10]))), (((var_10 * var_10) ? -29159 : var_1)));
    }
    var_31 = var_3;
    #pragma endscop
}
