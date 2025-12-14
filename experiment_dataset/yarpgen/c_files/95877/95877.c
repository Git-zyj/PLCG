/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0 - 2] [i_2] [i_1] [i_2] [i_3] = (max(18446744073709551615, 999658814));
                        var_10 &= ((((var_5 ^ 9209879033883436133) ? (var_9 | var_3) : var_0)) == ((var_9 ? var_9 : var_9)));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_11 -= ((((min((var_7 - 20773), ((max(var_9, 8257)))))) ? var_4 : (34925 == var_7)));
                        arr_17 [i_2] = ((34896 ? ((2802476342 ? -8365484589724778880 : var_3)) : var_6));
                        var_12 ^= (((var_2 != var_5) ? var_2 : (min(-75464740, (max(34929, -597002430456757804))))));
                    }
                    var_13 = (max(var_13, (((((min((((var_6 ? 34690 : var_9))), -var_4))) ? (((var_3 ? (min(var_8, 30611)) : var_9))) : ((((max(32287, 25889))) ? (((var_7 ? var_3 : var_5))) : 6621907589556062620)))))));
                    var_14 = (min(((var_9 ? -1 : 25730)), ((min(34873, var_9)))));
                    arr_18 [i_2] [i_1] [i_2] = ((((!(((var_4 ? 3979619887 : -8257))))) ? ((((((var_8 ? var_1 : 2639778019))) ? ((max(-63, 25889))) : (var_1 || var_4)))) : 6875809387710954438));
                }
            }
        }
    }
    var_15 = (20788 + 42169);
    #pragma endscop
}
