/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((!var_7) << (((min(2146865920, -16)) + 25)));
                var_17 = ((((max(var_11, (((7274989540521950536 && (arr_4 [i_0]))))))) ? (~2148101367) : ((((((min(var_12, 1))) && 2146865896))))));
                var_18 = ((((((arr_1 [i_1]) ? 31 : 246))) != (max(((max(-10, (arr_4 [3])))), 2146865924))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] = ((2148101400 ? -8652 : 48));
                            var_19 = (~(max((((1 ? 2146865896 : 2148101400))), -2906591769994824460)));
                            var_20 = (max(((((arr_11 [i_0] [i_1] [i_0] [i_1]) ? (min(1251589720, 3278635276071812794)) : 1991154743))), ((-(arr_1 [i_1])))));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_1 ? var_6 : (((2148101371 ? ((1 ? var_12 : 2146865903)) : ((var_3 ? 2148101376 : 2146865896)))))));
    var_22 = -1251589719;
    #pragma endscop
}
