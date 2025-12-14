/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_10 >> (var_4 + 7870))) / var_1)) != var_9));
    var_12 = var_3;
    var_13 = (var_10 % var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (((3732761893 * 1478675736) << (max(((((arr_1 [i_0]) <= (arr_5 [i_1])))), (arr_3 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 &= (((((((arr_3 [i_3]) && (arr_8 [i_0] [i_0] [i_1] [i_1 - 1] [i_0]))))) > (((arr_6 [i_0] [i_1] [i_1] [i_3]) ^ (((arr_2 [i_0] [i_1] [i_4]) ^ (arr_3 [i_3])))))));
                                var_16 = (max((((arr_11 [i_0] [i_1] [i_2] [i_2 - 3] [i_4] [i_1] [i_1 - 1]) - (arr_11 [i_0] [i_1] [i_2] [i_2 - 3] [i_4] [i_3] [i_1 - 1]))), (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
                                var_17 = (arr_2 [i_3] [i_2 + 3] [i_1 - 1]);
                                var_18 = (min((min(-4442119578057465980, 2816291559)), (4442119578057465980 && 2115702275)));
                                var_19 = (min(var_19, ((max((max(4442119578057465980, 1)), (((0 >> (-2439384162511125744 >= 72057594037919744)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
