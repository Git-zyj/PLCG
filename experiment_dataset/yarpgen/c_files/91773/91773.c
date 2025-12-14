/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min((min((max(var_3, var_5)), var_3)), (((!(((9223372036854775803 ? var_2 : var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((((((-(arr_0 [i_0])))) >= (arr_0 [i_0]))) ? ((6 ? 9223372036854775807 : -89)) : ((((!((max(65517, 1))))))))))));
                var_12 = (~2);
                var_13 = min((((15678 <= (max(11068242555142139019, 14082))))), (297111427 + 1));
            }
        }
    }
    var_14 = (max(var_14, var_2));
    var_15 = (min(var_15, ((((min((min(var_9, var_3)), (!16789121420792925840)))) ? ((var_8 & ((var_9 ? var_8 : var_2)))) : (((min(1, 7077663107694648996))))))));

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_16 = (min(var_16, (arr_6 [i_2])));
        arr_8 [i_2] [i_2] = (arr_0 [i_2]);
        var_17 = ((((min(0, ((max((-32767 - 1), 1)))))) || ((!((max(0, (arr_1 [i_2]))))))));
    }
    #pragma endscop
}
