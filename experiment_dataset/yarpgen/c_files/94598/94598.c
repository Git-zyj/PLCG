/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (min(-28, ((((max(65535, 156))) ? 61830 : (!63724)))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_16 = ((!(((65522 ? (min(-29083, 227256493665866484)) : ((-29083 ? 227256493665866478 : 3717)))))));
                    var_17 = 124;
                    arr_9 [i_0] [i_0] [i_2] = ((-((~((10927608570813658504 ? -240055796 : 227256493665866484))))));
                    var_18 = (min(((-195664222952496409 ? 9181316801791493375 : 65535)), ((min(1610612736, 2361)))));
                    var_19 = (min(var_19, 0));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, (!63)));
                    arr_13 [i_0] = (3 ? (min(-7430063875674158716, -226946651)) : (((0 ? -171220721 : 2149759544))));
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_21 *= ((~(~9)));
                    var_22 += (((+-12247) ? (((~(!7)))) : (max(((-2007936067 ? -12 : 7)), -2))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_5] = (max(10927608570813658514, ((max(1, 1)))));
                var_23 = (min(65190, -7858675995076711823));
            }
        }
    }
    #pragma endscop
}
