/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((((min(148, -248888890233846941))) ? ((var_1 ? var_1 : 50037)) : -7))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (((((((var_0 ? 4073174435809116655 : var_1))) ? (max(3003, -2993800348453752148)) : 7561413530011698713)) <= ((((var_9 || ((max(2832856191, var_0)))))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((~(max(var_6, (5110865656711324447 && 37144)))));
                        var_12 = var_2;
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_13 = (((-7561413530011698714 - -5683015982257854104) ? (5683015982257854121 == 23) : ((~(((!(arr_14 [15] [i_0] [8] [i_4] [i_2]))))))));
                        arr_15 [i_0] [i_1] [i_0] = (min(((~(arr_7 [i_0 + 1] [i_0 - 2]))), ((((arr_11 [i_0] [i_1] [i_0] [i_4]) > (arr_6 [8] [i_0] [i_4]))))));
                        var_14 = var_3;
                    }
                }
            }
        }
    }
    #pragma endscop
}
