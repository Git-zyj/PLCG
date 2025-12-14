/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((max(var_13, var_3)) >> ((((2143561709 ? var_10 : ((var_12 ? var_9 : var_10)))) + 14432)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 += ((((((0 ? 4294967295 : -1842388924))) >= (((arr_4 [i_0] [10]) ? var_11 : (arr_1 [i_0]))))));
                arr_6 [i_0] [9] = (var_4 / 403874883);
                var_16 = min(-1502302450, 44067);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [8] [i_3] [i_1] = ((~(max(((var_1 ^ (arr_5 [9]))), ((58 << (363790075 - 363790075)))))));
                            var_17 = ((((((((max(var_4, 0))) < (max(var_6, 492041677)))))) ^ (min((min((arr_2 [i_0]), (arr_4 [i_0] [i_1]))), var_2))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, (((min((((var_0 ? 0 : -1502302462))), (min(var_0, 197))))))));
    var_19 = min((((var_4 / (min(var_13, var_9))))), var_0);
    var_20 += var_1;
    #pragma endscop
}
