/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((!var_5) ? (var_6 || var_0) : var_2)) > (-var_5 > var_6)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] = (((((((((arr_3 [i_0] [i_0]) ? (arr_3 [i_1 + 1] [i_2]) : (arr_3 [i_0] [i_0])))) / (arr_0 [1] [i_1 + 1])))) ? ((2300976677 ? -20 : (17 >> 20))) : (18446744073709551615 < 20)));
                    arr_8 [13] [i_0] = ((-7695347360193453746 ? 244 : 13));
                    var_14 += ((~(((((21 ? 52262 : -141))) ? (arr_5 [19] [i_1] [i_0]) : (arr_2 [i_1 - 2])))));
                }
            }
        }
        arr_9 [i_0] [i_0] |= ((~14030223633051442382) | ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_14 [i_3] = ((((((((arr_13 [i_3] [i_3]) ? (arr_13 [12] [i_3]) : (arr_10 [i_3])))) ? (arr_13 [19] [9]) : (arr_13 [i_3] [i_3]))) * ((((arr_11 [i_3]) != (arr_11 [i_3]))))));
        var_15 = ((+(((arr_13 [i_3] [i_3]) ? (arr_13 [i_3] [i_3]) : (arr_13 [i_3] [i_3])))));
    }
    #pragma endscop
}
