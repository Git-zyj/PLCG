/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 |= ((+(min((arr_1 [i_0]), (arr_1 [i_0])))));
                var_15 = (min(var_15, (((~(-22308 / 27552))))));
            }
        }
    }
    var_16 += var_1;

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_7 [i_2] [8] = (min((((((arr_5 [i_2]) / (arr_5 [i_2]))))), (((arr_6 [i_2]) ? (((!(arr_6 [i_2])))) : ((var_4 >> (((arr_5 [i_2]) - 16263))))))));
        var_17 = (max(((((((arr_5 [i_2]) / 22307)) + (arr_5 [i_2])))), (min((~18446744073709551597), ((((arr_6 [i_2]) > (arr_5 [i_2]))))))));
    }
    #pragma endscop
}
