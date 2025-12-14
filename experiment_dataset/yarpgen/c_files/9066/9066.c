/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_13 -= ((((((~0) ? ((var_9 ? 10 : (arr_1 [i_1]))) : ((((arr_2 [i_1]) ? (arr_2 [i_0]) : var_7)))))) ? (((((var_9 ? var_12 : var_5))) ? 1892683272816469342 : (((3987182721 ? var_4 : (arr_0 [i_0])))))) : ((((!var_5) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_4 [i_1]))) : -126)))));
                var_14 = ((((((-1892683272816469343 ? var_12 : var_2)) ? 29078 : ((var_2 ? (arr_3 [i_0]) : 13735))))));
                var_15 = ((-72 ? 17477154322622890965 : 42773));
                var_16 = ((+((~(((arr_3 [i_1]) ? 37 : (arr_0 [i_1])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_17 = (((--29098) ? (((var_12 ? 83 : 969589751086660651))) : (((~((124 ? 10982 : (arr_5 [i_3] [i_2]))))))));
                    var_18 = ((~(((~47279) ? (((~(arr_6 [i_2 - 2])))) : (((arr_0 [i_3]) ? var_9 : 17477154322622890965))))));
                    arr_13 [i_3] [i_2] [12] [i_2 - 3] = (((((!(arr_8 [i_2] [4])) ? ((var_10 ? var_0 : 0)) : (~-1)))));
                    arr_14 [i_2] [8] [i_3] = -89;
                }
            }
        }
    }
    var_19 = ((((((~var_1) ? ((var_11 ? var_4 : var_9)) : (~22)))) ? (((((14 ? 9784652058141503447 : 2))) ? ((1892683272816469341 ? var_8 : var_6)) : ((5911798766411444206 ? var_2 : -23)))) : (((((3088540788 ? 2 : var_1))) ? var_2 : -2))));
    #pragma endscop
}
