/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = ((((((max(29, 65533))))) - ((var_7 ? (var_12 + 16776704) : (max(var_4, var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_18 = (16776704 < 231);
                    var_19 = (max(var_19, (arr_1 [i_0])));
                    var_20 = (((((arr_4 [4]) ? (1712772530524919203 & -16776705) : (arr_5 [6]))) >> (((((1859579819 / 1148287252) | ((((((-127 - 1) + 2147483647)) << (((arr_4 [3]) - 7622033995507465888))))))) - 2147483496))));
                    var_21 = (arr_4 [i_0]);
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_22 = (arr_5 [i_1]);

                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        var_23 = min((((arr_8 [i_4 - 2] [i_3] [i_1]) - (arr_1 [1]))), var_13);
                        var_24 = (((((~((145 | (arr_10 [i_0] [i_3] [8] [i_4] [8] [8])))))) ? (((+((((arr_6 [i_1] [i_1]) == 1712772530524919182)))))) : (((arr_4 [i_4 - 2]) ? 16776709 : (arr_4 [i_4 + 1])))));
                        var_25 = (arr_4 [1]);
                        var_26 ^= (min(((((var_5 << (16776686 - 16776681))) > (var_4 < var_8))), ((((100 ? var_7 : 111)) < var_7))));
                        var_27 = 164;
                    }
                    var_28 -= ((-((-(arr_2 [10] [1])))));
                    var_29 = (((arr_3 [i_1]) ? (min((141 + 16776698), ((var_6 ? (arr_8 [0] [i_1] [3]) : (arr_6 [i_3] [i_1]))))) : (((arr_4 [i_1]) ? (-2147483647 - 1) : (~var_12)))));
                }
                var_30 = ((-154759209 ? ((((~var_6) ? (arr_6 [i_1] [i_0]) : (~1)))) : (((~541922980) ^ (min(13458230124504759657, 1))))));
                var_31 ^= -71;
                var_32 = ((56 ? 2147483647 : 16776700));
                arr_12 [i_0] = (arr_1 [i_0]);
            }
        }
    }
    var_33 ^= 16776691;
    #pragma endscop
}
