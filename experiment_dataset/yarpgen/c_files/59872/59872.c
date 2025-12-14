/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (max(((3130010351360424845 ? (var_13 || 208) : (!0))), ((((!var_18) || (((5397 ? var_16 : var_5))))))));
    var_20 = (((~402653184) != 18446744073709551615));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = ((((arr_3 [i_0] [i_1] [i_0]) ? -12909 : 14716382869055502499)));
                        arr_11 [i_0] [4] [i_1] [0] [8] [7] = ((-12909 ? var_9 : (((max((max((arr_7 [i_2] [i_2] [i_2]), -12)), 1025513496778925751))))));
                        arr_12 [0] [7] [0] [i_0] = ((!((min(65535, 16262072431984870057)))));
                        arr_13 [6] [6] &= ((!(((-(arr_8 [i_0] [i_1] [i_2] [i_3 + 1]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_18 [i_0] [i_0] [i_0] [i_4] = ((((((arr_14 [i_0]) ? (arr_14 [i_0]) : (arr_14 [i_5])))) ? (((arr_14 [i_0]) ? (arr_14 [i_4]) : (arr_14 [i_5]))) : ((~(arr_14 [i_4])))));
                    arr_19 [i_5] [i_4] [i_5] = 2119228764;
                    arr_20 [i_0] [i_0] = ((8639491517514378746 || 65535) + -8857935385948620763);
                    arr_21 [i_0] [i_4] [i_5] = 22165;
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1)
    {
        arr_25 [i_6] [i_6] = (((((~4260275134) ? (11178059440911674871 | 1) : ((var_17 ? var_4 : -66))))) ? (((2184671641724681559 | 34692161) ? (~16262072431984870057) : (34692162 | 34692171))) : (arr_23 [i_6 + 2]));
        arr_26 [4] = 30894;
    }
    #pragma endscop
}
