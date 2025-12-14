/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((var_0 - ((((3556169925 <= var_9) <= (var_11 * 738797371))))));
    var_14 = max((min((237 - 3556169925), (~685069414))), var_6);
    var_15 = min((max(((max(var_1, var_2))), (~685069414))), var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_16 = ((((((!3556169925) ? 3556169925 : (3536347421 & 3609897881)))) ? (max((arr_0 [i_0] [i_0]), ((var_9 ? var_0 : 4267102103693687755)))) : -8348394885274364843));
                arr_5 [i_1] [i_1] [i_0] = ((!(1188502323489075757 | var_7)));
                var_17 = (min(var_17, (arr_4 [i_0 + 2] [i_0 - 1])));
                var_18 ^= (arr_2 [i_1 - 2] [8] [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_13 [i_2] = (arr_10 [i_2] [i_3] [i_2]);
                    var_19 = (max(var_19, ((max((((var_2 ? (arr_6 [i_4]) : (arr_6 [i_4])))), var_7)))));
                    var_20 = (~((var_5 ? 3536347421 : ((var_12 ? var_7 : var_8)))));
                    arr_14 [i_2] = (((((1 ? (arr_6 [i_2]) : var_11))) & (arr_12 [i_4] [i_3] [i_2] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
