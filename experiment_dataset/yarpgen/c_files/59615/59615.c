/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_3);
    var_17 &= ((min(var_2, (~-1246058069))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (1046821607 < -63);
        arr_3 [i_0 + 3] = (min((((~(arr_0 [i_0 - 3])))), (min(var_0, (arr_0 [i_0 + 2])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_11 [i_2] [i_3] [2] = 17145195294562856285;
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_18 = (min((max((max(var_12, (arr_8 [i_5]))), 3949740014)), var_9));
                                var_19 = ((+(((((19144 ? (arr_16 [i_3] [i_4] [i_1] [i_2] [i_3]) : var_9))) ? ((((arr_14 [i_3] [i_2] [i_3] [i_4] [i_3] [i_2]) & (arr_1 [i_1])))) : 2898295281361844494))));
                                var_20 *= (arr_1 [i_3]);
                                var_21 += max((min((((-32767 - 1) ? 18446744073709551615 : 17145195294562856285)), (((var_7 >> (var_2 - 200)))))), (((((max(var_0, 193))) ? (~var_5) : ((65 >> (var_9 - 3630879564)))))));
                                arr_18 [i_3] [0] [i_3] [i_4] [i_5] = var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_24 [i_2] [i_2] [i_3] [i_6] [i_7] &= ((123 + (~var_11)));
                                arr_25 [0] [0] [i_3] [i_3] [0] [3] [0] = var_9;
                            }
                        }
                    }
                }
            }
        }
        arr_26 [i_1] = ((var_0 | (max(255, (min(-7890617446689096304, -3243))))));
        arr_27 [i_1] = (max(2030699506770089753, 16300371917790546289));
    }
    #pragma endscop
}
