/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, (~1)));
        var_17 = 0;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_18 &= 15;
        arr_5 [i_1 + 2] = arr_3 [i_1];
        arr_6 [i_1] = ((-(arr_4 [i_1 + 1])));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_19 = ((-(0 > 1)));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_13 [13] [i_3] [i_3] = ((((min(18446744073709551601, (max(0, var_0))))) ? (((((27 ? 5194443304321952505 : 8830539616774822148))))) : (0 - 44099)));
                    var_20 = 24364;

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_21 = (min(2803527220, (0 ^ -8369)));
                        var_22 -= ((17 + ((796979550062096483 - (((9055 ? 2630910237 : (arr_10 [i_2]))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_3] [i_3] = (((~5194443304321952527) != 12));
                        arr_20 [i_2] [1] [i_3] [1] [i_6] = ((((13156092446424274698 ? 13252300769387599077 : 5194443304321952548)) <= 2589454444));
                    }
                }
            }
        }
        var_23 = -4986829662539723259;
        arr_21 [i_2] = ((((((arr_2 [i_2]) % 1142778532))) ? 13 : ((((3827685967 && (arr_4 [i_2])))))));
    }
    var_24 ^= (min(var_13, ((-43999 | ((min(30671, 44999)))))));
    var_25 = 3827685967;
    var_26 = max(((((max(-116, 1922863037)) + 3365330437968543860))), (((min(3365330437968543865, 115)) % 8925858798285826085)));
    var_27 = (max(var_27, 1));
    #pragma endscop
}
