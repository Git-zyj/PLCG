/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = min((min(var_11, var_0)), (max((var_9 + var_6), var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (arr_4 [i_0]);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_3] [5] = (((((((((arr_3 [i_2] [i_3]) && (arr_7 [i_0] [10] [i_2] [10])))) != ((~(arr_3 [i_0] [i_0])))))) >> (((arr_2 [i_0]) + 6676379516215915427))));
                        var_16 += arr_10 [3] [3] [i_2] [i_3] [i_0];
                        var_17 &= var_10;
                    }
                    arr_12 [i_0] [i_0] [i_0] = 4294967295;

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_18 = (arr_16 [i_0] [i_1] [i_1] [2] [12]);
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = 18446744073709551604;
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, (((-((var_10 * (var_6 % var_10))))))));
    #pragma endscop
}
