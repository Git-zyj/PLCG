/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(1, 0))) % (max(((-116 ? 31389 : 31389)), (9706 ^ 31389)))));
    var_17 = ((var_12 ? var_2 : var_12));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_18 = (max(var_18, ((((var_9 & var_2) < ((var_6 ? var_11 : var_10)))))));
        arr_2 [i_0] = (((max(111, -20))) ? (((var_7 ? var_3 : var_15))) : ((var_2 ? var_10 : var_2)));
        var_19 = (((((((max(var_9, var_5))) ? (var_12 == var_10) : ((var_11 ? var_15 : var_8))))) ? (((-79472936142840774 ? 5266143763479229452 : 8935141660703064064))) : ((var_15 ? var_3 : var_6))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((var_11 ? var_13 : var_5))) ? (((var_10 ? var_4 : var_11))) : (((((var_4 ? var_11 : var_10))) ? (1 * 79472936142840773) : var_6))));
        arr_7 [i_1] = (max((((var_3 ^ var_8) ? var_2 : var_14)), (max(var_14, var_1))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_14 [i_1] = (((min(-15, -4624609762441970593)) & (((var_5 ? var_12 : var_12)))));
                        arr_15 [i_1] [8] = ((var_4 ? ((var_3 * (min(0, var_10)))) : var_4));
                        var_20 -= (((((var_9 ? var_4 : var_13))) ? ((55833 ? 1 : 14497279327914899220)) : ((892134723 ? 71192404 : 14497279327914899220))));
                        var_21 = ((224 ? -79472936142840774 : 0));
                        var_22 = (4624609762441970580 ? -1 : ((min(5, 68))));
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = (max((114 >= 128), var_9));
        arr_19 [i_5] = (((((var_10 ? var_0 : var_0))) ? ((var_14 ? var_2 : var_10)) : (((min(55833, 1))))));
        arr_20 [16] = ((((max((var_6 > var_9), ((16366947100999887827 ? var_12 : 55839))))) ? (max(((var_6 ? var_9 : var_6)), (((var_2 ? var_8 : var_1))))) : (min((max(var_15, var_6)), ((var_7 ? var_11 : var_14))))));
        arr_21 [i_5] [i_5] = ((((min(var_9, (min(var_6, var_7))))) ? ((max(var_8, var_0))) : (max(var_14, var_10))));
        var_23 = (max(var_23, (536838144 >= 0)));
    }
    var_24 = ((var_13 ? (((((var_4 ? var_15 : var_12))) ? var_3 : ((var_8 ? var_11 : var_4)))) : var_4));
    #pragma endscop
}
