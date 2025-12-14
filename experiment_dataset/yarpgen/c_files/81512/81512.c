/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((-7861909967698531558 != ((min(-1, 32767))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (906402733 <= 584725055);
        var_16 = ((-(!19088)));
        arr_2 [i_0] [i_0] &= ((((((4283946175 % var_5) ? (0 || var_6) : (((0 == (arr_1 [i_0]))))))) || (((((min((arr_0 [5]), 21))) | (arr_1 [i_0]))))));
        arr_3 [i_0] = (((((!(arr_0 [i_0])))) > var_2));
    }

    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_17 = ((-((-793121041253706518 ? ((min(var_1, (arr_6 [4])))) : (arr_4 [i_1])))));
        var_18 = ((~(1883207450619259652 <= -2398600957792916674)));
        var_19 = 3744981767;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_20 = min((min(((((arr_0 [i_2]) || (-9223372036854775807 - 1)))), (var_11 * var_3))), ((((((arr_7 [i_2]) ? var_13 : 3585540409))) ? ((var_3 ? 127 : 1722482438)) : 2926323170)));
        var_21 -= 4064;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_22 = ((var_12 % (max(((var_5 ? (arr_8 [i_3]) : var_2)), ((((arr_1 [i_3]) ? var_4 : (arr_6 [i_3]))))))));
        var_23 = 22984;
        arr_14 [5] = -8809925061342834579;
        var_24 = ((var_10 ? ((((var_7 <= (arr_13 [i_3]))))) : (((arr_13 [i_3]) ? (arr_13 [i_3]) : 1790119862))));
        var_25 = ((!(var_11 * var_12)));
    }
    var_26 ^= ((((1393165084664767619 ? var_11 : (min(2208, 2556483080)))) | (min((4294967295 / 1542787032), (!4294967295)))));
    var_27 = (((((var_2 << (((-var_1 + 122) - 19))))) * ((min(var_1, var_2)))));
    #pragma endscop
}
