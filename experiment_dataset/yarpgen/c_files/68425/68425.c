/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_0;
    var_11 = (var_9 ? (~var_8) : 16070897321357907502);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (((((((min(65524, 1))) ? 262143 : -var_5))) ? ((((!(arr_4 [i_1] [i_1]))) ? (~var_6) : var_8)) : 13790930188135006940));
                    arr_9 [i_0] |= (max(3484442029, (~15728821532775254448)));
                    var_13 *= 32767;
                    var_14 = (((1962183310187304417 && var_6) ? (min((arr_4 [i_2] [i_2]), var_7)) : (arr_1 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
