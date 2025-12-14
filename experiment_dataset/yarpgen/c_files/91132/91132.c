/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, 199));
                    var_14 *= ((((max((arr_3 [i_2] [i_2 + 2] [i_0]), 0))) && (864122225 || 7)));
                }
            }
        }
        var_15 = (max(var_15, 1));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_16 = (arr_6 [i_3]);
        var_17 = (max((var_0 >> 1), ((max(16, (arr_6 [i_3]))))));
    }
    var_18 = (min(var_18, -419982198173482607));
    var_19 = var_6;

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_20 = (min((arr_11 [i_4]), (((arr_8 [i_4]) ? ((~(arr_8 [i_4]))) : (arr_8 [i_4])))));
        arr_12 [i_4] = ((-((~((((arr_10 [i_4] [i_4]) == (arr_8 [2]))))))));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            var_21 = (max(var_21, ((-(arr_8 [i_4])))));
            var_22 = (((arr_13 [i_5 + 2] [i_5]) ? (arr_10 [i_5 + 3] [i_5 + 4]) : (arr_10 [i_5] [i_5 + 3])));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_17 [i_4] [9] [i_6] = ((((min((arr_11 [i_6]), (arr_15 [i_6])))) ? ((((((arr_9 [1]) ? var_10 : 1))) ? (arr_14 [i_4]) : -583230841)) : ((((~1531597991) || 38708)))));
            arr_18 [i_4] [6] [6] = (min((((!(arr_8 [i_6])))), (arr_10 [i_4] [i_6])));
            var_23 = var_4;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            arr_21 [i_4] = (((arr_9 [i_4]) && (arr_20 [i_7] [i_7] [i_7 + 1])));
            var_24 = (min(var_24, ((((((var_5 % (arr_13 [i_4] [i_7])))) || (((4294967290 | (arr_14 [i_7])))))))));
        }
    }
    #pragma endscop
}
