/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] &= -32767;
                    arr_8 [i_2] [i_1] [i_0] = (!8841);
                }
            }
        }
        var_10 = -1;
        var_11 += (-(arr_6 [i_0] [i_0] [i_0] [i_0]));
        var_12 = -var_8;
        arr_9 [i_0] = -22421;
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_13 = (((((max(0, 27952)))) ? (var_0 - 27952) : ((-(arr_6 [i_3] [i_3] [i_3] [i_3])))));
        var_14 = 22421;
        arr_12 [i_3] [i_3] = -27973;
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_15 = (-603 - 1809997398);
        arr_16 [i_4] = (min(((-3656 - (arr_5 [i_4] [i_4]))), (((!(var_2 >= var_1))))));
        var_16 += var_8;
    }
    var_17 = (!var_0);
    var_18 = 8812;
    #pragma endscop
}
