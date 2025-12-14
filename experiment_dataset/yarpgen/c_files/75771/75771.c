/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((-27 ? 4630701798340297685 : var_8))));
    var_11 = (max(var_4, ((((13816042275369253931 && 9007602890414473645) ? ((17489293579547613978 ? 63739 : 1)) : 13816042275369253942)))));
    var_12 = (((min(var_2, 24))) && var_2);
    var_13 = -2147483630;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (13816042275369253939 != 53);
                var_14 = ((((min(((13872573930876070364 ? 18446744073709551611 : (arr_2 [i_0] [i_0]))), (arr_0 [i_0] [i_0])))) ? -5005 : ((13872573930876070364 & (arr_3 [i_0] [i_0])))));
                arr_6 [i_1] [i_1] = (max((((((13872573930876070371 ? 56319 : 10059030951032116072))) ? (min((arr_0 [i_0] [i_0]), 14339922827287380397)) : (arr_4 [i_0]))), ((-1 ? var_6 : ((((!(arr_4 [i_0])))))))));
                arr_7 [i_0] [i_1] [9] = (min(((min((arr_0 [9] [i_1]), (65525 & 1)))), (min((max(-2, 4574170142833481252)), 0))));
            }
        }
    }
    #pragma endscop
}
