/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8773
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
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_19 |= arr_2 [i_1 - 2] [i_1 - 2];
                        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1] [i_1 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_12 [i_0 + 3] [i_1 + 1])))) >= (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 + 2] [i_1 + 3])) == (((/* implicit */int) var_5)))))));
                        arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? ((-(((/* implicit */int) arr_10 [i_0 - 2] [i_1] [i_2] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [(signed char)2]))))))) : (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 4])) ? (((/* implicit */int) arr_10 [i_1 + 2] [i_1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 1] [i_0 + 3]))))));
                        arr_15 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0] = arr_1 [i_2];
                        arr_16 [(signed char)7] [i_1] [i_2] [i_3] [i_2] = max((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-125)) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))))), ((signed char)-61));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (signed char i_7 = 2; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min(((~(((/* implicit */int) (signed char)97)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) ((signed char) (signed char)-62))))))));
                                arr_28 [(signed char)9] [(signed char)9] [i_5] [i_6] [i_7] = (signed char)60;
                                var_22 = ((/* implicit */signed char) min((var_22), ((signed char)-88)));
                            }
                        } 
                    } 
                    var_23 = var_1;
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_18 [i_0 + 4] [i_0 + 4] [i_5]), (arr_18 [i_0 + 3] [i_4] [i_0]))))));
                        var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_27 [i_0] [i_4] [i_5] [i_8] [i_8]))));
                        arr_31 [i_0 + 4] [i_0 + 4] [i_0 - 1] [i_0] [i_0 - 2] = (signed char)75;
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_2), ((signed char)5)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) min((arr_25 [i_0 + 4] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0]), (arr_25 [i_0] [i_0] [i_0] [i_0 + 3] [i_0 + 3] [i_0] [(signed char)13]))))));
    }
    for (signed char i_9 = 2; i_9 < 19; i_9 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) max((arr_13 [i_9] [i_9] [i_9] [i_9] [i_9]), (((signed char) var_16))))) : (((((((/* implicit */int) arr_6 [i_9 + 4] [i_9 - 1])) + (2147483647))) >> (((((/* implicit */int) min(((signed char)122), (var_7)))) - (54)))))));
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(((/* implicit */int) arr_42 [i_9] [(signed char)22] [i_11] [i_12])))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (var_12)));
                        var_30 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_10] [i_12]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_13 = 2; i_13 < 13; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            for (signed char i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                {
                    var_31 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_50 [i_13] [i_13 + 1])) >= (((/* implicit */int) arr_43 [i_13] [i_13 - 2] [i_13 - 1] [i_13]))));
                    arr_54 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)69)) / (((/* implicit */int) (signed char)-38))));
                    var_32 -= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-117)) + (2147483647))) >> (((((/* implicit */int) (signed char)71)) - (64)))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 2; i_16 < 11; i_16 += 2) 
                    {
                        for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)72)))) - (((((/* implicit */int) (signed char)30)) - (((/* implicit */int) (signed char)87))))));
                                arr_59 [(signed char)9] [i_14] [i_15] [(signed char)3] [(signed char)2] [(signed char)9] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_18 = 1; i_18 < 13; i_18 += 4) 
                    {
                        for (signed char i_19 = 0; i_19 < 14; i_19 += 4) 
                        {
                            {
                                arr_67 [(signed char)10] [i_14] [(signed char)10] [i_18 + 1] [i_14] [i_19] [i_18 + 1] = arr_65 [i_13 + 1] [i_13 - 1];
                                arr_68 [i_13 - 2] [i_14] [i_14] [i_18] [i_18] = (signed char)-61;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_69 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_13])) ? (((/* implicit */int) arr_53 [i_13] [i_13 - 2] [i_13 - 2])) : (((/* implicit */int) arr_53 [i_13] [(signed char)13] [i_13 + 1]))));
        var_34 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_35 [i_13] [i_13])) == (((/* implicit */int) arr_5 [i_13] [i_13] [(signed char)0])))))));
    }
    for (signed char i_20 = 0; i_20 < 19; i_20 += 2) 
    {
        var_35 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) arr_24 [(signed char)3] [i_20] [i_20] [i_20])))), (((/* implicit */int) max(((signed char)-125), (arr_24 [i_20] [i_20] [i_20] [i_20])))))), ((~((+(((/* implicit */int) (signed char)81))))))));
        /* LoopSeq 2 */
        for (signed char i_21 = 0; i_21 < 19; i_21 += 2) 
        {
            var_36 = ((/* implicit */signed char) (-((-(((((/* implicit */int) arr_5 [i_21] [i_21] [i_20])) & (((/* implicit */int) (signed char)9))))))));
            arr_75 [i_20] [i_20] [i_21] &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (signed char)-106))));
            var_37 = ((/* implicit */signed char) (+(((/* implicit */int) max((arr_41 [i_20]), (arr_41 [i_20]))))));
        }
        for (signed char i_22 = 2; i_22 < 17; i_22 += 1) 
        {
            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3))))))))));
            var_39 -= ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((signed char) arr_7 [i_20] [i_22])))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)62))))) ? (((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) (signed char)-21)) + (42))))) : ((-(((/* implicit */int) (signed char)-16))))))));
        }
        var_40 = (signed char)117;
    }
    var_41 = var_5;
}
