/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((224 ? 28 : 44));
                var_17 = 503316480;
                var_18 = ((+(((4294967295 < 4294967295) ? ((min(16801, var_10))) : 13532))));
                var_19 = ((~((255 ? -15595 : (!1860759527727064567)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_20 ^= ((((((4294967287 ? 1 : -15595)) << ((((min(var_3, -1522))) + 2620)))) != ((+((max((arr_5 [i_2]), 75)))))));
        var_21 = ((((((max(32256, 32764))))) >= (max((arr_6 [i_2]), (arr_8 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_22 = ((~((((-9211200959739731505 + 9223372036854775807) >> (-1 + 13))))));
        var_23 = -20;
        arr_12 [i_3] = ((-(arr_2 [i_3] [i_3])));
    }
    var_24 &= var_2;
    #pragma endscop
}
