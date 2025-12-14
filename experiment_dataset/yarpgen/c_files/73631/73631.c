/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((~(min(2614835795, 9))));
                arr_5 [i_0] [i_0] = (((!((((arr_0 [i_0]) << (var_4 - 2067295976)))))));
                var_16 = arr_0 [i_0];
                var_17 = ((((548663904874185312 ? var_3 : (17898080168835366298 | 1))) + (((1857486612890470681 != 2614835779) ? ((1680131517 ? 548663904874185312 : -1401993787)) : (~690951518)))));
            }
        }
    }
    var_18 = max(((var_0 * ((3462570192 ? 2614835786 : 4020383328)))), var_9);
    var_19 = (1680131510 & 2147483647);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_20 |= ((((((arr_10 [i_3] [i_3] [i_4] [i_3]) + 2147483627))) ? (arr_10 [i_2] [i_2] [i_2] [i_2]) : (arr_10 [i_4] [i_3] [i_2] [i_2])));
                    var_21 = (min(((2574918023 ? -var_10 : (((min(1, (arr_9 [i_2] [i_2]))))))), ((2614835795 ? (~var_2) : ((((2614835782 && (arr_8 [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
