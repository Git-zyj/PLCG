/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_2] = ((((!((14622294815393540257 && (arr_7 [i_2])))))));
                    arr_9 [i_0] [3] = (~((-40 ? -15248649 : -15248666)));
                }
            }
        }
    }
    var_11 = ((((var_0 ? (~var_6) : (max(15248647, 18446744073709551615)))) % (((-2103970255 | ((18446744073709551605 ? 7521011028490848970 : 2103970274)))))));
    var_12 = (((var_1 | -2103970276) ? (((!15248624) ? -125 : (24731 <= 26288))) : (((18446744073709551592 ? var_2 : -32766)))));
    #pragma endscop
}
