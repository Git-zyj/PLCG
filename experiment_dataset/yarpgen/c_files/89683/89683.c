/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (min(-var_0, (min((2314424109616169162 & var_1), (var_7 && var_2)))));
    var_11 = (min(var_11, (((min(255, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_12 = (min((((((-(arr_2 [i_1] [i_2])))) ? 16132319964093382454 : (max(var_5, 2314424109616169162)))), ((((((arr_1 [i_2 - 1]) < var_1)) && (arr_4 [i_1]))))));
                    arr_7 [i_0] [i_1] [i_1] = (arr_6 [i_2 - 1] [3]);
                    var_13 ^= (arr_2 [1] [0]);
                }
                var_14 = var_2;
            }
        }
    }
    var_15 = ((var_5 ? ((104 ? 589899465 : (2010911162 - 13501773949601956204))) : -105));
    #pragma endscop
}
