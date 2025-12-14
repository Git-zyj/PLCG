/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63297
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
    var_19 *= ((/* implicit */signed char) (~(var_6)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0 - 1] = arr_3 [i_0];
        var_20 = ((/* implicit */unsigned int) var_3);
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    arr_11 [i_1] [(signed char)11] [i_3] = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)52)), (arr_2 [i_1])))))))));
                    var_21 = max((((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)109)), (var_10))))))), ((+(((((/* implicit */unsigned int) var_4)) + (var_13))))));
                    var_22 *= ((/* implicit */unsigned int) arr_6 [i_1]);
                }
            } 
        } 
        arr_12 [i_1 - 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((signed char)-52), ((signed char)-83))))));
    }
    for (unsigned char i_4 = 4; i_4 < 11; i_4 += 1) 
    {
        arr_15 [9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_10 [i_4 + 3] [i_4] [i_4] [i_4 - 3]), (arr_10 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 - 1])))) || (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_5)), (arr_0 [i_4]))) << (((((860359031U) % (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (41U))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_23 += ((/* implicit */int) (!(((/* implicit */_Bool) 860359008U))));
            arr_18 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -2075883968))));
        }
        var_24 = ((/* implicit */unsigned char) min((arr_0 [i_4]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 2])) ? (((/* implicit */int) arr_10 [(signed char)0] [i_4 + 1] [i_4 - 1] [i_4 - 2])) : (((/* implicit */int) arr_10 [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 2])))))));
        arr_19 [i_4] = ((/* implicit */signed char) (((-(3720504293U))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_4 - 4] [(signed char)11])) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) arr_2 [i_4 - 2])))))));
    }
    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            arr_25 [i_6 + 4] [i_6 + 4] [i_7] = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) arr_8 [i_6 + 3] [i_7])), (var_6))));
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) (signed char)103)) : (-682607571)))))), (((((/* implicit */_Bool) arr_21 [i_6 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) var_11))))) : (3720504290U))))))));
            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (signed char)14)), (3434608264U))), (((((/* implicit */_Bool) 3720504293U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_6))))))));
        }
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            var_27 = (signed char)6;
            var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_5 [i_6 - 1])) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (unsigned char)190)))), (((((/* implicit */_Bool) arr_5 [i_6 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)69))))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 2; i_9 < 17; i_9 += 1) 
            {
                for (unsigned char i_10 = 2; i_10 < 18; i_10 += 3) 
                {
                    {
                        var_29 += ((/* implicit */int) (unsigned char)220);
                        arr_34 [18] [i_6 - 1] [9] [i_9] [i_10] &= ((/* implicit */signed char) min(((~(arr_23 [i_6 - 1] [i_10 + 2]))), (((/* implicit */int) min(((unsigned char)218), (((/* implicit */unsigned char) (signed char)-37)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                var_30 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_38 [i_11])) ? (((/* implicit */int) arr_24 [i_6])) : (-1546496752)))));
                var_31 ^= (~(((/* implicit */int) arr_37 [i_6] [i_6 - 1] [i_12] [i_12])));
                var_32 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-52))));
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 860359016U))))) > (((/* implicit */int) (signed char)-16)))))));
            }
            for (int i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 1; i_14 < 19; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        {
                            arr_45 [i_6] [(unsigned char)19] [i_13] [i_14] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)46)) / (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned int) arr_36 [(unsigned char)14] [i_14])) : (arr_9 [i_6] [i_6] [i_6] [0]))));
                            var_34 += ((/* implicit */int) ((((/* implicit */int) (signed char)-83)) != (((/* implicit */int) (signed char)-45))));
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) var_13))));
                            var_36 |= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) + (2147483647))) >> (((var_14) - (1641025115U)))));
                            arr_46 [i_6] [i_6] [i_6] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_6 + 2] [i_6] [i_6 + 3] [i_14 - 1] [i_14 - 1] [i_15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))));
                        }
                    } 
                } 
                arr_47 [i_6 + 1] [i_11] [i_11] [i_11] = ((/* implicit */signed char) var_13);
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)184)) / (arr_35 [i_6 - 1] [i_11] [i_13])));
            }
            for (int i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) var_2))));
                var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((var_6) / (((((/* implicit */_Bool) 3235204832U)) ? (arr_9 [i_6] [i_6] [i_6] [i_16]) : (var_8))))))));
            }
            for (unsigned int i_17 = 1; i_17 < 18; i_17 += 3) 
            {
                var_40 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_11]))) : (var_13)))));
                var_41 = ((/* implicit */int) min((var_41), (((((/* implicit */_Bool) arr_49 [i_6 + 1] [i_11] [i_17 + 1])) ? (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) arr_51 [i_6] [i_6] [i_17 + 2])) : (var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_6 + 1] [(unsigned char)12] [19U] [19U])))))))));
                var_42 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_29 [i_6] [i_6 + 4] [i_17 + 1] [i_17 + 1]))));
                var_43 = ((((/* implicit */_Bool) arr_1 [i_6 + 3] [i_6])) ? (((/* implicit */int) arr_1 [i_6 + 1] [i_11])) : (((/* implicit */int) arr_1 [i_6 + 3] [i_11])));
            }
            /* LoopSeq 1 */
            for (signed char i_18 = 1; i_18 < 19; i_18 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    var_44 &= ((/* implicit */unsigned int) var_1);
                    var_45 ^= ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_1)))));
                }
                for (signed char i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    arr_59 [i_6] [i_6] [i_18 - 1] [14] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_6 + 1] [i_18 + 1]))));
                    arr_60 [i_6 + 4] [i_11] [i_18] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (unsigned char)226))));
                    arr_61 [i_18] = (unsigned char)253;
                }
                for (unsigned int i_21 = 4; i_21 < 17; i_21 += 3) 
                {
                    arr_64 [i_6 + 4] [i_18] [i_18] [i_18] [19] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)5))));
                    arr_65 [i_18] [i_18] [i_18] [i_21 + 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_38 [i_6 - 1]))));
                }
                arr_66 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_50 [i_6 - 1] [i_6 - 1] [i_18 - 1]))));
            }
        }
        var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) arr_33 [i_6 + 2] [i_6] [(unsigned char)12] [i_6 - 1]))));
    }
}
