/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_16 = (min(var_16, 1363604142310713043));
                    arr_7 [4] [4] [i_0] = ((0 ? ((65535 ? 27 : 25)) : -37));
                }
                arr_8 [i_0] = (((((1 ? 118 : -28))) ? ((-28 ? 0 : 1)) : 1074731000));
            }
        }
    }
    var_17 |= (((((((16555372764082216368 ? -53 : 121))) ? var_9 : var_5))) ? (((((-8 ? -24096 : 3609706217880682892))) ? ((0 ? 15942 : 65535)) : -6)) : ((var_1 ? 13 : ((-42 ? -1074730993 : 19868)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_18 = (min(var_18, 9850544514545146069));
                    var_19 = (((((61440 ? -34 : 124))) ? ((124 ? 7219696369757750380 : 27421)) : ((((((-14 ? 31 : 1))) ? ((49227 ? 17 : 1)) : 249)))));
                    var_20 = (((((97 ? -35 : -1021968249))) ? (((1 ? 384 : -1074731000))) : ((21 ? 16102496954941768559 : -117))));
                }
            }
        }
    }
    #pragma endscop
}
