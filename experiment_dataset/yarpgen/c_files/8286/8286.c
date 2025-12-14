/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_14 = var_1;
                        var_15 = (((((((arr_3 [5]) ? -6218366249332416191 : (-9223372036854775807 - 1))))) ? 0 : ((0 + (arr_4 [i_3 - 1] [i_0] [i_2 + 1])))));
                        arr_11 [i_0] [i_0] [i_1] [i_1] = ((+((-32 ? (arr_7 [i_2 - 3] [i_2 + 1] [i_2 + 1]) : 4294967273))));
                        var_16 = (((((~44782) ? (var_12 < 4294967273) : ((var_4 ? 3566535049 : 24460)))) >> (((168625407349611362 + 1858425607) - 168625409208036962))));
                        arr_12 [i_0] [i_0] = (36227236 - var_5);
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_17 *= ((((max(var_9, ((((arr_2 [i_4]) || (arr_6 [i_0] [i_0]))))))) && (arr_4 [i_0] [i_1] [i_1])));
                        var_18 += ((!((44673 || (arr_3 [i_2 - 2])))));
                        arr_15 [i_0] [1] [12] [i_2] [i_4] [i_0] = (arr_4 [i_0] [i_0] [1]);
                        arr_16 [i_0] [i_0] [i_0] [i_0] = (max((arr_1 [i_0]), (max((min((arr_2 [i_0]), var_3)), var_2))));
                        var_19 = var_9;
                    }
                    arr_17 [i_2 - 2] [i_0] [i_0] [i_0] = ((((max(((var_9 ? 46 : var_6)), 14118206939033386654))) || ((min(((min(var_7, var_13))), ((var_0 ? (arr_4 [i_0] [i_0] [i_0]) : var_5)))))));
                }
            }
        }
    }
    var_20 += var_1;
    #pragma endscop
}
