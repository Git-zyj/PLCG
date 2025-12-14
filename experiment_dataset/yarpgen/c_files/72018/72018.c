/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (-((-(arr_1 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = (arr_1 [i_0] [i_0]);

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_19 = (((((arr_0 [i_1 - 1]) <= (arr_0 [i_1 - 2]))) ? (arr_1 [i_1 - 2] [i_1 - 2]) : 0));
            arr_7 [i_0] = ((~(((((-(arr_2 [i_1])))) + (((arr_6 [i_0] [i_1 + 1]) ? (arr_0 [i_1]) : var_7))))));
            var_20 = (min(var_20, (((((((arr_2 [i_1 - 3]) && (arr_0 [i_1 - 2])))) * (1 || 2147483647))))));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_21 = (~33554368);
                        var_22 = ((((min(((1 ? (arr_5 [i_4]) : (arr_12 [i_4] [i_3] [i_0] [i_0]))), (!1)))) ? (((3846512661 || (1152640029630136320 <= var_9)))) : ((((((4261412928 ? var_14 : 12))) < (arr_2 [i_4]))))));
                    }
                }
            }
            arr_17 [i_0] = ((-((((max(var_13, (arr_11 [i_2] [i_2] [i_2])))) ? (min(var_7, 255)) : (((1433011439 ? (arr_13 [i_2]) : 3041372943)))))));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_22 [i_0] = 1152640029630136320;
                arr_23 [i_0] [1] [i_2] [i_5] = (((arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? (((!(arr_12 [i_0] [i_2 - 2] [i_2 + 1] [i_2 - 1])))) : (~0)));
            }
        }
    }
    var_23 = (min(var_23, ((max(var_18, 15063934557858789964)))));
    #pragma endscop
}
