/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/952
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 4294967295U))));
    var_20 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_14))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_2))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 3])) ? (((/* implicit */int) (unsigned short)36865)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)132))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned char) (unsigned short)26);
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_17))) | (((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (arr_8 [i_0 - 3] [i_1 - 1] [i_2] [i_3] [i_4]) : (arr_2 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_4 + 2])))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((min((((/* implicit */int) arr_11 [i_0 - 4] [i_0] [i_0 - 4] [i_0] [i_0] [i_0])), ((~(((/* implicit */int) var_4)))))), (((/* implicit */int) ((unsigned short) min((arr_9 [i_0] [i_2] [i_0] [i_2] [(short)0] [i_4]), (((/* implicit */unsigned short) var_7)))))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_10 [i_2] [i_2] [i_1 + 1] [i_1 + 1] [i_0]))))));
            }
            var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) && (((/* implicit */_Bool) arr_6 [i_0 + 1]))));
        }
        for (unsigned char i_5 = 4; i_5 < 15; i_5 += 4) 
        {
            var_29 = ((/* implicit */unsigned char) (~(arr_14 [i_5])));
            var_30 |= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_1 [i_0 - 3] [i_5])))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_5 - 2] [i_0] [i_0 - 4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0 - 3])) : (((/* implicit */int) arr_15 [i_0]))))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_31 += ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_6 [i_0 - 3]), (arr_6 [i_0 - 4])))), (max(((~(((/* implicit */int) arr_12 [i_6] [i_6] [i_6])))), (((/* implicit */int) arr_17 [i_6] [i_6] [i_6]))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                var_32 = (unsigned short)65535;
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0 - 1] [i_7])) ? (arr_16 [i_6] [i_0 + 3] [i_0 + 3]) : (arr_16 [i_0 - 4] [i_0 - 2] [i_0 - 4]))) >= (arr_16 [i_0] [i_0 - 2] [i_0]))))));
                var_34 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3] [i_0])) | (((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 1]))))));
                var_35 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28345)) ? (1882135350U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)255)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-273)) == (((/* implicit */int) arr_0 [i_0] [i_6])))))) : (arr_2 [i_6]))), (((/* implicit */unsigned int) min(((unsigned char)249), (var_11))))));
            }
        }
        var_36 = ((/* implicit */unsigned short) max((2080374784U), (4061428231U)));
    }
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        var_37 |= ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned char)247))))));
        var_38 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_8])) >> (((((/* implicit */int) arr_3 [i_8] [i_8] [i_8])) - (28985)))))) : (0U))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_8] [i_8])))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        var_39 ^= ((/* implicit */short) arr_24 [i_9] [(short)10]);
        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_9] [i_9]))))) ? (arr_25 [i_9]) : ((-(var_14)))));
        var_41 = ((/* implicit */unsigned char) arr_8 [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-251))));
        var_43 = ((/* implicit */unsigned int) arr_10 [i_10] [i_10] [i_10] [i_10] [i_10]);
    }
    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) var_3))));
}
