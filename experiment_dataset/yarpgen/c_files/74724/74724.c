/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 40;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [14] [i_0] [i_1] = (arr_4 [i_0]);
                arr_7 [i_1] [i_1] = 1;
                var_15 += (max(216, ((~(40 ^ 223463717)))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] [i_1] = (max(((min((arr_4 [i_0]), (arr_4 [i_2])))), ((-((9 ? var_10 : (arr_8 [i_0] [i_0] [i_0])))))));
                    var_16 = (max(var_16, 102));
                    arr_11 [i_2] [i_1] [i_0] = ((((min(-43, (((!(arr_9 [i_1] [i_2]))))))) || (arr_1 [i_0] [i_0])));
                    arr_12 [6] [6] &= min(-var_12, (max(-6, (223463718 * 4071503577))));
                    arr_13 [i_2] = (((((175 ? 4071503578 : 1781610862)))) ? (((((max((arr_1 [i_0] [i_2]), (arr_4 [i_0])))) ? ((-8515872912767289984 ? var_12 : (arr_2 [i_0]))) : (arr_4 [i_2])))) : ((2342860818 ? ((min(710730123793680081, 215))) : (min(3659875004787867033, -6525442209901960876)))));
                }
            }
        }
    }
    var_17 ^= (var_8 - var_5);
    var_18 = ((!(!223463703)));
    var_19 = 8;
    #pragma endscop
}
