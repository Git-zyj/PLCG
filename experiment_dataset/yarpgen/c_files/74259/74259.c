/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [16] [i_3] [i_2] [i_3] = (1 % 6697049741084992622);
                            var_15 = 6697049741084992622;
                            var_16 = (((1291624949 >> 1) >= 242));
                            var_17 = (((14851 && 16634056696969096163) <= 1291624949));
                        }
                    }
                }
                var_18 = (((31961 ^ -14837) & 4294967295));
                var_19 = (((10733450476234274950 >> 0) >> (-27914 + 27919)));
                var_20 = 4294967295;
            }
        }
    }
    #pragma endscop
}
