/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 255;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] = (-9223372036854775807 - 1);
            var_16 = ((!(arr_1 [i_0])));
            arr_7 [i_0] [0] [i_0] = (arr_1 [i_0]);
            var_17 = (((((var_11 % (arr_4 [i_0])))) ? (((arr_1 [i_0]) | var_12)) : -1));
        }
        var_18 = 1;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    var_19 = (((((((((min(var_8, 128)))) != (min(2143289344, 24)))))) / (((arr_15 [i_2] [i_4 + 2] [i_2]) ^ (((1 ? 252 : 53)))))));
                    var_20 = (min(var_20, (((!(-1 % -956234686177096577))))));
                }
            }
        }
        arr_17 [i_2] = (min(80, ((((arr_8 [i_2]) || 17873)))));
        var_21 = min(1, (((arr_10 [i_2]) ? (-9223372036854775807 - 1) : (arr_11 [i_2]))));
    }
    #pragma endscop
}
