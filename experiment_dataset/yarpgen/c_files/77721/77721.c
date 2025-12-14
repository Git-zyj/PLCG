/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((18446744073709551615 ? -115 : 255))));
    var_13 = (min(var_13, (((var_2 ? ((max((~var_11), var_6))) : ((-var_11 ? ((9781342413894536073 ? -6508406935910659112 : var_7)) : (!var_4))))))));
    var_14 &= ((((~((var_9 ? var_5 : 5193516279554308967)))) < var_10));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 &= (((~(((arr_0 [i_0]) ? var_9 : 113)))));
                arr_7 [i_0] |= (4936707285516914288 > 65535);
            }
        }
    }
    #pragma endscop
}
