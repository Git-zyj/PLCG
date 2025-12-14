/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(((min(var_1, (7 | 7)))), var_5);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = 11;
        var_16 = var_7;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 -= 1817524771;
        var_18 = ((((var_6 ? var_7 : (arr_3 [i_1] [i_1]))) | (180186608 / 29)));
        var_19 = (max(var_19, (((((((min(4294967286, (arr_0 [i_1])))) <= ((var_7 ? var_9 : -5750)))) ? ((max(16005, (((!(arr_1 [i_1]))))))) : 55266)))));
        arr_5 [9] = (((((((max((arr_3 [i_1] [i_1]), -69))) ? (arr_4 [i_1]) : (arr_4 [0])))) ? (0 + var_2) : var_5));
        arr_6 [i_1] [i_1] = (245 * 46);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (arr_1 [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_21 = (min((((arr_4 [i_2]) ? (arr_4 [i_2]) : 691869466)), (((var_0 > ((var_8 ? (arr_15 [i_4]) : var_10)))))));
                        var_22 = (min(var_22, var_0));
                        var_23 = ((((-(arr_18 [i_4] [i_2]))) <= 2781676091308353531));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    var_24 += (arr_10 [i_6]);
                    var_25 = 55266;
                }
            }
        }
        var_26 = (arr_10 [i_2]);
    }
    var_27 = -27797;
    var_28 |= var_10;
    #pragma endscop
}
