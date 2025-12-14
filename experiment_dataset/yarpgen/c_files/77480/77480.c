/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 -= (((((arr_2 [i_0] [i_0]) & var_5)) * ((((!(arr_0 [0])))))));
        var_14 = (!2676587562295365666);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_15 = -321259921531989971;
        var_16 = (min(63033, ((-1 + (-32767 - 1)))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 = max(var_8, -8594008483611966598);
        var_18 = 5009068588224440980;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                arr_12 [i_4] = (max((((-(!321259921531989970)))), (max((arr_11 [i_3] [i_4]), (arr_11 [i_3] [i_4])))));
                var_19 = (max(1, (min(13437675485485110635, 13437675485485110628))));
            }
        }
    }
    #pragma endscop
}
