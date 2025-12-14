/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65974
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-((-(((/* implicit */int) min((((/* implicit */short) (signed char)-113)), (arr_5 [i_0] [i_1 + 1])))))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) (!(min((((((/* implicit */_Bool) (short)-11029)) || (((/* implicit */_Bool) arr_2 [i_1 + 2])))), ((!(((/* implicit */_Bool) arr_4 [i_0]))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 4; i_2 < 23; i_2 += 2) 
                {
                    arr_11 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_1] [i_2])) == (((/* implicit */int) (short)11025)))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) max((arr_4 [i_0]), (((/* implicit */short) (signed char)86)))))))) ? ((-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) var_6))))))) : ((~(((((/* implicit */_Bool) (short)6223)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_0]))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_2 - 2] [i_1 + 1])) | (((/* implicit */int) arr_8 [i_2 - 2] [i_1 + 1]))));
                        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-16459)) * (((/* implicit */int) var_14))))) ? (((((/* implicit */int) var_13)) & (((/* implicit */int) (signed char)-15)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (signed char)5))))));
                    }
                    for (short i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) min((((((/* implicit */int) arr_3 [i_2 + 1])) - (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) var_6))));
                        arr_19 [i_4] [i_4 + 1] [i_2 + 1] [i_4] = arr_2 [i_2];
                        var_23 = ((/* implicit */signed char) min(((-(((/* implicit */int) max((((/* implicit */short) arr_18 [i_1] [i_1] [i_2] [i_4 - 1] [i_4] [i_4 + 2])), (arr_9 [i_1] [i_2] [i_4])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)16458)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2 + 1] [i_2] [i_4]))))) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 2])) : (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) arr_16 [i_0] [i_4] [i_2] [i_4])) : (((/* implicit */int) (signed char)80))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_24 = (signed char)-5;
                        arr_23 [i_0] [i_5] [i_2] [i_5] = ((/* implicit */signed char) (-(((((((/* implicit */int) arr_20 [i_0] [i_0] [i_1 + 1] [i_5])) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_0] [i_1])) - (26518)))))));
                        var_25 = ((/* implicit */signed char) ((short) max(((short)-19311), (((/* implicit */short) (signed char)92)))));
                    }
                    var_26 = ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)11)) && (((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */int) ((((/* implicit */int) (short)16458)) >= (((/* implicit */int) (short)-22947))))) : (((/* implicit */int) max((var_9), (var_8)))))) < (((/* implicit */int) arr_4 [i_2]))));
                    var_27 = ((/* implicit */short) ((((/* implicit */int) min((arr_12 [i_2] [i_2] [i_2 - 4] [i_1 + 2]), (((/* implicit */short) arr_20 [i_2] [i_2] [i_2 + 1] [i_2]))))) - (((((/* implicit */int) arr_20 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2 - 1])) + (((/* implicit */int) var_7))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */short) var_13);
    var_29 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_8)))));
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (~(((/* implicit */int) (signed char)-29)))))));
                        var_31 = arr_5 [i_6] [i_8];
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (signed char i_11 = 2; i_11 < 14; i_11 += 3) 
                        {
                            {
                                arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (~(((/* implicit */int) (short)(-32767 - 1)))));
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_10] [i_7]))))) ? (((/* implicit */int) arr_22 [i_11 + 3] [i_11 - 1] [i_11 + 3] [i_11 + 2])) : (((/* implicit */int) arr_28 [i_11] [i_8]))));
                                var_33 += ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((short)13853), (arr_28 [i_6] [i_7])))) ? (((/* implicit */int) min(((short)-11029), (((/* implicit */short) (signed char)-9))))) : (((/* implicit */int) var_13)))) | ((~(((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */short) min((var_34), (((short) min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) arr_4 [i_8])))))));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */short) ((((/* implicit */int) var_7)) < (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))));
}
