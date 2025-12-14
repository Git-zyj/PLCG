/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75745
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
    var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((((/* implicit */_Bool) -2101347974)) ? (((/* implicit */int) var_8)) : (var_14)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */int) (short)21935)) == (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) > (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (short)22999)) > (((((/* implicit */_Bool) (short)21935)) ? (((/* implicit */int) (short)4537)) : (((/* implicit */int) (short)-21405))))))), (var_4)));
                    var_22 = ((/* implicit */int) max((var_22), ((+(((/* implicit */int) (short)63))))));
                    arr_11 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0])) > (((/* implicit */int) arr_1 [i_2] [i_2])))) ? (((/* implicit */int) min(((short)-21939), ((short)-6860)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2] [i_2]))))) ? (((/* implicit */int) ((_Bool) (short)4554))) : (((/* implicit */int) (short)4537))))));
                    var_23 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_9 [(short)3] [(short)3] [12U] [12U])) == (((((/* implicit */int) var_17)) / (((/* implicit */int) var_12))))))), (max(((-(-431320303))), ((+(2137577547)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 12; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) var_2)), ((-(((/* implicit */int) arr_17 [i_3 - 2] [i_3 - 2] [i_3 - 1]))))));
                    var_24 += ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (arr_3 [i_4] [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1)) - (arr_14 [(short)6] [(short)6])))) ? (((/* implicit */int) var_7)) : (((1047342128) / (((/* implicit */int) (short)1920)))))))));
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */short) max((((((((/* implicit */int) arr_4 [i_0] [i_0])) ^ (((/* implicit */int) arr_9 [i_0] [i_0] [(short)11] [i_0])))) - (((((/* implicit */_Bool) 431320283)) ? (((/* implicit */int) (short)-4510)) : (((/* implicit */int) var_2)))))), (((int) ((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) var_8)))))));
                        var_26 = ((((/* implicit */int) (short)-5024)) <= (((((/* implicit */int) var_9)) & (((/* implicit */int) var_17)))));
                        arr_21 [i_4] [i_4] [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)16383))))) ? (((/* implicit */unsigned int) 2147483632)) : (((((/* implicit */_Bool) 431320276)) ? (3080799356U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30328)))))));
                    }
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        arr_25 [i_0] = ((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) (short)21939)))));
                        var_27 = ((/* implicit */int) ((min((((/* implicit */int) max((arr_15 [i_3] [(unsigned short)7] [i_3 - 2]), (((/* implicit */unsigned short) var_13))))), ((+(((/* implicit */int) (signed char)-14)))))) <= ((~(((/* implicit */int) ((unsigned short) arr_1 [i_4] [i_4])))))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)0] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) - (((/* implicit */int) arr_9 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1])))) ^ (min((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_11))))), (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_19))))))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0]))) * (((/* implicit */int) max((arr_24 [i_0] [5U] [i_0] [(unsigned short)4]), ((short)-591)))))) == (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((int) arr_4 [i_0] [i_0])) : (((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_3))))))));
                    }
                    var_28 = ((((/* implicit */int) (short)-16384)) ^ (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_16 [i_3] [i_3 - 3] [i_3] [i_3])) ? (((/* implicit */int) arr_23 [i_0])) : (var_0))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32767))))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */int) var_12);
    var_30 |= ((/* implicit */int) var_5);
}
