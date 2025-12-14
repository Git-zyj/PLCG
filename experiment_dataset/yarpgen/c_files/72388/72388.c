/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 &= 0;
            var_19 = ((-26508 + (arr_2 [i_0 - 1])));
        }
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            arr_7 [i_0 - 1] [i_0] = (arr_3 [i_0 + 1] [i_2]);
            var_20 = (((((1 && (arr_4 [i_0] [i_2] [i_0])))) + (arr_0 [i_0 - 1])));
            arr_8 [i_0] = 1551223268;
            arr_9 [i_0 - 1] [1] = var_2;
        }
        for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_21 = (6254 / 1);
            var_22 = (max(var_22, 16384));
            var_23 -= 2967542266;
        }
        for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_24 |= (((arr_12 [i_4 - 2] [20]) ? 13931227322278361501 : (arr_12 [i_4 - 2] [1])));
            arr_16 [i_4] [i_4] = 0;
        }
        var_25 -= ((77 & (arr_0 [i_0 - 1])));
        arr_17 [i_0] = var_4;
    }
    var_26 -= ((((max(var_4, (min(462, var_11))))) ? (((min(var_4, var_11)))) : var_10));
    var_27 = ((((((max(25357, var_8)))) / 1958542324)));
    var_28 |= 34947015;
    #pragma endscop
}
