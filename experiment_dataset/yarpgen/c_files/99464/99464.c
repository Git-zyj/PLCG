/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((1143914305352105984 ? (((max(18446744073709551615, -3291)) / 12)) : ((((min((arr_3 [i_0] [8]), (arr_3 [i_0] [i_2])))) ? (((((arr_1 [i_0 - 1]) <= (arr_8 [i_2] [i_2] [i_1] [8]))))) : (arr_8 [i_0] [i_0] [13] [i_0 - 1])))))));
                    var_12 = (((~15983928595470747958) ? (((max((arr_2 [i_0]), (arr_7 [i_0] [13]))))) : (max((arr_4 [i_0] [i_1 - 2] [i_0]), (min((arr_5 [8] [i_1 + 2] [i_2]), (arr_6 [i_0])))))));
                    var_13 += (((((((arr_7 [i_0 + 1] [i_1]) ? (arr_2 [i_0]) : (arr_8 [i_0] [i_0 + 1] [i_0] [8]))) ^ ((((arr_3 [i_0] [i_1]) == (arr_2 [i_2]))))))) ? ((((((arr_6 [i_1 - 2]) * (arr_7 [i_0] [i_0 - 1])))))) : (((max(18446744073709551589, 2462815478238803658)) - 1)));
                    var_14 = 40;
                }
            }
        }
    }
    var_15 = (((var_7 ^ var_7) ? (max(((27 ? 2462815478238803669 : var_8)), (min(1, var_6)))) : var_0));
    var_16 = (min(var_16, ((((!var_6) ? (max((min(var_8, var_6)), var_5)) : ((~((var_0 ? var_10 : var_7)))))))));
    var_17 = ((((((-32753 ? 1 : 15473257109060986135)) / var_6)) * ((((var_2 ? var_10 : var_0)) / var_10))));
    var_18 = 2973486964648565480;
    #pragma endscop
}
