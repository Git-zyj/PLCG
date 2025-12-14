/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(8318864913495121111, ((min(-65512, ((0 >> (2768 - 2742))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((((62755 ? 4081 : (arr_2 [i_0])))) % 107)) - (((((0 + 235) || (~2760)))))));
        arr_4 [i_0] [i_0] |= 77337030;
        arr_5 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (((arr_2 [i_1]) * (((((2769 + var_1) <= (arr_1 [i_1] [i_1])))))));
        arr_9 [i_1] &= ((((((((max(216, 44)))) | ((var_9 << (var_6 - 2629460505)))))) || (arr_7 [i_1])));
    }
    var_18 = (min((~214), ((((14562845532074141787 ? var_9 : 237))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_19 = arr_12 [i_2];
                arr_15 [i_3] = (-6024342789136369760 - 2777);
                var_20 |= ((!(((arr_2 [i_3]) > (arr_2 [i_3])))));
            }
        }
    }
    #pragma endscop
}
