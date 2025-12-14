/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = arr_0 [i_0] [22];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = 2603716330;
                                var_16 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_11;
    var_18 = ((((min(((238 ? var_8 : 4)), (32767 + 133363454)))) ? ((-34 ^ (!0))) : (!var_5)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_19 = ((((((4161603827 ? 0 : 804744830)) << (var_2 - 198))) < 150));
                arr_18 [i_5] [17] = (+(((arr_17 [i_5] [i_5]) ? (arr_17 [i_5] [i_5]) : (arr_17 [i_5] [i_5]))));
                var_20 = ((+((4161603845 + ((((arr_7 [i_6] [i_6] [24]) + 51)))))));
            }
        }
    }
    #pragma endscop
}
