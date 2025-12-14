/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2172807222;
    var_15 *= (((min(10581493770309382312, 215)) < ((min(var_7, var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_4 [i_0] [i_0] [9] [10])));
                    var_17 = (min(var_17, (((((max(var_7, (arr_4 [i_2] [i_2 + 3] [i_2 + 3] [i_2])))) > (((min(var_5, (arr_4 [i_0] [i_1] [i_1] [i_0]))) / (arr_4 [i_1 + 1] [i_1 - 1] [8] [i_2 + 2]))))))));
                    arr_6 [i_1] [i_1 - 1] [i_2 + 3] = ((max(12458513993604893794, (((var_4 <= (arr_4 [i_0] [10] [i_0] [i_0])))))) < (((3451699376 ^ (arr_5 [i_1 + 1] [i_2 + 2])))));
                    arr_7 [i_0] [i_1] [i_1 + 1] [i_0] = (arr_4 [i_2 + 1] [i_2 + 1] [i_2] [3]);
                }
            }
        }
    }
    #pragma endscop
}
