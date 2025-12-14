/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_2] [7] [i_2] = (min((max(((var_3 ? (arr_1 [i_1]) : (arr_5 [0] [i_1] [i_2]))), (arr_7 [i_0] [13] [i_2] [6]))), (((~(arr_0 [i_2 - 2]))))));
                    var_20 = (((1777201868631292873 - -9187956225759392577) * (((var_3 ^ (arr_3 [i_2] [i_2 + 3]))))));
                    var_21 = 9187956225759392577;
                    var_22 += 9187956225759392573;
                }
            }
        }
    }
    var_23 = 9187956225759392587;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_24 = ((~((~(arr_12 [i_3] [i_3])))));
                                arr_21 [i_3] = ((0 ? -9187956225759392577 : -2970954259303113177));
                            }
                        }
                    }
                }
                var_25 = ((((((~158) ^ ((~(arr_2 [i_4])))))) && 1));
                arr_22 [i_3] [5] [i_3] = ((7682042780170421532 % (arr_8 [i_3])));
            }
        }
    }
    var_26 = min(50, var_11);
    #pragma endscop
}
