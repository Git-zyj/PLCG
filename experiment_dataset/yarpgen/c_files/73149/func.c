/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73149
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (signed char)127);
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-127)) | (((/* implicit */int) var_6))));
                var_21 |= ((/* implicit */unsigned char) var_16);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)87))))) || (((((/* implicit */_Bool) (signed char)98)) || (((/* implicit */_Bool) arr_8 [i_2])))))) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) var_10))))) || ((!(((/* implicit */_Bool) (unsigned char)245)))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)48)) && (((/* implicit */_Bool) (+(((((/* implicit */int) arr_9 [i_6])) & (((/* implicit */int) var_10)))))))));
                                arr_20 [i_2] [i_2] [i_3] [i_3] [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((unsigned char) var_12));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (unsigned char)64)))) % (((/* implicit */int) ((signed char) (unsigned char)221)))))) ? (((/* implicit */int) (unsigned char)207)) : (((((/* implicit */int) var_10)) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) (unsigned char)64)))))))));
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 2) 
        {
            for (signed char i_9 = 3; i_9 < 13; i_9 += 3) 
            {
                {
                    arr_28 [i_9] [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_0)) * (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned char)208))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)20))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) | (((/* implicit */int) ((signed char) (signed char)127)))));
                        var_27 *= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (signed char)-45)) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        var_28 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_26 [i_11] [i_7] [i_9]))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 2; i_12 < 15; i_12 += 4) 
                        {
                            var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (unsigned char)188))))) ? (((((/* implicit */int) (unsigned char)67)) | (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) var_18))));
                            arr_37 [i_7] |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)63)) <= (((/* implicit */int) arr_24 [i_7]))));
                            arr_38 [i_7] [i_8 + 1] [i_11] [i_11] [i_12 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_12 - 2] [i_8 - 2] [i_11] [i_9 - 2] [i_12 - 2])) >= (((/* implicit */int) arr_33 [i_12 - 1] [i_8 - 1] [i_11] [i_9 + 3] [i_12 - 2]))));
                            var_30 |= (unsigned char)46;
                        }
                    }
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        var_31 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) ((signed char) var_8))) : (((((/* implicit */int) (signed char)38)) | (((/* implicit */int) (signed char)-122))))));
                        var_32 = ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) var_7))));
                        arr_41 [i_7] [i_7] = ((/* implicit */signed char) arr_25 [i_8 + 2] [i_8 + 2]);
                    }
                }
            } 
        } 
    } 
}
