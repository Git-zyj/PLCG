/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_4);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = -1;
        arr_3 [i_0] = 2879755476495036111;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [3] [1] = (min(18446744073709551615, 262143));
                        arr_14 [i_3 + 3] [i_3] [i_2] [i_1] [i_0] [i_0] = (min((((65535 & 1) & var_11)), (!1)));
                        var_14 = ((min((((arr_4 [i_0] [i_3 + 3]) ? var_9 : 21055905)), ((2147483647 ? -31239 : -1)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_15 ^= (!var_5);
                    var_16 = (arr_6 [i_4] [i_4]);
                    var_17 = (((!(((107377194308728706 ? -69 : -69))))));
                    var_18 = 571957152676052992;
                    arr_23 [i_4] [i_4] [i_4] [i_4] &= (~-7340032);
                }
            }
        }
        var_19 = (((-(var_2 | var_7))));
        var_20 = min(((((((-974673365 ? 8271458224605398429 : 180))) ? (6310902317778773990 == 262142) : (arr_19 [i_4] [i_4] [i_4])))), (min(8271458224605398440, (((var_4 ? 149745875 : var_11))))));
    }
    var_21 = -262143;
    #pragma endscop
}
