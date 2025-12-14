/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((((0 ? (-2147483647 - 1) : var_7))) / (17179869180 - 18446744073709551615))), var_8));
    var_12 -= 1247460406;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 ^= var_2;
        var_14 ^= ((((65532 ? 99 : 8372127620718609491)) & 18333695086402971058));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = var_6;
        arr_5 [i_1] [i_1] = (((max(1323476386304786120, -4404788384396469272)) - (5894328972688494747 + 1)));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_1] = (var_5 || 3347044550);
            var_15 = (((18446744073709551615 && -11132) << (var_5 + 29809)));
            arr_11 [0] [i_1] = ((((((min(-6079444420902270497, -6982293662260085147))) ? ((1 ? -1239339219 : -277)) : ((min(4, 1))))) <= var_8));
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_16 = (min(((0 ? 0 : 1)), ((min(60, -6079444420902270493)))));
        arr_14 [i_3] = (((((10506238845010303130 == 6651352423098422414) ? ((var_6 >> (var_1 - 2858))) : (var_1 && var_7))) << (-7555427865318245594 || 37912)));
    }
    #pragma endscop
}
