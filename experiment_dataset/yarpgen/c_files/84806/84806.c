/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 ^= (arr_2 [i_0]);
        arr_3 [i_0] = var_3;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 ^= (arr_6 [i_0] [i_1] [3]);
            arr_7 [i_0] [i_1] = (arr_2 [i_1]);

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_19 = 19582;

                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    var_20 = ((var_13 >> (-19599 + 19602)));

                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        var_21 *= (((869275805038935880 ? var_11 : (arr_4 [12]))));
                        arr_15 [i_2] [i_1] [i_2] [i_1] [i_4] = ((887839446496805190 & (arr_1 [0] [i_3 - 2])));
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_18 [i_5] [i_2] [i_0] [i_2] [i_0] = var_4;
                        var_22 += (arr_5 [i_0] [i_1]);
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_23 *= -19606;
                        arr_22 [i_1] [1] [i_1] [i_2] [1] [i_3] = ((arr_14 [i_2] [0] [i_1] [i_1]) ? -1603377205998175000 : (arr_19 [i_0] [i_0]));
                    }
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        var_24 = 9208;
                        var_25 = (!(arr_14 [i_2] [i_7 + 2] [i_2] [i_3]));
                        var_26 ^= 16;
                        arr_27 [i_3] [i_2] [i_2] [i_3] [i_2] = 5279295681021043198;
                    }

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_30 [i_0] [i_0] [i_2] [i_0] [i_8] = -19606;
                        arr_31 [i_2] [4] [i_2] [i_1] [i_1] [1] [i_2] = (var_6 - var_12);
                    }
                    arr_32 [11] [i_2] [i_2] [i_0] = ((((var_8 ? -6790993565902868565 : (arr_0 [i_0]))) <= 536866816));
                }
                var_27 = -var_4;

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_28 ^= arr_25 [i_1] [i_1] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1];
                        arr_37 [i_2] = 4285712877313131104;
                        var_29 = (((arr_28 [i_0] [i_1] [i_2] [i_2] [i_10 - 1]) / (arr_28 [i_0] [i_1] [i_0] [i_2] [i_10 - 1])));
                        arr_38 [i_0] [i_2] = -638091160;
                        arr_39 [i_0] [4] [1] [i_2] [i_1] = ((-((16126804537768852160 ? var_4 : -1836688171197527045))));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_30 = (max(var_30, 309887957));
                        var_31 = ((((((-19606 + 2147483647) << (((var_5 + 752447751) - 17))))) & (arr_34 [i_2])));
                    }

                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_46 [i_2] = ((~(((arr_17 [1] [i_9] [i_2] [i_2] [i_1] [i_0] [1]) ? (arr_8 [i_2] [i_2] [i_9] [1]) : var_1))));
                        arr_47 [i_0] [i_2] [i_2] [i_2] [i_12] = 6790993565902868563;
                    }
                }
                arr_48 [i_0] [i_0] [i_2] = 1;
            }
            var_32 = (min(var_32, ((((arr_0 [i_0]) != -4005534665796097892)))));
        }
    }
    var_33 &= var_0;
    var_34 = var_0;
    var_35 = max(8613916840533646276, (((max(-638091151, 3611912001561933680)) ^ var_12)));
    #pragma endscop
}
