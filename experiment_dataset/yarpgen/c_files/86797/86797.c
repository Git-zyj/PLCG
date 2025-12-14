/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((~(min(20606, ((1 ? 1 : 364665817))))));
                var_20 = ((-(min(((-9223372036854775794 ? 1 : -23758)), 13710))));
            }
        }
    }
    var_21 = 13706;
    var_22 = (((((((max(1, 1)))) - 2613049924287035211))) || ((((1 * 924462590565774262) - (((max(1, 13700))))))));
    var_23 = ((((min(1, -4353504005861809611)))) | var_17);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    arr_11 [i_3] [i_3] [i_4 - 1] = (~12062733082248511963);
                    arr_12 [i_3] [i_3] [i_4] = ((max(1, ((3956454371 ? 1 : 51825)))));
                }
            }
        }
    }
    #pragma endscop
}
