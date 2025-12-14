/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59222
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)36)) | (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (signed char)-37)))) : (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_8 [i_1] = ((signed char) ((((/* implicit */int) (signed char)11)) != (((/* implicit */int) (signed char)49))));
            var_19 = ((/* implicit */signed char) max((var_19), (var_2)));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) % (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((signed char) (signed char)-7)))));
            arr_9 [(signed char)1] [(signed char)1] [i_1] = arr_6 [i_0];
        }
        for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 4; i_3 < 16; i_3 += 2) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-50)) | (((/* implicit */int) (signed char)118))));
                arr_15 [i_2] [i_2] [i_3 - 4] = arr_2 [i_2 - 1] [i_0];
            }
            arr_16 [i_2] = ((/* implicit */signed char) (+(((((/* implicit */int) var_6)) % (((/* implicit */int) (signed char)81))))));
            arr_17 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 - 1] [i_2 + 1]))));
        }
        for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            arr_20 [i_4] = (signed char)6;
            arr_21 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) arr_5 [i_4 - 1]))));
            /* LoopSeq 4 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (((((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_0])) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) arr_13 [i_4]))))));
                arr_24 [i_0] [i_0] [i_4 + 2] [i_4] = (signed char)-48;
                arr_25 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_4 [i_4 - 1]))));
            }
            for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                arr_29 [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)11)) & (((/* implicit */int) (signed char)-24))));
                arr_30 [i_4] [i_0] [i_4] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_4 + 1] [i_4 + 2]))));
                /* LoopSeq 4 */
                for (signed char i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                {
                    arr_34 [i_0] [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_7] [i_6] [i_6] [i_4 - 1])) ? (((/* implicit */int) arr_14 [i_6] [(signed char)4] [i_6] [i_4 - 1])) : (((/* implicit */int) var_13))));
                    arr_35 [i_4] [i_4] [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_6]))));
                }
                for (signed char i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    var_23 -= (signed char)-10;
                    var_24 ^= arr_19 [i_0] [i_0] [i_0];
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [(signed char)15] [i_4 + 1] [i_0])) ? (((/* implicit */int) arr_42 [i_4 + 1] [i_4 + 1] [i_6])) : (((/* implicit */int) (signed char)-88))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) arr_43 [i_0] [i_0] [(signed char)12] [i_4 + 2] [i_9] [i_4 - 1] [i_0])) & (((/* implicit */int) (signed char)-19)))))));
                        var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)41)) ? (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (signed char)-4)))) : (((/* implicit */int) arr_43 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_9] [i_4 + 1] [i_4 - 1]))));
                    }
                    arr_44 [i_0] [i_4] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-34)) - (((/* implicit */int) var_17))));
                }
                for (signed char i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (arr_41 [(signed char)4] [i_4 + 1] [i_4])));
                    var_29 = ((signed char) (signed char)-62);
                    var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_0] [i_4] [i_6] [i_10]))));
                    var_31 = ((signed char) var_6);
                }
                for (signed char i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        arr_52 [i_4] [(signed char)0] [i_4] = ((signed char) arr_19 [i_0] [i_0] [i_4]);
                        var_32 = (signed char)85;
                    }
                    arr_53 [i_0] [i_0] [i_4] [(signed char)14] [(signed char)2] [i_11] &= arr_47 [i_0] [i_4 + 2] [i_0] [(signed char)13] [i_11] [i_11];
                }
                var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_4] [(signed char)9])) ? (((/* implicit */int) arr_18 [i_4] [i_4 - 1])) : (((/* implicit */int) arr_2 [(signed char)3] [i_0]))));
            }
            for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_4] [i_4])) + (((/* implicit */int) arr_49 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1]))));
                arr_57 [i_4] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_7 [i_4] [i_4])))) != (((/* implicit */int) (signed char)-57))));
                var_35 = ((/* implicit */signed char) (+(((/* implicit */int) arr_38 [i_4 + 2] [i_4] [i_4] [i_4 + 2] [i_4 + 2]))));
            }
            for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [(signed char)14] [(signed char)10] [i_4 - 1] [i_4 + 2] [(signed char)14])) ? (((((/* implicit */int) (signed char)-120)) | (((/* implicit */int) arr_58 [(signed char)6])))) : (((/* implicit */int) ((signed char) var_6)))));
                var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
                var_38 += ((/* implicit */signed char) (-(((/* implicit */int) arr_51 [i_0] [i_0] [i_4] [i_0] [i_14]))));
                var_39 = ((/* implicit */signed char) (+(((((/* implicit */int) (signed char)-119)) * (((/* implicit */int) (signed char)71))))));
                arr_60 [(signed char)4] [i_4] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_23 [i_0] [i_4 - 1] [i_0])) : (((/* implicit */int) var_11))));
            }
        }
    }
    for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
    {
        arr_63 [i_15] = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
        var_40 |= ((/* implicit */signed char) min((min((((/* implicit */int) arr_62 [i_15] [i_15])), (((((/* implicit */int) var_13)) % (((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) (signed char)84)) ? (((((/* implicit */int) (signed char)61)) / (((/* implicit */int) var_7)))) : (((/* implicit */int) ((signed char) (signed char)-5)))))));
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        var_41 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)121)) < (((/* implicit */int) (signed char)-32))));
        arr_66 [i_16] [i_16] = arr_55 [i_16] [i_16] [(signed char)2] [i_16];
    }
    var_42 = (signed char)57;
    /* LoopNest 2 */
    for (signed char i_17 = 3; i_17 < 22; i_17 += 4) 
    {
        for (signed char i_18 = 0; i_18 < 24; i_18 += 1) 
        {
            {
                var_43 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_68 [i_17 - 3])) ? (((/* implicit */int) arr_68 [i_17 + 2])) : (((/* implicit */int) arr_68 [i_17 - 3])))) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_68 [i_17 + 2])) : (((/* implicit */int) (signed char)-2)))) - (22)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_19 = 2; i_19 < 21; i_19 += 3) 
                {
                    arr_74 [i_19] [i_17] [i_17] = ((signed char) arr_67 [i_17 - 1]);
                    var_44 = ((signed char) (!(((/* implicit */_Bool) (signed char)-120))));
                    var_45 = ((/* implicit */signed char) ((((/* implicit */int) arr_68 [i_17 - 3])) / (((/* implicit */int) var_7))));
                }
                for (signed char i_20 = 4; i_20 < 23; i_20 += 4) /* same iter space */
                {
                    arr_79 [i_17] [i_18] [i_18] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_75 [i_17])))) / (((/* implicit */int) (signed char)-76))));
                    var_46 -= ((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)-74)))), (min((((((/* implicit */int) var_3)) / (((/* implicit */int) arr_76 [i_17] [i_18])))), (((/* implicit */int) var_15))))));
                    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (signed char)-120))));
                    arr_80 [(signed char)0] [i_17] [i_20] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)66)) != (((/* implicit */int) (signed char)-116))));
                }
                for (signed char i_21 = 4; i_21 < 23; i_21 += 4) /* same iter space */
                {
                    arr_84 [i_17] [i_18] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)68)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        var_48 = ((/* implicit */signed char) (+(((/* implicit */int) arr_67 [i_21 - 3]))));
                        var_49 = ((/* implicit */signed char) min((var_49), ((signed char)53)));
                    }
                }
                arr_87 [i_18] [i_17] [i_17] = arr_85 [(signed char)19] [i_17] [i_18] [i_18];
                var_50 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) min((var_12), ((signed char)-61))))) + (((((/* implicit */int) var_9)) & (((/* implicit */int) arr_81 [i_18] [(signed char)4] [(signed char)4] [i_17 - 1]))))));
            }
        } 
    } 
    var_51 -= min((var_16), (max(((signed char)-1), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)123)) || (((/* implicit */_Bool) var_8))))))));
}
