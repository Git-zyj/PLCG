/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((((+(((arr_0 [i_0] [i_0]) - (arr_0 [7] [7])))))) && (arr_0 [i_0] [i_0]));
        arr_3 [i_0] [i_0] = (min((((((((arr_1 [i_0]) < (arr_0 [i_0] [i_0])))) < ((~(arr_0 [i_0] [i_0])))))), (((((3816818134 ? -8 : 5949573475222540014))) ? ((5949573475222540014 + (arr_1 [i_0]))) : ((((arr_1 [i_0]) ^ (arr_0 [i_0] [i_0]))))))));
        var_10 = (((((min(8472983416205007404, -1561833923)) | 50))) ? ((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))) ? (min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]))) : (min(((((arr_0 [i_0] [i_0]) == (arr_0 [i_0] [i_0])))), (((arr_0 [2] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
    }
    var_11 = (+(((var_7 & var_6) ? (((max(var_7, var_7)))) : ((var_5 ? var_7 : var_2)))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_10 [i_3] [i_1] [i_1] [i_1] = (((((((min((arr_4 [i_1] [i_1]), (arr_6 [i_1 + 1] [1] [i_3]))))) == ((5583936575661083042 ? (-2147483647 - 1) : 8472983416205007404)))) ? (arr_4 [i_2] [i_3]) : (((!(arr_8 [i_1 + 1] [i_1] [i_3] [i_3]))))));
                    var_12 += (((min((arr_8 [i_1] [i_3] [i_3] [i_3]), (((arr_4 [i_3] [i_1]) ? (arr_9 [i_3]) : (arr_5 [i_1])))))) ? (((((((arr_7 [i_1]) ? (arr_9 [i_3]) : (arr_7 [i_2]))) != (((arr_8 [i_1] [i_3] [i_1] [i_3]) ? (arr_5 [10]) : (arr_9 [i_3]))))))) : ((((max((arr_8 [i_1] [i_3] [i_2] [i_1 - 1]), (arr_6 [i_1] [i_2] [1])))) ? (!-32757) : (max((arr_7 [i_1]), (arr_9 [i_3]))))));
                }
                arr_11 [i_1] = ((!((min(0, 0)))));
                arr_12 [i_1] [i_1] = (((((31 ? 1366236738 : 17883))) ^ (((arr_6 [i_1 + 1] [i_2] [i_2]) ? (arr_6 [i_2] [i_2] [i_1]) : (((arr_9 [i_1]) << (((arr_9 [i_1]) - 4991888979361864607))))))));
                var_13 = ((255 / ((1561833923 ? ((65532 ? -110765284 : 15679523773349700646)) : 4503599627370495))));
                var_14 += (+(max((arr_5 [i_1 - 1]), (arr_5 [i_1 - 1]))));
            }
        }
    }
    #pragma endscop
}
