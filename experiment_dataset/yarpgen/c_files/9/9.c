/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = (((+(((arr_3 [i_1] [7]) ? (arr_8 [i_2]) : (arr_4 [i_0] [i_1] [i_0]))))));
                    var_17 = (arr_3 [4] [i_2]);
                    var_18 = ((189165883254272929 % (((15301899384542283255 ? (arr_5 [i_2] [i_0]) : -28565)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = (min(var_19, ((((arr_15 [i_3]) / (((arr_15 [i_3]) * (arr_15 [i_3]))))))));
                arr_16 [i_4] [i_3] = ((!(((((37357 ? 16081 : 26326)) | var_1)))));
            }
        }
    }
    var_20 += (((65535 <= 8873) ? var_16 : 117));
    #pragma endscop
}
