/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((max((((arr_2 [9] [i_1] [i_1]) ? var_1 : -3237916863848896829)), (((3237916863848896828 ? 1 : 1))))) % ((((249 != (arr_1 [i_0 - 1])))))));
                arr_6 [i_0] [i_0] = (max((((arr_3 [i_0 - 2]) ^ (arr_3 [i_0 - 1]))), var_6));
                arr_7 [i_0] [i_0] = (arr_1 [i_0 + 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            {
                arr_13 [10] [i_2] = (min(1, (min((!5746746983020602832), (!var_4)))));
                arr_14 [i_2] [6] [i_3 - 2] = 0;

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_17 [i_2] = (((((((14559859754918099226 ? 1836584583535971458 : -19680))) ? var_3 : ((var_5 ? 31883 : -3237916863848896829)))) ^ 1));
                    arr_18 [i_2] [i_3 - 2] = (min((((var_4 <= ((max(1, var_6)))))), 31883));
                    arr_19 [i_2] [i_2] [i_2] [i_2] = (min(-0, ((((((-9223372036854775807 - 1) ? -4493328129468165881 : (arr_9 [i_2])))) ? (min(-16263, 0)) : 932717989388602205))));
                }
                arr_20 [14] [i_3] [i_3] = ((((min(var_8, (max(216194586, 11929441307433489989))))) ? (!var_0) : (((((var_5 ? 2351321737 : (arr_11 [i_3 + 1] [i_2] [i_2])))) ? var_6 : var_8))));
            }
        }
    }
    #pragma endscop
}
