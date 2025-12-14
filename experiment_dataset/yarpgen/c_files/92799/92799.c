/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = (min(var_14, ((min(((((((0 ? -68 : var_2))) ? var_1 : var_2))), (max(((-4 ? 3597903434 : 3300091898707779336)), 4)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((33 ? ((-4 ? var_1 : 62)) : 51))) ? var_3 : 255));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = ((-(arr_0 [11] [11])));
            arr_6 [i_0] [i_0] [2] = 1638707924535431009;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_15 = (max((min(2809599531, 222)), (((max((arr_3 [9] [9]), var_2))))));
            arr_9 [i_0] [i_0] = 1197165793;
        }
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        var_16 = (max(var_16, ((((((~((48630 ? 1070350267 : -624901256))))) ? 2147483647 : 2147483647)))));

        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_15 [i_3 + 1] [i_4] = ((((((~var_4) ? (max((arr_14 [i_3] [i_3]), var_2)) : (~16906)))) ? (arr_14 [i_3 + 1] [i_3 + 1]) : ((((!((((-2147483647 - 1) ? var_7 : 75)))))))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_17 = (((min((((arr_10 [i_6]) ? 4037070431 : 2905994081)), (((144115119356379136 ? 24307 : var_1)))))) ? ((-(arr_19 [i_3] [i_3] [i_3] [i_3]))) : -var_2);
                            arr_27 [i_5] [i_4] [i_7] = (arr_23 [i_5] [i_5] [i_7] [i_6 - 1] [i_7] [i_5] [i_5]);
                            var_18 = (max(var_18, ((((arr_20 [i_3 + 1] [i_5 + 2] [i_6 + 1]) ? -28787 : (max((min(8842811481736124487, var_3)), (((392773471 ? -1 : 4227434190))))))))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (((-var_6 ? var_9 : ((((((arr_29 [i_3]) ? 2084816748021714397 : 2905994081))) ? 6 : 0)))))));
            arr_30 [i_8] [i_3 - 1] = ((max(var_6, -var_5)));
            var_20 = (min(var_20, var_0));
        }
        var_21 = (max(var_21, (((((((-28787 ? var_0 : (arr_20 [i_3] [i_3] [10])))) ? 1485573573 : (min((arr_14 [i_3] [13]), -26))))))));
    }
    var_22 = ((((((((var_6 ? var_9 : 4870648873103958237))) ? (min(65523, 460499231)) : (min(var_2, var_6))))) ? var_1 : 79));
    #pragma endscop
}
