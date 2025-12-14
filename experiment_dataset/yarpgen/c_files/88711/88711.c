/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    var_15 *= (min(1619894991, -1619894995));
                    var_16 = ((var_0 | (arr_0 [i_2 - 2])));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_10 [i_1] = (max((max(var_7, (var_6 - var_5))), -1619894995));
                    var_17 = (max(var_17, ((((arr_4 [i_0] [i_0]) ? 13487535044043489532 : (((max(0, 13487535044043489540)) % (arr_2 [i_0 + 2]))))))));
                }
                arr_11 [i_1] [i_1] = ((((max(-1619894995, (max(var_13, (arr_1 [i_0 + 1])))))) ? (max((max(30, var_10)), ((((arr_4 [i_1] [i_1]) || var_7))))) : ((max(1619894991, (arr_7 [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}
