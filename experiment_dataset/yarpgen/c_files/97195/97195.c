/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 *= ((((max(var_7, (arr_2 [i_2])))) <= ((max((arr_3 [i_2]), (arr_3 [i_0]))))));
                    var_12 *= (min((max(6515759523556781436, 1716665196)), ((((min((arr_1 [i_1]), (arr_0 [i_2]))) == ((((var_4 == (arr_1 [i_0]))))))))));
                    var_13 *= ((804435433 || (min(((1 && (arr_7 [i_0] [i_1] [i_2]))), (0 && 1669652926)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_14 &= -48;
                var_15 -= (min(((((arr_6 [i_3] [i_4] [i_4] [i_3]) + 28042))), ((3 ? (((min((arr_0 [i_4]), (arr_12 [i_3 + 3] [i_3 + 3] [i_3]))))) : var_6))));
                var_16 -= 115;
                var_17 *= 1;
                var_18 -= (max(-26060, 914288074822927795));
            }
        }
    }
    #pragma endscop
}
