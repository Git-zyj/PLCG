/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((((arr_5 [3]) / ((-(arr_0 [i_1]))))));
                    var_15 = (((((107 * (((var_7 ? var_9 : (arr_5 [i_0]))))))) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : (arr_6 [i_0] [i_0] [i_1] [i_1])));
                    arr_8 [i_0] [i_1] [14] [i_2] = (((arr_1 [i_0]) > ((max(var_6, (arr_5 [i_0]))))));
                    arr_9 [15] [15] [i_2] = (((var_7 + -115) ^ (max((arr_6 [i_1] [i_1] [i_1] [i_1]), (arr_6 [2] [i_2] [2] [i_0])))));
                    var_16 = var_6;
                }
            }
        }
    }
    var_17 = var_1;

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_13 [i_3] = (i_3 % 2 == 0) ? (((((var_1 << (((arr_12 [i_3] [i_3]) + 7360514307216665031)))) % (arr_12 [i_3] [i_3])))) : (((((var_1 << (((((arr_12 [i_3] [i_3]) + 7360514307216665031)) - 4574623904228175272)))) % (arr_12 [i_3] [i_3]))));
        var_18 &= ((((115 > -24643) ? (((arr_10 [i_3] [i_3]) ? (arr_11 [i_3] [i_3]) : (arr_10 [i_3] [i_3]))) : (((~(arr_10 [i_3] [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_19 = ((-((var_5 % ((29171 ? var_0 : -7659606440200207984))))));
        var_20 = (arr_15 [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_21 = ((max(((max(var_4, (arr_1 [i_5])))), (((arr_21 [i_6]) + (arr_14 [i_5]))))));
                var_22 = var_12;
                arr_22 [i_5] [i_6] [i_5] = ((-(max(((min(255, (arr_16 [i_5])))), -var_3))));
            }
        }
    }
    #pragma endscop
}
