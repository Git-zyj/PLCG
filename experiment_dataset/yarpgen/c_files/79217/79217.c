/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_10 < ((30181 ? 24 : 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (15680291619980632264 / 113);
                var_12 = (max(((8060854406873415684 ? 8060854406873415673 : 3088698999)), 164));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_13 -= (((arr_7 [8]) ? (~-5118) : (arr_5 [1] [1])));
                    arr_14 [i_2] [i_2] [i_4] = (min((((max(58071, (arr_1 [i_4] [1]))))), ((0 / (min(10385889666836135942, 3))))));
                }
            }
        }
    }
    #pragma endscop
}
