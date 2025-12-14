/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77334
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = max((((arr_0 [i_0]) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-9))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_5 [i_0] [(signed char)8] = ((/* implicit */signed char) arr_0 [(_Bool)1]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_1] [12] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))));
                    arr_14 [(_Bool)1] [i_2] [i_2] [i_2] = min((((((/* implicit */int) arr_8 [i_2] [i_3])) - (((((/* implicit */int) var_5)) - (86575275))))), (((/* implicit */int) (!(((/* implicit */_Bool) 536870911))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    arr_20 [i_5] = ((max((((/* implicit */int) arr_1 [i_4] [i_5])), ((((_Bool)0) ? (((/* implicit */int) arr_1 [i_1] [(signed char)7])) : (((/* implicit */int) arr_17 [i_5])))))) - (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (arr_11 [i_5] [i_1]) : (((/* implicit */int) var_14)))));
                    arr_21 [i_1] [i_4] [i_5] = ((((/* implicit */int) var_6)) > (((/* implicit */int) (!((!(((/* implicit */_Bool) 1389117377))))))));
                    arr_22 [i_1] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_16 [i_1] [i_4] [(signed char)1]) ? (arr_11 [i_1] [i_1]) : (658647481))))))) == (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_23 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((int) arr_15 [i_1])))), (max((((arr_8 [4] [4]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))), (((/* implicit */int) arr_1 [i_1] [i_1]))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_30 [i_7] [i_8] = (((!((!(((/* implicit */_Bool) arr_25 [2])))))) ? (((/* implicit */int) ((arr_26 [i_7 - 1] [i_6] [i_6]) < (((/* implicit */int) arr_29 [i_7 - 1] [i_6] [i_8] [i_8]))))) : (((-980395066) ^ (((/* implicit */int) arr_29 [i_8] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_33 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_29 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1])) == (((/* implicit */int) (signed char)-69))))) > ((((_Bool)1) ? (arr_32 [(_Bool)1] [i_8]) : (((((arr_24 [12]) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))));
                        arr_34 [i_6] [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) arr_28 [i_7 - 1] [i_7] [i_8] [i_9])) - (max((var_10), (((/* implicit */int) var_1)))))) == (((arr_31 [i_6] [i_7 - 1] [i_8] [i_8] [i_9]) % (arr_31 [i_7] [i_7 - 1] [i_9] [i_7 - 1] [i_9])))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            {
                                arr_41 [i_6] [i_6] [i_6] [(signed char)7] [i_6] [i_6] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) var_16))))) && (((/* implicit */_Bool) max((-2147483630), (((/* implicit */int) var_14)))))))), (max((((((/* implicit */_Bool) var_13)) ? (-822949981) : (((/* implicit */int) arr_35 [i_6] [i_7 - 1] [i_8] [i_10])))), (((/* implicit */int) max(((signed char)-1), (arr_25 [11]))))))));
                                arr_42 [i_11] [i_10] [i_7 - 1] [i_7 - 1] [3] [i_7] [i_6] = ((/* implicit */int) ((var_11) || (((/* implicit */_Bool) arr_29 [(signed char)12] [10] [i_7] [i_6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_43 [i_6] [i_6] = (!(((/* implicit */_Bool) arr_38 [i_6] [i_6] [i_6] [i_6])));
    }
    for (int i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
    {
        arr_48 [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */int) max(((signed char)110), (((/* implicit */signed char) (_Bool)0))))) : (((((/* implicit */_Bool) arr_37 [i_12] [i_12] [i_12] [(_Bool)1] [i_12] [i_12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_12] [i_12] [i_12]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_12] [i_12] [i_12] [i_12] [(signed char)18])) || ((_Bool)1)))) : (((arr_47 [i_12]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_47 [i_12]))))));
        arr_49 [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_27 [i_12] [i_12] [i_12])))))));
    }
    for (int i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
    {
        arr_53 [i_13] = ((/* implicit */int) var_14);
        arr_54 [(_Bool)1] = ((/* implicit */signed char) 2147483647);
        arr_55 [i_13] = min((max((min((575756937), (((/* implicit */int) arr_29 [i_13] [i_13] [i_13] [i_13])))), (((((/* implicit */_Bool) var_1)) ? (arr_32 [i_13] [i_13]) : (((/* implicit */int) (_Bool)0)))))), (((((arr_24 [i_13]) == (var_3))) ? (((/* implicit */int) arr_39 [i_13] [i_13] [i_13] [i_13] [i_13])) : (((var_14) ? (var_0) : (arr_40 [i_13] [i_13] [i_13] [i_13] [i_13]))))));
        arr_56 [i_13] [i_13] = ((/* implicit */_Bool) arr_37 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
        arr_57 [(_Bool)1] [i_13] = ((((/* implicit */int) (signed char)-5)) <= (((/* implicit */int) (_Bool)1)));
    }
}
