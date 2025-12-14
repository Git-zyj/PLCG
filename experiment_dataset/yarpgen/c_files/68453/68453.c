/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (-87 ? var_3 : (max(((3625 ? var_11 : 9007199254740480)), ((max(0, 262143))))));
    var_14 = (max(var_14, (!9223372036854775795)));
    var_15 = (min(2147483636, (62876 >= var_4)));
    var_16 |= ((4443113937864274668 > ((min(2661, -31333)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 += ((((-7746524691413429169 ? var_7 : (arr_1 [i_1 + 1]))) + ((((8447986406151477826 ? 4294967295 : var_9))))));
                arr_5 [i_0] [i_0] [i_1 - 1] = ((-((-31333 ? 268434944 : 4294967295))));
            }
        }
    }
    #pragma endscop
}
