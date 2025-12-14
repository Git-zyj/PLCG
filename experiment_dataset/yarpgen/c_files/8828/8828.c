/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_1 [1] [1])));
        var_18 -= 2129732240;
        arr_2 [i_0 - 1] [i_0] = 56860;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_19 = (max(var_19, (((-(((56860 * 4192569179) / (var_12 / 14))))))));
                    var_20 = (min((min((((9402990029341506041 ? -86 : 14))), 9043754044368045574)), (arr_1 [i_2 - 1] [i_1])));
                }
            }
        }
        var_21 = ((+((((max((arr_5 [i_1]), var_16))) * var_0))));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_22 [i_1] = ((var_3 ? ((-(arr_17 [i_1] [i_4] [i_5] [i_6]))) : ((((86 ? var_12 : 9043754044368045574)) + var_5))));
                        var_22 = (min(var_22, var_4));
                        var_23 = ((((max(((var_4 ? 104 : (arr_6 [i_1 - 1] [i_6 - 3]))), (9402990029341506041 == 4645527412637330617)))) ? (((max(var_6, 1675518871)))) : (((-87 < 1) ? ((min(31553, (arr_18 [i_1] [i_1])))) : (((arr_0 [i_1]) - 13407209428769106407))))));
                    }
                }
            }
        }
    }
    var_24 ^= (max(((var_9 ? var_6 : ((1 ? -102 : 195)))), var_9));
    #pragma endscop
}
