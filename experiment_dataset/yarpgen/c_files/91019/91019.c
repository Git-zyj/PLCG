/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 &= (max(((((min(-35744735, 156))) ? (((0 >> (100 - 100)))) : (arr_1 [i_0] [i_0]))), (((22988 ? 156 : 22992)))));
        arr_4 [4] [i_0] &= ((((0 > (arr_1 [i_0] [i_0]))) ? ((max(-var_11, ((-85 ? 40244 : var_15))))) : var_7));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] = (((arr_6 [i_1 + 3]) << (((arr_6 [i_1 + 3]) - 14))));
        arr_9 [i_1 - 1] &= ((-(arr_5 [i_1 - 2])));
        var_19 = (((42548 & var_14) ? ((((arr_6 [i_1]) >> (6625924171995205856 - 6625924171995205826)))) : ((3862544531 ? 2673188404 : 156))));
    }
    var_20 = (!var_6);

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_21 = arr_12 [i_2] [i_3];
            arr_16 [i_3] [1] = ((!(arr_11 [i_3])));
            arr_17 [i_2] [16] [i_3] = (arr_15 [i_2] [i_3]);
            arr_18 [21] = (((arr_10 [i_2] [i_3]) ? 35393 : var_17));
        }
        arr_19 [i_2] = (((arr_13 [i_2] [i_2]) ? ((var_4 ? var_17 : 85)) : (~2673188404)));
        var_22 = (~156);
        var_23 -= ((arr_12 [i_2] [i_2]) ? -5 : (arr_11 [i_2]));
    }
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        var_24 = (min(((((((~(arr_21 [i_4])))) && 0))), ((var_17 ? -1025079435511704444 : ((min(2254318901, 82)))))));
        var_25 = (((((89169460 | (arr_21 [20])))) != (((arr_20 [i_4 + 3] [17]) % (arr_20 [i_4 - 1] [i_4])))));
        var_26 = ((1073737728 ? ((~(arr_20 [i_4 - 1] [i_4 + 1]))) : (max((arr_20 [i_4 + 2] [i_4 + 2]), 96))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_30 [i_4] [i_5] [i_5] [i_5] = ((((((0 ? 0 : 17421664638197847168)) ? (arr_25 [i_4 + 3]) : 85))));
                        var_27 = arr_21 [i_7];
                    }
                }
            }
        }
    }
    var_28 = (min(((max(var_15, ((72 ? var_11 : 66))))), var_9));
    #pragma endscop
}
