/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 ^= ((~(((-31911 + 2147483647) << (21400 - 21400)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_15 = (max(((((max(var_1, 3509251627))) ? (min(var_1, 3509251627)) : 122)), var_13));
            var_16 = (min(var_16, var_1));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_17 = (((((((4294967295 == (arr_4 [i_1]))) ? (!-1735801915624377440) : (var_9 & 116)))) & ((4294967285 ? -1735801915624377443 : (max(var_0, 3509251627))))));
                            var_18 = (11 == var_12);
                            var_19 = (((arr_2 [i_1]) < (((arr_2 [i_2]) / -40350278))));
                        }
                    }
                }
            }
            arr_12 [i_1] [i_0] [i_0] = 6;
        }
        var_20 = ((1735801915624377443 ? ((max(785715667, 164273704))) : (((~(min(var_6, 579139518477667141)))))));
    }
    var_21 = -579139518477667123;
    var_22 = 0;
    #pragma endscop
}
