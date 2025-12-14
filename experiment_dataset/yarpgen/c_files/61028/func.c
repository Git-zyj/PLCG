/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61028
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
    var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_9)) + (((((/* implicit */int) var_6)) | (((/* implicit */int) var_14))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_18 += ((unsigned int) arr_1 [i_0 - 2]);
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (arr_1 [i_0 + 1])));
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0 + 1] [i_0])) != (((/* implicit */int) (unsigned char)178)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0 - 2]))))) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))));
        var_20 = ((/* implicit */signed char) arr_0 [i_0] [i_0 + 1]);
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) arr_4 [i_1])))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [i_1])))) & ((-(((/* implicit */int) var_2))))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) arr_4 [i_2]);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_1))));
    }
    var_23 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (signed char i_4 = 3; i_4 < 13; i_4 += 4) 
        {
            {
                var_24 += ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_12 [10U] [i_4 - 3] [10U]))))));
                var_25 = ((/* implicit */signed char) ((unsigned int) var_14));
                arr_14 [12U] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-37))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    arr_18 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (~(((arr_8 [i_5] [i_4 - 2]) ^ (arr_8 [i_3] [i_4])))));
                    var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-44)) ? (254250522U) : (4294967295U)));
                }
                for (unsigned int i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    arr_21 [i_6] [i_4] [i_4] [(unsigned char)8] = ((((arr_8 [i_6 - 1] [i_4 - 3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_3] [i_4 - 1] [i_3]))))) >> (((arr_8 [i_6 - 1] [i_4 - 1]) - (1869029581U))));
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (((-(arr_8 [(unsigned char)18] [i_4 - 2]))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (signed char)114))))))))));
                    var_28 = ((unsigned char) ((((((/* implicit */_Bool) arr_3 [i_6 - 1])) ? (arr_13 [i_4] [11U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3]))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4] [i_4 + 1])))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (signed char i_8 = 4; i_8 < 13; i_8 += 3) 
                        {
                            {
                                arr_28 [i_8] [i_4] [5U] [i_4] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8] [(unsigned char)2] [i_4] [i_3])) ? (843754215U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226)))))) || (((/* implicit */_Bool) ((arr_16 [i_8] [i_7] [i_6 + 1] [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) var_6)), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6]))))))));
                                arr_29 [i_7] [i_4] [i_6] [i_8 - 3] [i_8 - 2] [i_4] [i_6] = (-(arr_11 [i_8] [i_7] [10U]));
                                arr_30 [i_3] [i_3] [i_4] [i_3] [i_3] = arr_26 [i_4 - 2];
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
