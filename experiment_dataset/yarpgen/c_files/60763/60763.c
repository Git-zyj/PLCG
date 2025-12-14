/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [1] [i_1] = ((((max(13659127694701286099, var_9))) ? ((min(129056276, (40677 || 13659127694701286084)))) : 4787616379008265517));
                arr_5 [i_0] [i_1] = 19590487;
                arr_6 [i_0] [i_1] = ((((max((~4787616379008265517), var_12))) ? (((~(max(var_0, 6837985253799822876))))) : (((!2773787500940727321) ? (((1 ? var_14 : 32749))) : ((1 ? 4787616379008265516 : 0))))));
                var_19 += ((4787616379008265516 ? ((-2359240722146443111 ? 24212499 : 65535)) : -129056276));
            }
        }
    }
    var_20 *= -var_2;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                {
                    var_21 = ((((!(((90 ? -24212499 : 1))))) ? ((((max(37777, var_18))) ? (((17330 ? var_1 : var_18))) : ((-8911842408023761765 ? var_11 : var_7)))) : ((~(min(-129056276, 13659127694701286100))))));
                    var_22 = (max(var_22, var_18));
                }
            }
        }
    }
    var_23 = (min(((~((-1492952806 ? var_2 : var_8)))), (~var_13)));
    var_24 = ((~(!var_18)));
    #pragma endscop
}
