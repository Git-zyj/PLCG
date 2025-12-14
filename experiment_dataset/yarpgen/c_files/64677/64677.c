/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 &= (((-(arr_1 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = var_1;
        var_18 = (!36);
        var_19 = (var_6 || var_0);

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_20 = arr_5 [i_0] [i_1];
            var_21 &= (((var_14 <= (arr_4 [i_1 - 2] [i_1 - 2]))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_22 -= (((((((36 ? 219 : var_12)) - -var_7))) != (max((arr_7 [6] [6] [i_0]), (arr_4 [i_0] [i_2])))));
            var_23 = ((((max(-38, (~219)))) ? 220 : (-9223372036854775807 - 1)));
        }
    }
    var_24 = (((((((var_1 ? 50422 : var_0)) <= -219))) == var_13));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            {
                var_25 = (min(var_25, var_3));
                var_26 += var_6;
                var_27 = max(((var_16 ? (arr_2 [i_3]) : var_12)), (!1));
            }
        }
    }
    var_28 -= 36;
    #pragma endscop
}
