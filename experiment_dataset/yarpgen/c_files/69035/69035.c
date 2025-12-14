/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((32764 > 69805794224242688) ? -var_1 : ((var_6 ? var_12 : var_6)))) & (var_3 * -59305));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((max(((-32763 ? (181 ^ 133) : ((((arr_0 [i_1] [i_1]) < -82497983))))), (((arr_4 [i_0]) ? (arr_4 [i_1 + 1]) : (arr_4 [i_0]))))))));
                arr_5 [i_0] [i_1] = (min((!59294), (min(var_12, 59305))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_1] [i_2] = (((((var_12 > 1) <= ((4294967295 ? var_5 : 181)))) ? (((-255 ? ((min(12028, -123))) : 7598))) : ((((max(697236229, (arr_9 [i_0] [i_0] [i_0])))) ? ((min(1028534012, 0))) : var_11))));
                            var_16 = (max(var_16, ((((((((min(133, (arr_2 [i_3 - 1]))))) != (((arr_1 [i_0]) ? (arr_6 [i_0] [i_2] [i_0]) : var_7)))) ? ((max((min(6270, 5)), (max(59294, -84))))) : 6251)))));
                            var_17 = (((((arr_6 [i_2] [i_1 - 1] [i_3 - 1]) == (arr_8 [i_0] [i_2] [i_2] [i_2]))) ? var_11 : (~-7598)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
