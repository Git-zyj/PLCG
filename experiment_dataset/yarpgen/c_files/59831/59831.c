/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] &= ((~(~3204831749316507348)));
                    var_18 = ((~(((2169469103592410440 == (arr_0 [i_0] [i_1]))))));
                    var_19 = (~-5113646578799942115);
                }
            }
        }
    }
    var_20 = var_16;
    var_21 = ((+((1 ? (~var_10) : (max(2, var_12))))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_12 [i_3] = (((((-1056173099 ? -2147483635 : -6361156892861188213))) ? var_1 : ((~(arr_11 [i_3] [i_3])))));
        var_22 = 4;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_23 = (((arr_1 [i_4]) ? (arr_0 [i_4] [i_4]) : 0));
        arr_15 [i_4] = (((~-8819293300020337267) > 16515565439261670935));
        var_24 = (min(var_24, (!var_11)));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_25 = (max(var_25, ((min(((((arr_4 [i_5] [i_5] [i_5]) == 25))), ((~(arr_4 [i_5] [i_5] [i_5]))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 11;i_7 += 1)
            {
                {

                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        var_26 = 3046908696794506313;
                        var_27 = 3;

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_28 = (max(1048560, -var_16));
                            arr_32 [i_5] [i_5] [i_5] [i_5] = ((((!(arr_19 [i_5]))) ? (~-551315180858710397) : (arr_19 [i_9])));
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_35 [i_5] [i_6] &= ((-8762402501859078127 ? (((2305807824841605120 * (arr_13 [i_7])))) : 4982060127236926806));
                            var_29 = (min(var_29, ((((((((!(arr_22 [i_7] [0])))))) ? (((52 | (~-25)))) : (5029940379236215068 + 4558266680346063668))))));
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_38 [i_5] [i_6] [i_7] [i_8 - 1] [11] = (max((((arr_14 [i_7 - 3]) ? (arr_14 [i_7 + 2]) : (arr_14 [i_7 + 2]))), (((!(arr_14 [i_7 - 4]))))));
                            var_30 -= -7;
                            arr_39 [i_5] [i_6] [i_5] [7] [i_5] [i_11] = ((((!(arr_26 [i_8 - 2] [i_5] [i_8 - 2] [i_5]))) ? (arr_3 [4]) : (~9223372036854775807)));
                            arr_40 [i_5] [i_6] [i_7] [i_5] [3] = (((((max(var_4, var_9)) | (min(-1883023559259705503, 3520016415226384337)))) * (!7597710230185247482)));
                        }
                    }
                    var_31 = ((~(arr_25 [i_5] [i_5] [i_7])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                arr_46 [i_5] [i_6] [i_5] [i_5] [i_5] [4] [10] = 7437906571214633232;
                                var_32 = 4611686018427387904;
                                arr_47 [i_5] [6] [i_5] [i_5] [i_5] = ((!((max((min(var_1, (arr_7 [i_6] [i_7] [8]))), 4294967295)))));
                                arr_48 [i_5] [i_6] [i_7] [i_12] [i_13] = (max((max(((3844561049 ? (arr_18 [i_13]) : var_12)), (arr_18 [i_6]))), 1789204014));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
