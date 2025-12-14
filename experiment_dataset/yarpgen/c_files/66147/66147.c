/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = arr_3 [i_0] [i_1];
                var_14 = 17207168324781923909;
                var_15 = min(((((var_2 == var_6) ^ var_1))), (arr_3 [1] [i_1]));
                arr_7 [i_0] = var_1;
                var_16 = ((~(((min((arr_4 [i_1]), (arr_2 [i_1] [i_1] [13]))) >> var_8))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = ((arr_0 [i_2]) > ((((arr_8 [i_2]) ? ((var_8 ? var_12 : var_5)) : (arr_5 [i_2])))));
        arr_11 [i_2] = (((var_2 & var_3) >> (((((var_3 ? var_2 : var_5)) == (min(var_4, (arr_3 [i_2] [i_2]))))))));
        var_18 ^= ((((((((var_10 ? 18446744073709551615 : (arr_9 [6])))) || (arr_0 [i_2]))))) / (((arr_0 [i_2]) >> (var_0 - 11870253034514028332))));
        arr_12 [i_2] [i_2] = (var_8 | var_10);
    }
    var_19 = var_6;
    #pragma endscop
}
