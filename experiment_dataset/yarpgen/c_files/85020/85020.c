/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(3112, (min(1, ((-3100 ? 1 : 16384))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] = ((1961726272 ? 16384 : -3100));
                    var_17 = (((((12216 ? 3099 : 1536))) ? 1 : ((min(3112, (min(0, 32760)))))));
                    var_18 = ((((3099 ? 41704 : ((-3085 ? 523776 : 3085))))) > (max(-37, ((-1961726294 ? 4255051080 : -2349584888050039366)))));
                    arr_8 [i_0] [i_1] [i_0] = ((((4185495280 ? (min(54, 1412722976)) : ((max(1961726293, 49151))))) + (((2100646899 - (-1961726273 <= 1))))));
                    var_19 = ((((((1412722976 || 41704) + ((4161259105663279903 ? 1 : 49151))))) ? (min(((15 ? 0 : 4185495280)), 48)) : (((((6 ? 1 : 1412722978)))))));
                }
            }
        }
    }
    var_20 = (min((8 < 1), 65527));
    #pragma endscop
}
