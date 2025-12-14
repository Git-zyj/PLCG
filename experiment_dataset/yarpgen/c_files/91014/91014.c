/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_5, 3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_13 |= (min(15601244644468276032, -24157));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = arr_4 [i_0] [i_0];
                        var_14 = (((((0 ? (((var_11 + (arr_0 [i_0])))) : var_9))) ? (((~(arr_2 [i_0] [i_1] [i_2])))) : (max(2845499429241275583, (((6101349058987052293 ? -33 : (arr_8 [i_2] [i_1]))))))));
                        var_15 -= (max(((((((arr_10 [i_2] [i_1] [i_1] [i_1] [i_1]) ? var_10 : var_7))) ? -113 : (((arr_0 [i_0]) & (arr_9 [i_0] [i_1] [i_1] [16] [i_0]))))), (arr_0 [i_0])));
                        var_16 = ((arr_6 [i_0] [i_0] [i_2] [i_3]) ? 15601244644468276032 : (23 ^ 77));
                    }

                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        var_17 = arr_6 [i_0] [i_1] [i_0] [i_4];
                        var_18 |= ((((((-2147483647 - 1) ? 76 : 2845499429241275583))) ? ((((arr_5 [i_4 - 1] [i_4 - 1] [i_4 + 1]) < 126))) : -2147483636));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [15] [i_4] = (arr_12 [i_5] [i_2] [i_0] [i_0]);
                            var_19 |= (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]);
                            var_20 = ((((min((-2147483647 - 1), (((arr_6 [i_1] [i_1] [i_4] [i_5]) ? 79 : -23))))) ^ ((((max((arr_3 [i_0]), var_8))) ? (arr_7 [i_5] [i_4 - 1] [i_2] [i_1]) : 2845499429241275583))));
                            var_21 = var_5;
                            var_22 = 2267068644;
                        }
                        var_23 = (max(((((max(var_5, (arr_7 [i_0] [i_1] [3] [i_0])))) ? (arr_1 [i_0] [i_0]) : ((var_11 ? 14341319726162970794 : var_6)))), (((!(arr_3 [i_4 - 1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
