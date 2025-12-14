/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [21] [i_0] = arr_5 [i_0] [2] [1] [i_0];
                    arr_7 [i_0] [i_1] [17] [i_0] = ((((-((((arr_5 [i_0] [i_1] [19] [14]) > (arr_4 [13] [i_0] [i_1] [16])))))) != (((var_10 == (max((arr_1 [i_2]), var_9)))))));
                    arr_8 [i_0] [i_1] = (((((arr_1 [i_0]) + (var_12 - var_5))) > (((arr_5 [i_0] [6] [i_1] [i_1]) / (((arr_3 [21] [20]) & var_8))))));
                }
            }
        }
        arr_9 [i_0] = (((arr_1 [14]) > (((max(var_11, var_13)) * var_5))));
        arr_10 [18] [4] = (((((arr_0 [22]) + var_7)) != ((((var_6 >= (arr_4 [i_0 - 1] [10] [10] [10])))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_3] [18] [i_4] = (((127 > 3635836622) - ((((arr_15 [i_4] [i_4 - 4] [i_4 - 4] [i_4 + 2]) && (arr_15 [2] [i_4 - 2] [i_4 - 3] [i_4 + 1]))))));
                    arr_20 [i_5] [i_4] = ((((arr_11 [i_3]) * (max(var_0, (arr_18 [13] [i_5] [i_5] [i_4]))))) * (((((arr_13 [i_4 - 2]) != (arr_13 [i_4 - 1]))))));
                }
            }
        }
        arr_21 [8] = (((max((arr_17 [i_3] [i_3] [i_3] [i_3]), (arr_17 [24] [i_3] [i_3] [i_3]))) >= (max((var_3 >= var_9), (max(var_13, var_13))))));
    }
    for (int i_6 = 4; i_6 < 8;i_6 += 1)
    {
        arr_24 [6] [2] |= (((((((arr_23 [i_6 - 1]) != var_4)))) != (((((arr_15 [20] [0] [0] [i_6]) ^ (arr_13 [2]))) >> (((arr_4 [i_6] [8] [i_6 - 2] [2]) - 2495210825))))));
        arr_25 [2] [i_6] = max((max(524287, var_8)), (((arr_4 [i_6] [i_6] [i_6 + 2] [i_6 - 4]) + (arr_4 [9] [i_6] [i_6 + 1] [i_6 - 4]))));
        arr_26 [i_6] [i_6] = (((((arr_22 [i_6 - 2]) * 1726998046)) >= 1349786764));
        arr_27 [i_6] = ((!(arr_4 [4] [i_6] [0] [i_6])));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    arr_34 [i_7] [i_9] [i_9] |= (1726998046 != 1704539983);
                    arr_35 [i_7] = arr_14 [i_7];
                    arr_36 [9] [17] [17] [i_7] = max(((((var_5 % (arr_12 [12]))) >> (((max(2412879156, 418804482)) - 2412879143)))), var_13);
                }
            }
        }
        arr_37 [i_7] = ((((((min(var_1, (arr_14 [i_7])))) && (32512 || 4294967295))) && (arr_12 [i_7])));
    }
    var_14 = (~((var_12 / (var_2 != var_9))));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            {
                arr_42 [21] [20] [9] = ((arr_32 [12] [i_10 + 3] [12]) * (arr_1 [i_10 + 3]));
                arr_43 [7] = -var_6;
                arr_44 [14] [i_10] [5] = max(var_4, (arr_11 [17]));
                arr_45 [i_10] [i_10] [i_10] = arr_41 [17] [0];
            }
        }
    }
    var_15 = var_0;
    var_16 = ((max(var_0, ((var_2 << (var_7 - 317469479))))) * var_10);
    #pragma endscop
}
