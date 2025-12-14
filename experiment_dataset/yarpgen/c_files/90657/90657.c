/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((max(-1, 4294967295))))));
    var_13 &= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, var_8));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (((arr_0 [i_1]) << (arr_1 [8] [i_1])));
                    arr_9 [i_0] [i_0] = (max((arr_6 [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_0])));
                    arr_10 [i_0] [1] [0] = ((((((arr_5 [i_1 + 2] [i_0]) + (arr_5 [i_1 - 1] [i_0])))) ? ((((((arr_4 [i_0]) ? var_10 : var_2))) ? (1 | 1) : var_8)) : (((arr_0 [i_0]) ? 106 : 8059054770064571614))));
                    arr_11 [i_2] &= ((((((~191) | (1650868821 ^ 1684481215150849641)))) ? (max((min((arr_4 [3]), var_3)), (arr_2 [5]))) : (!var_8)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {
                var_15 = (((arr_13 [i_3] [9]) % 1684481215150849641));
                var_16 = (~(arr_15 [i_3 + 2]));

                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    arr_21 [1] [20] [i_5 - 2] |= max((-var_2 - 4), (((var_0 > (arr_17 [i_4 - 1] [3] [i_5])))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_24 [i_3] [i_3] [i_6] [i_6] [i_3] = (arr_13 [7] [i_4]);
                        var_17 = (var_0 + var_0);
                        arr_25 [i_3] [i_6] [i_5] [i_6] [i_6] = ((4294967290 >= (var_6 < var_2)));
                    }
                    var_18 &= (max(29, ((max((arr_17 [i_4] [i_4 + 2] [16]), 237)))));
                }
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    arr_28 [i_3] [i_4] [i_4] [i_7] = ((((-var_10 ? (~4294967273) : (((var_4 ? var_5 : 64))))) > ((~(2432465577 + var_0)))));
                    var_19 = (min(var_19, ((((((arr_18 [i_3 - 2]) ? (arr_18 [i_3 + 1]) : (arr_20 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_7 - 1]))) <= ((((var_9 != (((67 << (((arr_27 [i_3] [i_3] [i_3]) - 2910847398))))))))))))));
                    var_20 = ((670155926 >= ((((arr_16 [8]) & ((var_4 ? var_11 : (arr_12 [i_3]))))))));
                    var_21 ^= ((((((max(237, var_10))) / 1236991434))));
                    var_22 = (max(var_22, (((!(((351122395 % (arr_13 [i_4 + 1] [i_4 + 2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
