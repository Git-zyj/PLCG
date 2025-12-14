/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(12430932948103015831, (min(12430932948103015854, 2081605035))))) ? ((((!(((var_6 ? 15137882221130410058 : 6015811125606535785))))))) : var_11));
    var_19 = var_5;
    var_20 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (arr_2 [i_2] [1]);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [i_3] = (((var_15 ? 1 : var_2)));
                        var_21 = (max(var_21, (arr_4 [i_0] [i_1])));
                        var_22 = (max(var_22, (((203 * (arr_1 [i_0]))))));
                        var_23 = (max(var_23, var_5));
                        arr_14 [i_0] |= var_9;
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_17 [i_4] [i_2] [i_1] [i_0] = (((arr_6 [i_1] [i_4]) ? var_8 : var_8));
                        var_24 = (min(var_24, (((129262258799702237 ? var_7 : (arr_9 [i_4] [5] [i_1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
