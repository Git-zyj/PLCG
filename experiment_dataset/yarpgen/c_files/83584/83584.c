/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((20248 ? 4294967295 : 4294967287)))), ((-94 ? (min(124, -2137813752920177979)) : 166))));
    var_13 = ((((((((166 ? 65530 : 21795))) ? 107 : ((46858 ? 18689 : 8056626181354004218))))) ? ((6740016546466104199 ? (!101) : 175)) : 32335));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 6;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] |= 511;
                                arr_16 [2] [i_1] [i_0] [i_0] = (min((((max(0, 18691)))), 307001500));
                                var_14 = (min(var_14, (((+((850 ? (-2147483647 - 1) : ((69 ? 676279496 : 1)))))))));
                                var_15 *= ((((((((22 ? 27999 : 28))) ? ((44 ? 1073 : 9181694168933380319)) : -3618687795))) ? 15970187454180486862 : (((((234 ? 4294967295 : -123)))))));
                                var_16 ^= (max(0, ((((((-9223372036854775807 - 1) ? -1 : 2476556619529064753))) ? ((-2 ? -489725009 : -2137813752920177979)) : 853))));
                            }
                        }
                    }
                }
                arr_17 [i_1] [i_1] [i_0] = (~((80 ? (-9223372036854775807 - 1) : 16)));
            }
        }
    }
    var_17 = -833;
    #pragma endscop
}
