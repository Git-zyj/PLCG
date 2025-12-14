/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_4;
    var_13 = 2296375253;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = ((max((min((arr_7 [5] [i_1] [i_2]), (arr_4 [7]))), ((max(var_7, (arr_7 [i_0] [i_1] [i_2])))))));
                    arr_8 [i_2] [i_1] [i_2] = (max(((max(((max(-294911351, -294911340))), ((-294911355 ? -294911351 : 1998592038))))), (((arr_0 [6]) ? (max(1998592042, 16088636487368766601)) : var_10))));
                    var_15 = -var_3;
                    var_16 = (min(var_16, ((max((((((max(130944, var_8))) ? -1255819530 : (arr_0 [i_0])))), var_2)))));
                    arr_9 [i_2] [i_1] [i_2] = ((((arr_0 [i_2]) == (arr_4 [i_1]))));
                }
            }
        }
    }
    #pragma endscop
}
