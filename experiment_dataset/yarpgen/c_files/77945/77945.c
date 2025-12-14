/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 = ((((63468 && (arr_0 [i_0]))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : -28367)) : (arr_2 [i_0])));
        var_12 = (((arr_1 [i_0]) ? (var_10 >> var_2) : (arr_2 [i_0 + 3])));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_13 += (+-var_10);
        var_14 = (max(var_14, ((((((arr_4 [i_1] [i_1]) ? (((0 % (arr_3 [i_1])))) : ((var_7 << (var_6 - 918758586)))))) ? ((-(((3793517984 <= (arr_3 [i_1])))))) : ((((min((arr_3 [i_1]), (arr_4 [i_1] [9])))) ? (((!(arr_3 [i_1])))) : (((arr_4 [i_1] [i_1]) ? 1 : (arr_3 [i_1 + 1])))))))));
        var_15 = (((!((0 == (arr_4 [1] [i_1 + 1]))))) && 1);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    var_16 = ((((-((-23205 ? 1 : 3230760888)))) ^ (((((65535 ? -1192125514 : (arr_9 [i_3]))))))));
                    var_17 = (min(var_17, var_5));
                    var_18 = (~var_5);
                    var_19 ^= (20916 << (-var_9 + 94));
                    var_20 = (min(var_20, ((((min((arr_9 [4]), 1)))))));
                }
            }
        }
        var_21 = ((1 ^ ((~(1 | 1)))));
        var_22 ^= 20;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_13 [i_5] [i_5] = ((((-21 ? 1 : 0)) >> (2422278240 - 2422278212)));
        var_23 = (((!var_9) * (arr_9 [i_5])));
        var_24 = (((~(arr_7 [i_5]))));
        var_25 = (min(var_25, (((1 ? 7085703210125502768 : 17592169267200)))));
    }
    var_26 = var_0;
    #pragma endscop
}
