/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_10 *= 175666303;
                        var_11 = (max(var_11, (!-6406515379114858301)));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_12 = (min(var_12, (((-1473119661 ? (~-6406515379114858307) : (((206 ? -29 : 7))))))));
                        var_13 = (max(var_13, (((((((var_4 ? 8199 : (-9223372036854775807 - 1)))) ? 1 : -4422))))));
                    }
                    var_14 = (min(var_14, (((((7773 ? 1 : 740710763)) < -51)))));
                }
            }
        }
    }
    var_15 = (max(var_15, 17));
    var_16 = (min(var_16, (((((-((-3 ? var_8 : 6406515379114858333)))) * (((var_7 / (-1137209190 / 5)))))))));
    #pragma endscop
}
