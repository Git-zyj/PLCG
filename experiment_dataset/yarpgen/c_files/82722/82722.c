/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_15 & (max((-9201149208845153777 | 9201149208845153776), (1 ^ 44622)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 *= (((max(0, -9201149208845153786)) >> (((((~127) ^ (min(72380885, 2880)))) + 2940))));
                                var_21 = 9201149208845153776;
                                arr_11 [i_0] [i_1] [i_2] [i_1] [i_4] = ((((9201149208845153786 ? 9794 : 3176362565563238632)) | (((((104 << (32767 - 32765)))) ? (20913 ^ 8956090528171370231) : (-104 & 117)))));
                                var_22 = ((((((min(-9201149208845153777, 127))) & (~16703868587648741532)))) ? ((((min(9201149208845153777, 9201149208845153777))) ? 2361478675 : (~16703868587648741525))) : (~8));
                            }
                        }
                    }
                    var_23 = ((((((min(46, 933938126))) ? (629276528 - 32767) : (18446744073709551615 + 0))) + (min(4214473771465062303, -31329))));
                }
            }
        }
    }
    var_24 = (min(var_5, ((1 * (31338 + 17)))));
    #pragma endscop
}
