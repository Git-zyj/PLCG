/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!(-2147483647 - 1)));
        arr_4 [i_0] = (((-2147483647 - 1) % ((~(min(-84853475, (arr_1 [i_0])))))));
        var_15 = (max((max((16871953268836637990 ^ 2582431047937120115), (min(16871953268836637990, 13638658790462170453)))), 12252668954223993108));
        var_16 *= 0;
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 23;i_3 += 1)
            {
                {
                    var_17 = (max(var_17, (max((55796 ^ 1644649593), (((-6795 <= (arr_6 [8]))))))));
                    arr_12 [i_1] [i_1] [i_1] = (((((~(arr_9 [i_1] [i_3 - 2])))) ? (((min((arr_9 [i_1] [i_3 - 2]), 107)))) : ((13685792143436805988 ? var_0 : -5098478647916015127))));
                }
            }
        }
        var_18 |= (max(((((((1 / (arr_9 [10] [10])))) && ((!(arr_9 [8] [8])))))), (min((arr_8 [4] [i_1]), ((272092674253775617 ? var_13 : (-32767 - 1)))))));
        arr_13 [i_1] = ((var_10 ^ (((arr_6 [i_1]) & (arr_6 [i_1])))));
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        var_19 = min((max(0, (arr_0 [i_4 + 1]))), ((((max(1, (arr_6 [i_4])))) ? (max(50331648, 32760)) : var_9)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_20 &= (arr_7 [i_4]);
                    arr_21 [i_4] [i_4] [i_6] = -19037;
                    arr_22 [i_4] [2] [i_5] [i_4] &= ((57325 / (((((arr_6 [i_5]) + 2147483647)) >> (-25 + 25)))));
                }
            }
        }
    }
    var_21 = var_5;
    #pragma endscop
}
