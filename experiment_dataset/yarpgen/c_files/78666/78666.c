/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -19769;
    var_19 = (((((-479498566 + 8) < var_9))) >> (((!((max(1, 63)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = ((((45 ? ((((-31 + 2147483647) >> (36 - 32)))) : 167867399)) >> (4514732873833391061 - 4514732873833391039)));
                var_21 = (((~16359) ^ (max(14304596578535968699, 13932011199876160530))));
                var_22 *= ((((max(-389145134, ((max(-97, 56)))))) & (-9024664970931628654 & 1900722351)));
                arr_5 [i_0] [i_0 - 2] [8] = (((((!(((-86 ? 4514732873833391085 : 65535)))))) + 0));
                var_23 = ((-(max(4794479150750524354, 3221250314))));
            }
        }
    }
    var_24 = var_9;
    #pragma endscop
}
