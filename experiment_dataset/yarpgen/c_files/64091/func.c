/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64091
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
    var_14 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_15 -= ((/* implicit */int) var_3);
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1602112713)) ? (arr_4 [i_0] [(signed char)10] [(signed char)2]) : (arr_8 [i_3] [i_0] [i_0] [2])))) && (((/* implicit */_Bool) (signed char)3))));
                        var_17 = arr_5 [i_2] [i_2 + 1] [i_2];
                        var_18 = min((((/* implicit */int) arr_2 [i_0 - 1] [i_0])), (max((((/* implicit */int) (signed char)3)), (-1366017815))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    {
                        arr_15 [i_0] [11] [i_1] [i_0] = min((var_7), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)28))))) ? (16646144) : (-1219964489))));
                        arr_16 [i_0] [i_1] [i_4] [i_5] = (~(((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (signed char)43)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_19 = (i_0 % 2 == zero) ? (((max((arr_14 [i_0 + 1] [i_1] [i_6] [i_7]), (((var_7) >> (((((/* implicit */int) arr_6 [i_0])) - (82))))))) | (((/* implicit */int) var_9)))) : (((max((arr_14 [i_0 + 1] [i_1] [i_6] [i_7]), (((var_7) >> (((((((/* implicit */int) arr_6 [i_0])) - (82))) + (51))))))) | (((/* implicit */int) var_9))));
                        var_20 = var_5;
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 13; i_8 += 2) 
        {
            for (int i_9 = 3; i_9 < 16; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        for (int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) arr_25 [i_11] [i_0] [i_0] [i_0]);
                                var_22 &= ((((/* implicit */_Bool) arr_27 [i_8] [i_10] [i_11])) ? (((/* implicit */int) arr_1 [i_9])) : (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-3)) : (1001987855))) >= (arr_22 [i_11] [i_10] [i_8] [12])))));
                                var_23 += ((/* implicit */signed char) arr_4 [(signed char)11] [i_8] [i_8 + 4]);
                                arr_33 [i_0] [i_8] [i_0] = max((arr_25 [i_8] [i_0] [16] [(signed char)15]), (arr_23 [i_8]));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((+(((/* implicit */int) (signed char)112)))) < (arr_7 [i_11] [(signed char)8] [i_9] [2] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-44))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        for (int i_13 = 2; i_13 < 16; i_13 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) min((var_26), (var_8)));
                                var_27 = ((/* implicit */signed char) max((var_27), (var_0)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_14 = 4; i_14 < 15; i_14 += 2) 
                    {
                        for (int i_15 = 3; i_15 < 16; i_15 += 2) 
                        {
                            {
                                var_28 -= ((/* implicit */signed char) arr_3 [i_8] [i_14] [i_15]);
                                arr_45 [i_0] [i_15] = ((/* implicit */int) min((var_4), (arr_26 [i_0] [i_8 + 3] [i_0])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 16; i_16 += 2) 
                    {
                        for (signed char i_17 = 3; i_17 < 15; i_17 += 1) 
                        {
                            {
                                arr_53 [i_0] [i_8] [i_9] [i_16] [(signed char)9] [i_0] [i_0] = arr_1 [i_17 - 1];
                                var_29 = ((((/* implicit */_Bool) ((1243249033) % (-977947302)))) ? ((-(arr_29 [(signed char)10] [i_0 - 1] [i_9 + 1] [i_9] [i_16 - 1] [i_16]))) : (((((/* implicit */_Bool) 16777200)) ? (-2147483642) : (-418483153))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1512640643))));
    }
    /* LoopNest 2 */
    for (signed char i_18 = 4; i_18 < 9; i_18 += 2) 
    {
        for (signed char i_19 = 1; i_19 < 10; i_19 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_20 = 2; i_20 < 10; i_20 += 1) 
                {
                    for (signed char i_21 = 0; i_21 < 12; i_21 += 1) 
                    {
                        for (signed char i_22 = 1; i_22 < 10; i_22 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_9))))) ? (arr_62 [i_19] [i_19] [(signed char)2] [i_19 + 1]) : (((/* implicit */int) max((arr_2 [i_18] [i_19]), (arr_67 [i_18] [(signed char)8] [(signed char)5] [i_20] [i_21] [i_22])))))) % (((/* implicit */int) arr_18 [i_19] [(signed char)5] [i_22]))));
                                var_32 += max((((/* implicit */int) arr_61 [(signed char)9] [i_19] [i_20] [(signed char)9])), (arr_14 [i_22] [i_21] [i_20] [(signed char)3]));
                                var_33 = ((/* implicit */signed char) max((var_33), (var_3)));
                                var_34 = ((/* implicit */signed char) ((((arr_11 [i_18] [i_19 - 1] [i_18] [i_21]) + (2147483647))) >> (((((((/* implicit */_Bool) arr_52 [i_18] [i_19] [(signed char)7] [12])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-76)))) - (98)))));
                                var_35 += ((/* implicit */int) arr_5 [i_18 + 2] [i_19] [i_20]);
                            }
                        } 
                    } 
                } 
                var_36 += ((/* implicit */signed char) arr_60 [i_18] [i_18] [8]);
            }
        } 
    } 
}
