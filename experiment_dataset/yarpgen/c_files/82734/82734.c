/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max((18446744073709551610 < 1850451342), (min((37709 ^ 26), var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = ((((((var_14 ? 18446744073709551600 : 27834)) < (27826 | var_1))) || ((((((arr_1 [i_0]) || 4216379552538362345))) >= var_9))));
                arr_7 [i_1] [i_1] |= (7 || 137438951424);
                var_20 = (var_5 ? (arr_3 [i_0] [i_0]) : ((1 ? (arr_6 [i_1] [i_0 - 3]) : var_0)));
                var_21 = ((((10075183798289129236 ? 4216379552538362337 : 65014650))) ? 11392834293127020124 : 54632);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_22 = 3761069026;
                            var_23 = (2273066864 != 3902);
                        }
                    }
                }
                var_24 = (((5094309543597577615 ? 5094309543597577622 : 14336)) ^ (((-(arr_11 [i_2] [i_3] [i_3])))));
                var_25 = 1;
                var_26 = ((5094309543597577610 ? 30 : (arr_15 [i_2] [i_2] [i_3] [i_3])));
            }
        }
    }
    #pragma endscop
}
