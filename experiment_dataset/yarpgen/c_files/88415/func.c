/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88415
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
    var_17 |= (signed char)-1;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (signed char)1;
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-1))));
            arr_5 [i_0] = (signed char)116;
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 3])))))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_3)) + (48))))))));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))));
            /* LoopSeq 3 */
            for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        var_23 = (signed char)-117;
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_3 - 2] [i_3 + 1] [i_4] [i_4])) : (((/* implicit */int) (signed char)82)))))));
                        arr_17 [i_0] [(signed char)6] [i_0] [(signed char)6] [(signed char)8] [i_5] = (signed char)(-127 - 1);
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_14 [i_3] [i_3 + 1] [i_3 - 1] [(signed char)4])) : (((/* implicit */int) var_15)))))));
                    }
                    arr_18 [(signed char)10] [(signed char)1] [i_3] [(signed char)10] = (signed char)-1;
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_4])))))));
                    arr_19 [i_0] [(signed char)11] [i_3] [i_4] = var_0;
                }
                arr_20 [i_0] [(signed char)6] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_3 + 1] [i_3 - 2])) / (((/* implicit */int) (signed char)74))));
            }
            for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                arr_23 [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (signed char i_7 = 3; i_7 < 13; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_6] [i_7 - 1] [i_8])) * (((((/* implicit */int) var_11)) / (((/* implicit */int) (signed char)-81))))));
                            var_28 = (signed char)-109;
                            var_29 |= ((signed char) (-(((/* implicit */int) (signed char)-94))));
                            arr_29 [i_7] [i_7] [i_7] [i_7] [i_8] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-79)) + (2147483647))) >> ((((-(((/* implicit */int) (signed char)94)))) + (117)))));
                            var_30 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-5)) * (((/* implicit */int) (signed char)124))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [(signed char)13] [i_0] [i_0] [i_2] [i_2] [i_6])) || (((((/* implicit */int) arr_25 [i_0] [i_2] [i_6])) == (((/* implicit */int) var_14))))));
                arr_30 [i_0] [i_0] = var_12;
            }
            for (signed char i_9 = 3; i_9 < 12; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    for (signed char i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_9 - 3] [i_11 - 1] [i_11 - 1] [i_11 + 2])) * (((/* implicit */int) arr_13 [i_9 - 3] [i_11 - 1] [i_11 - 1] [i_11 + 2])))))));
                            arr_38 [(signed char)1] [i_2] [(signed char)1] [i_10] [i_11 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-6)))) + (((((/* implicit */int) (signed char)88)) / (((/* implicit */int) (signed char)-44))))));
                            arr_39 [i_0] [i_2] [i_9] [i_9] [i_0] [i_9] = ((signed char) (signed char)-126);
                        }
                    } 
                } 
                var_33 = (signed char)-22;
                arr_40 [i_2] [i_9] = var_7;
                var_34 *= (signed char)95;
            }
            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-73)) : (((((/* implicit */int) var_0)) / (((/* implicit */int) (signed char)111))))));
        }
        for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            arr_43 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))));
            var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_36 [i_0] [i_0] [(signed char)9] [i_0] [i_12] [i_12] [i_12])) * (((/* implicit */int) arr_4 [(signed char)0] [(signed char)0] [i_12]))));
            var_37 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) >= (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4))))));
        }
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        var_38 = ((/* implicit */signed char) min((var_38), ((signed char)1)));
        var_39 = ((signed char) (signed char)94);
    }
    var_40 *= var_7;
    /* LoopNest 2 */
    for (signed char i_14 = 0; i_14 < 14; i_14 += 1) 
    {
        for (signed char i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            {
                var_41 = (signed char)-1;
                var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-69)))))) ? (max((((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (signed char)-114)))), (((/* implicit */int) max(((signed char)-80), (var_9)))))) : (((/* implicit */int) (signed char)44)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    var_43 = var_15;
                    /* LoopSeq 1 */
                    for (signed char i_17 = 1; i_17 < 13; i_17 += 2) 
                    {
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (+(((/* implicit */int) arr_46 [i_15] [i_16])))))));
                        arr_58 [i_14] [i_14] [i_16] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) var_6))));
                        var_45 *= (signed char)(-127 - 1);
                        arr_59 [i_14] [i_15] [i_15] [i_17 - 1] = (signed char)70;
                    }
                }
                arr_60 [i_14] [i_14] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)24)) > (((((/* implicit */int) (signed char)112)) * (((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */int) arr_12 [i_14] [i_14] [i_14])) : ((~(((/* implicit */int) var_12))))));
            }
        } 
    } 
    var_46 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min(((signed char)-113), ((signed char)-55)))) ? (((/* implicit */int) min((var_4), ((signed char)-109)))) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_15))));
}
