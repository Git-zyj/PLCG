/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_5 ? (((((var_3 ? var_8 : 0))) ? ((2147483647 ? 27499 : var_3)) : -27485)) : ((min((~var_5), (~var_10))))));
    var_16 = ((+((-4257536096 ? (!8191) : ((var_13 << (252 - 237)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = (((((-((-(arr_3 [i_0])))))) ? ((((27484 >= (arr_2 [i_0]))))) : -1632331407));
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((((arr_2 [2]) ? (arr_2 [8]) : (arr_2 [8]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_2] [i_3] = ((-1 ? (((arr_8 [i_1] [i_2] [i_3]) ? 27515 : (arr_10 [i_1]))) : (arr_7 [i_2])));
                    var_19 -= (240 / (arr_1 [i_1]));
                    var_20 = (((arr_10 [i_2]) ^ (arr_8 [i_3] [i_2] [i_1])));
                    var_21 = ((!(arr_10 [i_1])));
                }
            }
        }
    }
    var_22 = ((((-27484 ? 8191 : 1))) ? (((((~var_13) != (((var_2 <= (-9223372036854775807 - 1)))))))) : -1474634583);
    #pragma endscop
}
