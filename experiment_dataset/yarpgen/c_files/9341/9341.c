/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_9));
    var_11 -= ((-19218 ? var_1 : (((!(((var_1 ? var_4 : 9459567295498283523))))))));
    var_12 += 122;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    var_13 = ((~((~(~126)))));
                    arr_7 [i_0] = ((((122 ? 10476898324285425070 : (arr_3 [i_2 + 2] [2] [i_2]))) | ((((var_0 * 7969845749424126550) ? (!var_8) : (var_7 != 133))))));
                }
            }
        }
    }
    var_14 = min(var_1, (max(var_5, (~var_3))));
    #pragma endscop
}
