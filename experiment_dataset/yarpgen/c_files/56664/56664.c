/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = ((!(((1 % ((~(arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_14 = var_7;
                    arr_8 [1] [i_1] = ((((min((max(5, -105)), (13 || 1)))) >> (var_1 + 7394976138741140926)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = (((((((((arr_0 [i_4] [i_1]) ? 1 : 11882105512240498466))) ? 1 : ((min(-1, 1)))))) ? 5456912606242145709 : 2147483628));
                                var_16 = (min(var_16, (((((min(((min(var_2, var_5))), var_4))) ^ (arr_13 [i_0] [i_0]))))));
                                var_17 -= 16192;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(3166220943151564212, var_0));
    #pragma endscop
}
