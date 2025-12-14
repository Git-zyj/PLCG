/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = ((127 ? 0 : 9223372036854775797));
    var_18 = ((var_9 / (min(1, -var_10))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [6] = 15991575127533541871;
        arr_3 [i_0] [0] = (max((arr_1 [14]), (((arr_0 [i_0]) < (-2147483647 - 1)))));
        arr_4 [14] [i_0] = ((~(((arr_0 [i_0]) + (arr_0 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = (max(((min((arr_1 [i_1]), (arr_1 [i_1])))), (min(27, 1))));
        arr_9 [i_1] = 1;

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            arr_12 [i_2] = (~2455168946176009744);
            arr_13 [i_2] [i_2] [i_2] = ((~(((!(arr_1 [i_2]))))));
        }
        arr_14 [i_1] = (max((!2455168946176009744), (arr_7 [i_1] [i_1])));
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        arr_18 [i_3] = (((-73 < 2455168946176009752) > (((!((((arr_17 [i_3]) ? 15991575127533541871 : -73))))))));
        arr_19 [i_3] [i_3] = (max(((7408959988610715608 ? ((-194328797 & (arr_16 [i_3] [i_3]))) : (arr_15 [i_3]))), ((~(arr_16 [i_3 - 2] [i_3 + 1])))));
    }
    #pragma endscop
}
