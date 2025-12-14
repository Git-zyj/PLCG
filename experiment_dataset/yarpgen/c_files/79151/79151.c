/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 ^= (((((arr_1 [i_0]) != (arr_1 [i_0]))) ? ((min(-36, (arr_1 [i_1])))) : 15766320507736894565));
                arr_4 [i_1] = max(var_1, (((min(1134747506, (arr_0 [i_0]))) - 3063843084)));
            }
        }
    }
    var_13 |= var_10;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_14 = (min((min(127, (arr_8 [i_3]))), ((max((arr_5 [i_2]), (arr_5 [i_2]))))));
                var_15 = (min(var_15, ((((arr_8 [i_2]) <= (((arr_6 [i_2] [i_2]) % (arr_6 [i_3] [i_2]))))))));
                arr_10 [i_2] [i_2] = var_2;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_15 [i_2] [i_4] [i_5] = 4194303;
                            var_16 = ((8388607 >> (-128 + 134)));
                            var_17 ^= ((((min((arr_9 [i_2] [i_3] [i_5 + 1]), (arr_9 [2] [i_3] [i_3])))) ? (arr_9 [i_3] [i_4] [i_5 - 2]) : ((var_11 ? (arr_9 [i_2] [i_3] [2]) : (arr_9 [1] [i_3] [i_4])))));
                            arr_16 [i_2] [9] &= (((((128 ? (min(127, var_4)) : (min(-764479875659813607, 26011))))) ? (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3]) : ((6845 ? ((((-390155759 >= (arr_14 [i_4] [i_5 - 3]))))) : 3063843069))));
                            var_18 ^= ((6628 ? -6 : 18140521932422654998));
                        }
                    }
                }
                var_19 = (max((max((max((arr_6 [i_3] [i_2]), var_5)), ((min(45, 6))))), ((max(0, (arr_14 [i_2] [i_3]))))));
            }
        }
    }
    #pragma endscop
}
