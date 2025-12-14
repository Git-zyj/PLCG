/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += -var_12;
    var_19 = (min(0, (var_7 || 8191)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((((1043445943 ? ((65535 ? 4294967295 : 0)) : (~65535)))) ^ ((5277 ? (((214 ? 0 : -1533428892))) : (min(-1097531151756943427, -1438613702)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [0] [i_1] = ((((((arr_8 [i_0] [i_1] [i_2] [i_2] [i_3 + 1] [i_4]) ? (arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [0]) : (arr_8 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4])))) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 57052));
                                var_21 = (max(var_21, ((min((max(((min(227, 222))), (arr_6 [i_4] [i_0] [i_4]))), var_8)))));
                            }
                        }
                    }
                }
                var_22 -= ((~((-((var_3 ? 14 : (arr_7 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
