/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = (281520847 ? 281520847 : ((((-281520839 % 434536351) || 3))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = ((((((((arr_2 [i_1] [i_2]) ? (arr_1 [i_0 - 1]) : 116))) ? ((min(var_7, var_5))) : 281520861))) ? ((-(var_3 >= var_9))) : ((((((arr_0 [i_0] [i_2]) ? -1 : (arr_2 [i_2] [1])))) ? (min(0, (arr_1 [i_2]))) : (min(955442186, (arr_4 [i_0 + 3] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = ((((-1823810686 ? ((var_1 ? var_7 : var_13)) : ((var_11 ? (arr_0 [i_0 + 3] [i_0 + 1]) : var_7)))) != (((((var_9 != (arr_1 [i_2]))) || (((-24 % (arr_7 [i_4] [i_3 + 2] [6] [4] [i_0 + 1])))))))));
                                var_20 = (((((-24 ? 760612849 : -1073741824))) ? ((((max((arr_9 [i_3]), -281520838)) < ((var_1 ? (arr_9 [i_3]) : 1890335995))))) : ((2 ? (434536351 == -1073741824) : -1894709297))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((((-((3 ? (arr_10 [i_5] [i_1] [10] [i_5] [i_6]) : (arr_6 [i_0] [i_1] [8])))))) ? (((arr_14 [i_6] [i_6 - 2] [i_0 + 4] [i_0 + 3]) % var_8)) : (((max((arr_19 [i_0] [i_1] [i_2] [i_5] [i_6]), var_13)) % (min(var_11, var_6))))))));
                                arr_21 [6] [i_1] [i_2] [i_5] [i_6 + 1] = (-106320222 ? -16 : -127490376);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
