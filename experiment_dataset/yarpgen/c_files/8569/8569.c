/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -1;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (((((var_4 ? var_13 : -28))) ? ((~(arr_1 [i_0]))) : ((((((40 ? -28 : var_1))) ? (((!(arr_1 [i_0])))) : (arr_0 [i_0]))))));
        var_19 = 32256;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (((var_5 ^ 25) % (((3563517897355364252 % -2337895255322059398) ? ((var_9 ? 3563517897355364252 : -2337895255322059417)) : (!1)))));
                    var_21 = (arr_2 [i_1 - 1] [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_22 = (max(var_22, (((!(arr_7 [i_3]))))));
        var_23 ^= (((!-30171) || ((1 || (arr_6 [14])))));
    }
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_24 = ((~var_6) ? ((((46891 ? -1686859060 : var_1)) >> (arr_7 [i_4]))) : (arr_4 [i_4 - 1] [i_4] [i_4 + 2]));
        arr_11 [i_4 + 2] = ((-((-(arr_5 [i_4 - 1] [i_4 + 1])))));
    }
    var_25 = (-var_3 ? (~641358969) : (137170518016 % -30172));
    #pragma endscop
}
