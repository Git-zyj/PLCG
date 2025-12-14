/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_8));
    var_20 = (((((-(!-1098657742647748787)))) ? ((((((var_5 ? var_2 : 65535))) ? -117 : ((var_6 >> (var_1 + 22698)))))) : (max(var_12, (max(3075307030, 8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [17] [i_2] [i_2] = (((((224 ? (30608 && 134201344) : -93))) || 3309656353052991757));
                    var_21 = ((((((((~(arr_6 [i_1] [i_1])))) ? ((4294967295 << (((arr_2 [2] [13] [14]) - 37)))) : (arr_3 [i_0] [i_1] [i_0])))) ? ((((arr_1 [i_0] [i_1]) < 65534))) : -8));
                    var_22 = ((10 ? (((arr_1 [i_0] [i_1]) ? var_9 : (arr_3 [i_0] [i_1] [9]))) : (((((max(34933, 1754222977))) ? 65535 : -29)))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_23 = (((~15) ? (max(4294967285, (((var_8 / (-32767 - 1)))))) : (((((arr_5 [i_0] [i_3] [1] [i_1]) && (arr_5 [i_3] [i_3] [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_3] [i_4] [i_5] = min((max(2540744318, (-2147483647 - 1))), (min(2641649988, (arr_10 [i_0] [i_3]))));
                                var_24 = (max(var_24, (((-996394276 ? (((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_4] [i_5] [i_3]) : 18446744073709551594)) / (((-(arr_6 [11] [1])))))) : ((max((arr_3 [i_4 + 1] [i_4 - 1] [i_4 + 1]), (arr_0 [i_4 - 1] [7])))))))));
                                var_25 = ((65530 ? 524287 : 7032328878451863654));
                                var_26 -= arr_8 [i_0];
                                var_27 = ((((5 ? (arr_14 [i_4 + 1] [i_4 - 1] [i_4]) : (arr_14 [i_4 + 1] [i_4] [i_4]))) ^ ((max(0, (((!(arr_6 [i_1] [i_1])))))))));
                            }
                        }
                    }
                }
                var_28 = var_0;
            }
        }
    }
    #pragma endscop
}
