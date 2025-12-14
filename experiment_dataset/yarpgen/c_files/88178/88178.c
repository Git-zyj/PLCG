/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 - 2] [i_1] &= var_10;

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_11 [i_0] [i_1 - 2] [i_1 - 1] [i_0] = (((var_14 % (arr_1 [i_0]))));
                    var_18 += ((((-82 ? 18446744073709551596 : 56587)) | (((4294967295 ? var_0 : (((arr_0 [5] [i_0]) ? (arr_5 [i_0]) : -1)))))));
                    var_19 |= (((((((((arr_0 [i_2] [i_0]) ? (arr_8 [i_2] [i_1 - 2] [6]) : (arr_9 [i_2] [i_2 + 1] [i_1] [i_0])))) ? ((((var_14 < (arr_10 [i_0] [i_1] [i_0]))))) : (170673621 * var_5)))) ? (15 ^ -1) : (var_12 + var_2)));
                }
            }
        }
    }
    var_20 = ((255 ? 13 : -11699));
    var_21 = (max(var_21, 1));
    #pragma endscop
}
