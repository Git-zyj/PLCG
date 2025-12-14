/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] [i_2] [i_3] = (min(-36, (min(48891, (~220)))));
                        var_15 *= ((((130 ? -1253050693 : 11151)) | (min(var_10, ((-846985890 ? -846985890 : (arr_0 [i_1 - 1] [i_2])))))));
                    }
                    var_16 = (min((min(((18 ? 12184 : (arr_8 [i_0] [i_1] [i_1]))), 48891)), -47751));
                    var_17 = min(((min(26378, 17))), (min((arr_4 [i_1]), (min((arr_3 [i_0] [i_1]), (arr_5 [i_0] [i_2]))))));
                    var_18 = (arr_5 [i_1 + 3] [i_2 - 1]);
                }
            }
        }
    }
    var_19 = (min(var_6, 36));
    var_20 = -55358;
    #pragma endscop
}
