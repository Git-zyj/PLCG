/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((~((var_12 ? var_17 : var_16)))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 65520;
        var_21 = ((+(((arr_0 [i_0 + 1] [i_0 - 1]) % (arr_0 [i_0] [i_0 - 3])))));
        arr_4 [i_0] = ((((min((0 ^ var_11), var_18))) ? (arr_2 [i_0 - 1]) : (((arr_0 [i_0 - 2] [i_0 + 1]) - var_2))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_13 [i_3] [i_1] [i_0 + 1] = ((-(((((((-1 + 2147483647) << (((arr_8 [i_0] [i_0] [i_0]) - 15176))))) && (arr_1 [i_0 - 1]))))));
                            var_22 = (max(var_22, ((((arr_7 [i_0] [i_0] [i_0 - 3] [i_0 - 3]) != var_9)))));
                            var_23 = (min((arr_9 [i_3] [i_2] [i_0 - 1] [i_0]), ((max((arr_9 [i_3] [i_2] [i_0 + 1] [i_0]), var_3)))));
                        }
                    }
                }
            }
            arr_14 [i_1] [i_0] [i_1] = (((arr_5 [i_1]) - (arr_2 [i_0])));
        }
    }
    #pragma endscop
}
