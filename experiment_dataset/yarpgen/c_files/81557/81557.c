/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1202165380;
    var_19 = var_5;
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(((-(arr_4 [i_0 + 2] [6]))), ((((min(-1202165380, (arr_0 [i_0] [i_0])))) ? ((18446744073709551612 ? 3328238480416712433 : var_6)) : ((var_12 ? 4 : var_8))))));
                arr_6 [i_0] [i_0] [i_0] = 3869;
                arr_7 [i_0] = ((~(min(25, var_11))));
                arr_8 [i_0] [i_1] [i_0 + 1] = max(((((max(41635, 23900))) < (arr_1 [i_0 + 4]))), (arr_1 [i_1]));
                var_21 = (min(var_21, ((max(((+(min((arr_1 [i_0]), (arr_2 [i_0]))))), -6287)))));
            }
        }
    }
    var_22 *= ((-(-3880 && -15118505593292839175)));
    #pragma endscop
}
