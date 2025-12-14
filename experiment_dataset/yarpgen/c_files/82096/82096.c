/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, var_9));
                    arr_10 [i_2] [i_1 - 3] [i_0] = (arr_2 [i_0]);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_14 &= 475489995;
                        var_15 = ((-(arr_8 [i_0] [i_0] [i_0] [i_0])));

                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            var_16 = (max(58, 1039534130));
                            var_17 = (max(((var_12 ? (arr_8 [i_1 - 2] [i_1 - 1] [i_2] [i_3]) : (arr_8 [i_1 - 1] [i_4 - 1] [i_4 + 1] [4]))), (((6576359451358019394 > (((max(111, -2)))))))));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_18 &= (arr_8 [i_0] [i_0] [i_0] [i_0]);
                            arr_19 [3] = max(127, -120);
                            var_19 |= (arr_5 [1] [i_3]);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_20 = ((((-(((var_12 != (arr_8 [i_1] [i_1 - 1] [i_1] [i_3]))))))) % ((~(((arr_1 [i_0]) % var_1)))));
                            var_21 = (min((((arr_14 [i_1 - 3] [6] [i_1] [i_2] [i_1 - 1]) ? -2178213951583610423 : (((arr_9 [i_3]) - (arr_17 [4] [i_0] [i_2]))))), var_6));
                            arr_22 [i_0] [9] [i_2] [i_3] [i_2] = (arr_8 [i_0] [i_1] [i_2] [i_1 - 1]);
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_22 = -5487448025366829418;
                            var_23 &= var_5;
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (var_12 / -var_3)));
    #pragma endscop
}
