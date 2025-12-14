/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = (7797229417671320502 | ((10649514656038231113 ? -9223372036854775807 : 7797229417671320502)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = ((-3764259518046852734 >= (((3308493894 ? (!7797229417671320502) : (834551102 >= -5246377093982641957))))));
                                var_13 -= (min(((var_3 && (((12884939730114691132 << (var_8 - 884089797439380947)))))), (!10649514656038231105)));
                                arr_12 [i_0] [i_1] [i_2] [i_4] = (max((!18014398505287680), (18446744073709551615 - var_9)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max((((~7540) ? 4086236066 : (~4887))), (!7797229417671320502)));
    var_15 = (max(192, 116));
    #pragma endscop
}
