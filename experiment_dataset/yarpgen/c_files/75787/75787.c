/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((3864542507 ? 0 : (max(((3864542499 ? 34101 : 4294967287)), -1))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2 + 1] [i_3] = ((!((((((762176011 ? 8678904610201647260 : 1))) ? (arr_9 [i_3 - 1] [8] [i_2 + 3] [i_2 + 2] [i_0]) : (((arr_3 [0]) ? 4294967295 : 6282)))))));
                        arr_11 [i_0] [i_2] [i_2] [i_3] [i_0] [i_1] = ((((((((arr_6 [9]) >= -1)) ? (arr_8 [i_2 + 1] [i_2 + 4] [i_3 - 1] [1]) : ((20916 ? -5974 : 1))))) ? (((-(((arr_9 [8] [8] [i_1] [i_2] [i_3]) ? (arr_2 [i_1]) : (arr_9 [i_0] [i_1] [i_2] [i_0] [i_3 + 1])))))) : ((((((arr_2 [i_0]) ? 7324832891803134703 : 22))) ? 22066 : (min((arr_7 [i_1] [i_1] [i_2] [i_3]), -5314454149189921786))))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_19 = ((((max(430424804, (((!(arr_13 [i_2] [8] [i_2] [i_2] [i_1] [i_0]))))))) ? -34113 : ((3539400056 >> ((((-1088619503552405098 ? 11721 : (arr_0 [i_0] [i_0]))) - 11710))))));
                            var_20 += ((321003074 ? 581142602 : 0));
                        }
                    }
                }
            }
        }
        var_21 = ((53820 ? 16512185156957401941 : 19911));
    }
    var_22 = var_14;
    #pragma endscop
}
