/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 && ((((((var_7 ? var_0 : -7938411634437916730))) ? (~4503591037435904) : (var_12 <= 1383991699))))));
    var_16 = (max(var_16, -var_5));
    var_17 -= ((-((-(1383991706 - var_12)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1 - 3] [i_2] [i_1 - 3] [i_2] = ((~((((((arr_1 [i_0]) >> (2910975597 - 2910975544)))) ? (1383991692 >= 1383991727) : ((1403035110 >> (1383991718 - 1383991691)))))));
                        var_18 -= ((~((~(((3627831642 <= (arr_11 [i_0]))))))));
                        var_19 = (min(var_19, (((-1885675320 | ((0 ? 1383991702 : 1383991692)))))));
                        arr_13 [i_3 + 1] [i_2] [i_1] [i_0] = (min((min((max(var_5, (arr_2 [i_0]))), (arr_11 [i_0]))), (arr_5 [i_1 - 2])));
                    }
                }
            }
        }
        var_20 = (min((min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0] [1] [i_0] [i_0]))), (!2628954083)));
        arr_14 [i_0] [i_0] = ((((arr_1 [8]) ? (max(56113, 2132574805)) : (~1))));
        var_21 = (min(var_21, (arr_2 [i_0])));
        var_22 = (max(var_22, (((~((~(313150361027481678 <= var_13))))))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_23 = (max(var_23, (((-(1 / 14869355814071322004))))));
        var_24 = (arr_15 [i_4] [i_4]);
    }
    #pragma endscop
}
