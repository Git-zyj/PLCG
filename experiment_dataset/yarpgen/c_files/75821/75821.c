/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_16 = var_8;
            var_17 &= var_1;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_0] = 4;
            arr_11 [i_0] [i_2] [i_2] = (((((((arr_7 [i_2] [i_2] [i_0 + 1]) / 3841113192)) > ((((112 > (arr_3 [i_2]))))))) ? (((((var_7 | (arr_5 [i_0 - 1] [i_0 - 1])))))) : 2305843009212645376));
            var_18 = (((min(52309, 1040187392)) + (!var_14)));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            arr_14 [i_0] = 77;
            var_19 = (((arr_6 [i_0 + 1]) ? 0 : 536870912));

            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                var_20 *= (-(arr_2 [i_3 + 2]));
                var_21 = var_5;
            }
            arr_17 [i_0] [i_0 - 1] [i_0] = -var_10;
        }
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            var_22 -= (((~(arr_12 [i_0 + 3]))) | ((~(arr_12 [i_0 + 3]))));

            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                var_23 ^= ((536870912 != (((arr_5 [i_0 + 3] [i_5 + 3]) ? (arr_8 [i_0 + 1]) : 1040187413))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_24 ^= (arr_4 [6]);
                            var_25 ^= -var_6;
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                arr_31 [i_0] = ((+(min((1 / var_4), 1))));
                var_26 = ((-((0 | (arr_30 [i_9] [i_9 + 1] [i_9 + 1] [i_9])))));
                var_27 |= (((!(~2114182640503462333))) ? var_15 : ((~(arr_4 [i_9 + 1]))));
            }
            var_28 = (0 / 536870921);
            arr_32 [i_0] = (arr_30 [i_5] [i_5 - 2] [i_5 - 1] [i_5 + 4]);
            arr_33 [i_0] [i_5 - 1] [i_0] = ((1 + 27683) + (arr_25 [i_0] [i_5 + 3] [1] [i_5 + 4]));
        }
        var_29 = (min(var_29, ((max((3680803771 ^ 39), (((arr_28 [i_0]) ? 843697308342416500 : (arr_28 [i_0]))))))));
        var_30 = var_3;
    }
    var_31 = -var_2;
    var_32 &= (max((max(((1 ? 2346770665 : -8)), var_10)), (43146 ^ var_14)));
    var_33 = (min(var_13, var_8));
    var_34 -= (~1759502566);
    #pragma endscop
}
