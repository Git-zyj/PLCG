/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 |= ((((-((var_8 / (arr_2 [i_0]))))) != ((~(arr_4 [i_1] [i_0])))));
                arr_5 [i_0] [i_0] [i_0] = ((-7350550319612546300 * (min(15714, ((-9 ? (arr_1 [i_0]) : (arr_0 [i_0])))))));
                var_11 = (min(var_11, (((((min((!var_2), 0))) ? (((((0 ? var_4 : -1080119687144398456)) >= 0))) : (((!(arr_1 [i_1])))))))));

                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    var_12 = (max(-1080119687144398427, var_9));
                    var_13 = (!var_6);
                    arr_9 [i_2 - 1] = ((var_0 ? (max(1363258266, (min(10, 4294967295)))) : ((max(-1742, (min(4294967295, 14567)))))));
                }
                arr_10 [i_0] [i_0] [i_1] = (min(4294967295, (((9 << (31164 - 31137))))));
            }
        }
    }
    var_14 = -var_9;
    #pragma endscop
}
