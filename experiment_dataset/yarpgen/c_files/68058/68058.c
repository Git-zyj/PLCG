/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(!var_1)));
    var_11 = var_8;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = 1418555861;
        arr_3 [i_0] [14] |= (((((((max(1418555861, 4294967295))) ? (!var_5) : ((1 ? 12095323297331204155 : -1418555862))))) ? (((var_0 && (!var_3)))) : -10));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = 1;
        arr_8 [i_1] [i_1] = ((((min(var_4, var_9))) ? ((min(-48, var_0))) : ((min(40944, 1)))));
        arr_9 [i_1] = 3480831406;
        arr_10 [i_1] = 0;
    }
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        arr_13 [i_2] = 11034;
        arr_14 [i_2] = (((max(var_1, ((var_2 ? -7 : var_7)))) * 1418555861));
        arr_15 [i_2] &= ((((min(4127528356, 0))) ? ((var_1 ? ((1 ? 226 : 6351420776378347461)) : (((var_5 ? -48 : var_1))))) : 1418555861));
        arr_16 [i_2] |= 4176418605;
    }
    for (int i_3 = 3; i_3 < 23;i_3 += 1)
    {
        arr_21 [i_3] [i_3] = ((~(!8345036048328761011)));
        arr_22 [22] [i_3] = (9223372036854775807 + -1012294681843585191);
        arr_23 [i_3] = (!-2991195692924115455);
        arr_24 [22] [i_3] = 30898;
    }
    var_12 = (min((min(var_4, var_2)), var_9));
    #pragma endscop
}
