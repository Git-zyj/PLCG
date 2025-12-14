/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_18 ^= (((((45 * (arr_2 [i_0 - 2])))) / (((((1417915338 ? (arr_0 [i_0 + 1]) : (arr_1 [i_0] [i_0])))) ? (max((arr_1 [i_0] [i_0]), (arr_2 [i_0]))) : (min((arr_0 [i_0]), (arr_1 [i_0] [i_0 + 1])))))));
        arr_3 [i_0] = (max(((1417915337 ? 1656562184 : (arr_0 [i_0 - 2]))), (max((arr_0 [i_0 - 2]), (arr_1 [i_0 - 1] [i_0 + 1])))));
        var_19 = ((1656562158 ? 1934073141 : 439110173));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = 131071;
        var_20 = -11;
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_17 [i_4] [i_2] [i_2] = (max((max(2638405112, (arr_6 [i_2 - 1]))), ((max(16776704, 81)))));
                    var_21 = (arr_8 [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
