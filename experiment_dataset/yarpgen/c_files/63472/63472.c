/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min((max((min(var_7, 0)), (!2406018019))), ((~((var_4 ? 2406018017 : 2406018017)))))))));
    var_14 = max(49, (min(2406018044, (min(var_9, var_0)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 += (arr_4 [i_0] [i_0] [i_2]);
                    var_16 -= -26955;
                    arr_7 [i_1] [17] [i_2] = ((((max((arr_4 [i_0] [i_1] [i_0]), var_9))) && (arr_2 [i_0])));
                    var_17 = ((!(arr_6 [i_0] [i_1] [i_2] [i_1])));
                }
            }
        }
        var_18 = 15985515979283132299;
    }
    #pragma endscop
}
