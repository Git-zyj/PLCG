/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 = var_13;
                            arr_9 [i_0] [i_1] [i_0] [i_3] = (((~2901) ? (((~(arr_2 [i_1] [i_0])))) : ((((((arr_5 [14] [1] [i_3]) << (var_11 - 978696323942669498)))) / (arr_3 [i_0] [i_0] [i_0])))));
                        }
                    }
                }
                arr_10 [i_0] = (((arr_3 [i_0] [i_0] [i_1]) ? 17708493709183555569 : (arr_6 [i_0] [i_0] [i_0] [18])));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((((max(((-2901 ? 63133 : 2929)), (((var_2 && (-9223372036854775807 - 1))))))) ? ((((arr_2 [i_0] [i_0]) > (var_10 > 25)))) : -2930)))));
                                arr_21 [1] [i_0] = ((((((var_9 >= var_0) % (min((arr_14 [i_0] [i_0] [i_0]), var_15))))) && (var_4 + 1)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((~(((((-1482504204 ? -518285562 : 222))) ? (arr_13 [i_9 - 1] [i_7] [i_7]) : (var_3 >= -27059))))))));
                                var_20 *= 2109;
                                var_21 += 1858;
                                var_22 = ((~((var_10 ? (arr_8 [i_0] [18] [i_9] [i_7 + 2] [i_9 - 1] [9]) : (arr_8 [i_0] [i_1] [i_7] [i_7 + 2] [i_9 - 1] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 += (((((~(var_1 * 0)))) ? (max(((max(-518285565, -121))), var_12)) : (((var_13 ? (~var_1) : ((max(var_9, var_5))))))));
    #pragma endscop
}
