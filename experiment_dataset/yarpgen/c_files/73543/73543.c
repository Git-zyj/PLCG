/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((18446744073709551607 ? 18446744073709551615 : 655606122));
        var_10 = ((!(arr_0 [i_0])));
        var_11 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 = ((((max(49076, ((var_3 ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))))) ? ((-750929544 ? -733642080 : -6489582020861178094)) : ((((!((max(56091, 0)))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    var_13 = (max(var_13, ((min(((min((((arr_10 [i_1] [i_1] [i_1]) ^ 1)), ((var_7 | (arr_1 [i_3])))))), ((6489582020861178094 * (min(var_3, 16901241274671282192)))))))));
                    var_14 = ((3639361174 ? -167276515333285759 : 167276515333285759));
                }
            }
        }
    }
    var_15 = 107;
    var_16 = (((var_4 < ((188 ? -2082942594 : 124)))));
    #pragma endscop
}
