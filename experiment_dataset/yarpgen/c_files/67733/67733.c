/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        arr_2 [i_0] [0] = (min(((!(!2147483628))), (((!-37) || (!255)))));
        var_13 = ((((((~15) & (arr_0 [i_0])))) ? (((arr_0 [i_0]) | (arr_0 [i_0 + 3]))) : (((~1) | ((min(4, 75)))))));
        var_14 = (max(var_14, var_7));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (arr_3 [i_0 + 2]);
                    arr_8 [i_1] [i_1] [i_1] &= ((((min(var_9, 19273))) ? ((((arr_4 [i_0]) ? (16772994006795002571 && -20492) : (!8767853558930208695)))) : (((arr_3 [8]) ? (arr_5 [i_2] [i_0 + 1]) : (((arr_3 [i_0]) ? 16582682385640606176 : 1))))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        var_16 &= ((~(((arr_10 [i_3 + 3]) & (~17669)))));
        arr_11 [i_3] = ((!(arr_10 [i_3])));
        arr_12 [i_3] = ((+(((arr_9 [i_3 + 3]) ^ (((arr_9 [i_3]) ? var_11 : var_9))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                var_17 = (min(var_17, var_7));
                arr_21 [i_4] [i_5] = ((((((arr_19 [i_4 - 2] [i_4 - 1]) >> (63 - 58)))) | ((((var_5 ^ (arr_17 [21] [i_5] [i_5]))) << (((arr_18 [i_5]) >> (((arr_19 [i_4 - 1] [i_5]) - 171))))))));
            }
        }
    }
    var_18 = ((!((max(var_3, var_2)))));
    #pragma endscop
}
