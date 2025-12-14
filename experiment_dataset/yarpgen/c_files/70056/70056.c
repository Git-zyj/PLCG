/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((18446744073709551615 & ((max(63, -64)))));
                            var_15 = (min(var_15, (!var_9)));
                            var_16 = (((arr_5 [i_1] [i_3] [i_2]) || (((var_6 & (~1889602115133292490))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_17 ^= ((-(7634479199071161379 + 524287)));
                            var_18 = (((arr_8 [i_4 + 1] [i_4 - 1]) != (min((arr_0 [i_0] [i_0]), (arr_18 [i_0] [i_4])))));
                        }
                    }
                }
                var_19 = (((106 * var_2) == (((((min(-325784250, -53))) && ((max((arr_16 [i_0] [i_1] [14] [i_1] [i_0] [i_1]), -63))))))));
                arr_19 [i_0] [i_0] = ((((((524280 > 39) >= (((!(arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))))))) == ((((min(50605, (arr_7 [7] [i_0])))) ? 50605 : ((((arr_2 [i_0]) < 4)))))));
            }
        }
    }
    var_20 -= (min(var_0, ((((max(202, var_12))) ? var_8 : 3))));
    #pragma endscop
}
