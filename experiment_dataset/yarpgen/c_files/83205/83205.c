/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((~(((-2500 + 2147483647) << (1964942892 - 1964942892))))), ((min(var_11, var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = -1;
                    arr_9 [i_0] [i_0] = ((4 > (arr_3 [i_0])));
                    var_13 = (min(var_13, ((((((14 << (var_6 - 277142920))))) ? (((23 != var_9) & (arr_0 [i_1] [i_2]))) : (((!(((8 ? (arr_4 [10]) : (arr_4 [i_0])))))))))));
                    var_14 = ((arr_1 [i_0]) && (((((((arr_6 [4] [i_1] [16]) > (arr_4 [13])))) | (arr_5 [i_0] [i_1] [i_0] [i_1])))));
                }
            }
        }
    }
    var_15 = 109;
    #pragma endscop
}
