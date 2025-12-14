/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [8] = ((((max(var_14, (arr_0 [i_0] [i_0])))) ^ (((arr_0 [i_0] [i_0]) ? var_9 : 2406703889655746405))));
        var_17 = (min(var_17, ((max((((((((arr_1 [17]) + 511))) ? var_10 : (arr_1 [0])))), (min((15382232726697416089 + 0), (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = (((((-1670261175 ? (arr_0 [i_0] [i_0]) : ((var_6 - (arr_0 [i_0] [3])))))) ? -1 : ((((min(8, var_15))) ? (((min((arr_1 [22]), var_12)))) : 1185069714850849467))));
        var_18 = (max(((min((arr_0 [i_0] [i_0]), 1717529389))), (((arr_1 [i_0]) ? 9522544891240747975 : (arr_1 [i_0])))));
        var_19 = 1;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] = 15285;
        var_20 = ((((min(1, 30))) ? 1670261174 : ((var_10 ? -1670261175 : 15))));
        arr_9 [i_1] [i_1] = (min(16, (min((max(1, 607498426)), (arr_0 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] = (2523154048080376471 < 15923590025629175136);
        arr_13 [i_2] = ((~(arr_10 [i_2 - 1])));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_21 = (min(var_21, var_7));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_22 -= ((((arr_24 [i_3] [i_3 - 1] [i_3]) >= var_0)) ? (((min(2975, -13925)))) : (arr_18 [i_3 - 1] [i_3 - 1] [i_5]));
                    var_23 = 18446744073709551603;
                    var_24 = (((arr_6 [i_3 - 1]) ? (min(0, (arr_24 [i_3 - 1] [i_3 - 1] [i_3 - 1]))) : (arr_24 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                }
            }
        }
        var_25 = (min((arr_19 [1] [1] [i_3]), 7));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    arr_34 [i_6] [i_8] = 40303;
                    var_26 = ((var_12 == ((((min(1, (arr_32 [i_6] [1] [i_6] [i_6])))) ? ((2047 ? 1 : 1444077230)) : (1 % 15)))));
                }
            }
        }
    }
    var_27 = var_2;
    #pragma endscop
}
