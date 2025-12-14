/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((~((var_2 ? 9388549307613045307 : 4593911831481287403)))) ^ (((var_0 ^ ((var_5 ? var_13 : -13104)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((4593911831481287403 != 74) ? (((((-127 - 1) <= 65528)))) : ((var_8 ? (arr_1 [i_0] [i_1]) : 13114)));
                arr_5 [i_0] [16] = (i_0 % 2 == 0) ? ((((arr_3 [i_0] [i_0]) >> (((max(-13112, (min((arr_3 [i_0] [i_0]), var_5)))) - 68))))) : ((((((arr_3 [i_0] [i_0]) + 9223372036854775807)) >> (((((max(-13112, (min((arr_3 [i_0] [i_0]), var_5)))) - 68)) + 13215)))));
                arr_6 [i_0] [i_0] [i_1] = ((((((((-28 ? -13112 : 4593911831481287398))) ? ((13753480309926361848 ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0]))) : -1780680589193270626))) - (min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))));
            }
        }
    }
    var_15 += var_10;

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_16 -= 201;
        arr_9 [i_2] |= 13852832242228264218;
        var_17 = ((((arr_8 [i_2]) ? (arr_8 [i_2]) : (arr_7 [i_2]))));
    }
    #pragma endscop
}
