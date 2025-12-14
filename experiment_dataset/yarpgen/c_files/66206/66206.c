/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((-(min((~var_15), (30 | 558551906910208)))));
                    arr_10 [6] [6] [1] [i_0] = (32768 | 25363);
                }
            }
        }
    }
    var_17 = ((var_14 || ((((max(var_8, var_14)) + (((21 << (var_6 + 8211069473007590980)))))))));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_18 = ((((min((min(0, 4294967283)), (((82 >> (((arr_20 [8] [i_4] [i_6]) - 32)))))))) ? (((~4294967295) ? (min((arr_19 [i_3] [i_6] [i_4]), var_0)) : (arr_20 [i_3 + 1] [i_5 - 3] [i_5 - 1]))) : (~var_13)));
                        arr_22 [i_6] [i_5] [i_4] [11] = (min(((min(-268435456, 2140457538))), ((2047 ? 2147483647 : 14135910862950170893))));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, ((((min((-730467730 & var_13), (arr_23 [i_3 - 2] [i_5 - 2] [i_5]))) >> ((((251 ? var_11 : 33841)) - 18430)))))));
                        var_20 = (((max(var_12, (((165 ? var_14 : var_0))))) <= ((((((1 ? (arr_17 [i_3] [i_4] [i_5] [i_4]) : -2147483632))) ? ((min(var_2, var_12))) : ((32768 ? var_3 : -661980414)))))));
                    }
                    var_21 = (max((((((max(3, (arr_23 [i_3 - 2] [2] [i_3])))) ? ((var_6 ? var_1 : 7730404027556784535)) : (((min((arr_20 [i_3] [i_4] [i_4]), (arr_12 [i_3])))))))), ((((1185495962 ? 1097364144128 : var_6)) + ((max(var_12, 21)))))));
                }
            }
        }
    }
    #pragma endscop
}
