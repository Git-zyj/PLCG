/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_13;
                        arr_14 [i_0] = (min((arr_2 [i_3]), (max((max(var_9, (arr_9 [i_0] [i_0] [i_0]))), (((-(arr_11 [i_3] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                        arr_15 [i_0] = (((((var_16 != ((6500157682285464426 ? -6500157682285464426 : -6500157682285464426))))) * var_10));
                        arr_16 [8] |= var_5;
                        arr_17 [i_2] [14] [i_2] [14] = (-6500157682285464426 || 18743);
                    }
                }
            }
            arr_18 [i_0] = ((-(arr_0 [i_0])));
        }
        arr_19 [i_0] = (arr_5 [i_0] [i_0]);
    }
    var_17 = (((max(31969, 16607846437273980988))));
    var_18 = var_9;
    var_19 = (((-((max(var_9, var_14))))));
    #pragma endscop
}
