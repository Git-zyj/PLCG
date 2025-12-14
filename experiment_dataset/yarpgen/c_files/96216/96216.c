/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_6, (~4294967292)));
    var_13 = ((var_2 * (max((((27428 ? var_1 : var_6))), ((var_10 >> (var_3 - 6125770961338516007)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = ((((min((arr_1 [i_0] [i_0]), (var_6 ^ 3834480768)))) + (arr_0 [i_0] [i_1])));
                var_15 = (((((4096 >> (((((-2147483647 - 1) - -2147483620)) + 35))))) ? (min((arr_3 [i_0] [i_1 + 1] [i_1 - 1]), var_3)) : (max(var_2, (arr_0 [i_1 + 1] [i_0 - 2])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_0] = (arr_5 [i_3]);
                            arr_9 [i_0] [i_0] [i_0] = (arr_6 [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
