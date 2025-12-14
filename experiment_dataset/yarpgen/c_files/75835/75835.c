/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((((235 && var_7) && -var_15)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = 7594847206807961650;
        var_21 = (max((min((~-4798109222904668858), 21)), ((((max((arr_2 [i_0] [i_0]), var_4)) >= -var_8)))));
        arr_4 [1] = ((((((!(21 != 217))))) * ((~(var_11 / 65534)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] &= ((-(~1657037079)));
        var_22 ^= ((((((~112) / (8 <= 1657037079)))) == (min(((min(var_17, var_17))), (max(-1, (arr_2 [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_23 += (((!124) <= -37));
                        var_24 = (max((min(((max((arr_14 [16] [2]), var_14))), ((var_16 - (arr_11 [13] [19] [i_2] [i_1]))))), (((((max((arr_10 [i_4] [i_2]), (arr_1 [i_1] [6])))) || (235 && 1650603973))))));
                        arr_17 [i_3] [i_3] [i_2] [i_3] |= (min(((min(-37, (-3433866615425492193 <= -4816907458875595050)))), 268435456));
                    }
                }
            }
        }
        var_25 *= (~5287);
        var_26 -= ((!((min(((-(arr_9 [i_1] [i_1] [i_1]))), (~var_1))))));
    }
    var_27 |= (max(((-37 - (((-127 - 1) - -815920016)))), ((min(5793, 0)))));
    #pragma endscop
}
