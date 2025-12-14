/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (1313555196587387633 / var_4)));
    var_13 = ((var_0 != (-8 <= var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (((((~(15709527857462175718 && 244)))) ? var_7 : ((max((4184567256 > var_8), (arr_0 [i_1]))))));
                                var_15 = ((((4184567252 << (287603251 - 287603249))) > (((248 ^ (arr_8 [i_4 + 1] [i_4] [i_4] [4] [i_4 - 1] [i_4]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_16 = (min(var_16, 10));
                                var_17 *= ((110400017 ? 1 : 1));
                                var_18 &= var_2;
                                var_19 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 4; i_8 < 7;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                {
                    var_20 = (((((((0 || var_11) == (((var_2 > (arr_4 [i_8])))))))) ^ (((((59224 ? (arr_4 [i_8]) : 1))) ? (((min(-2117, (arr_12 [0] [0] [i_8]))))) : 4184567253))));
                    var_21 = ((-32744 ? ((4057433988 ? -378598668 : (arr_18 [i_8 - 4] [i_9] [i_9] [i_10]))) : (arr_25 [i_10 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
