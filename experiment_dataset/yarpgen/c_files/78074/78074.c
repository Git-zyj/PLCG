/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_19 = (max(var_19, ((((arr_2 [i_0 - 1] [i_1 + 1]) != (arr_2 [i_0 + 1] [i_1 - 2]))))));
            var_20 = 1180606910804189535;
            var_21 = 3415085596086929909;
            arr_5 [i_1] [i_1] = (!4);
            var_22 |= 1;
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_0 + 1] [2] |= (((arr_3 [i_0 + 1] [i_2]) ? (arr_6 [i_2]) : 8162823084477818845));
            var_23 = ((!(arr_6 [i_0 + 1])));
        }
        var_24 = 3161453085;
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        var_25 = (min(var_25, ((max(((((arr_3 [i_3] [i_3 + 1]) ? (arr_6 [i_3]) : 2938050164))), ((((9377982577667554773 << (((arr_2 [i_3] [i_3]) + 2100496467)))))))))));
        var_26 = (min(var_26, (((var_16 ? ((min((arr_9 [i_3 - 1]), (arr_9 [i_3 - 2])))) : -57)))));
        var_27 = (max(var_27, (~382746111)));
    }
    var_28 = ((192218544306506127 ? ((-((max(0, var_9))))) : var_6));
    #pragma endscop
}
