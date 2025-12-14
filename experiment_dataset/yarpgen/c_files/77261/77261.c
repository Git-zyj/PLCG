/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= 59708;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((1951520179 ? (1951520178 ^ -7216995316906653179) : 116)))));
                            var_22 -= (min(var_18, (((arr_8 [4] [12] [i_2] [i_2]) ? var_6 : 4194303))));
                            var_23 += (((((((var_10 && (arr_3 [i_0] [i_0] [i_0]))) ? 9090401610001776202 : (arr_5 [i_0] [10])))) > (288230376151711742 % var_7)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {

                            for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                            {
                                var_24 = (min(var_24, 1));
                                var_25 -= ((var_9 ? 1918932218 : 6625369148893116108));
                            }
                            for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
                            {
                                var_26 *= (968315771 ? (59441 == -1918932250) : 28);
                                var_27 |= (((((((1 ? var_0 : 3104261833)) - (703256268 - -8060657816069390817)))) ? ((((((54802 ? (arr_1 [i_1]) : 39)) > ((((arr_9 [4] [i_4] [i_4]) > (arr_14 [i_7] [i_0] [i_1] [i_7])))))))) : ((11594 ? (((arr_10 [i_0] [i_7] [i_4] [i_7]) >> (((arr_4 [i_7] [i_0]) - 1377097406)))) : 65535))));
                                var_28 -= (((arr_2 [i_0] [i_0]) << (1447456078 - 1447456031)));
                                var_29 = (min(var_29, ((((max(((65 ? 65535 : (arr_2 [i_0] [i_7 - 2]))), var_7)) != (arr_11 [i_7] [i_7] [i_7] [i_0]))))));
                            }
                            var_30 = (max(var_30, 1951520179));
                        }
                    }
                }
            }
        }
    }
    var_31 |= (max(12500747548548480754, -2998705022745619820));
    var_32 -= (max(var_1, var_4));
    var_33 = (max(var_33, var_10));
    #pragma endscop
}
