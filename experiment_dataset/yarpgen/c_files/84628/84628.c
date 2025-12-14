/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (max(((min(var_5, (1 != 1)))), ((((max(138, -1))) >> (var_0 - 3630386580670639635)))));
    var_13 += (!var_8);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] &= (min(1542080137, (((!(!29292))))));
                    arr_8 [i_0] [i_0 + 4] [3] = 4294967295;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_14 = (~((31913 * (((arr_4 [i_3] [5] [i_4]) - 1)))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] [i_4] [0] [i_3] [i_7] [i_5] = (max(0, ((min(var_6, var_10)))));
                                arr_22 [i_3] [i_3] [i_5] [i_6] [1] = (-((max(10062, 207))));
                                var_15 = ((-((max((var_2 <= 1), (arr_0 [4]))))));
                                var_16 = 56259;
                                arr_23 [i_7] [i_3 - 1] [i_6] [i_3] [i_4] [i_3] [i_3 - 1] = (((1260565933 ? -1196608424 : -1260565934)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
