/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57015
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) arr_3 [i_0]);
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)25045)) | (((/* implicit */int) (unsigned char)133))))) ^ (arr_3 [(unsigned char)8])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) var_3)))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((arr_2 [i_0] [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0] [(short)6])) - (15997)))))) <= (arr_3 [i_0]))))));
        var_21 -= ((/* implicit */unsigned long long int) arr_0 [(unsigned char)7] [i_0]);
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)192)) / (((/* implicit */int) (short)-32634))))) * (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2]))) : (var_15)))));
        arr_7 [(short)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) arr_4 [i_1 + 3]))))));
    }
    for (unsigned char i_2 = 4; i_2 < 13; i_2 += 1) 
    {
        var_23 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] = arr_4 [i_4 - 1];
                        var_24 = ((/* implicit */int) (((~(((int) var_0)))) < (((/* implicit */int) arr_0 [i_5] [i_5]))));
                        arr_19 [0U] [i_3] [i_4 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_2 [15U] [i_4])) < (((((/* implicit */_Bool) arr_16 [i_2 - 4] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_15)))));
                        var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3458968164U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3])))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3])) || (((/* implicit */_Bool) arr_14 [i_2 - 1] [i_3] [i_3] [(short)4]))))))) : (((/* implicit */int) var_13))));
                    }
                } 
            } 
        } 
        var_26 = ((((/* implicit */unsigned int) (+(var_9)))) - (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) + (var_8))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)20128))))))));
        var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (short)-4813)) : (((/* implicit */int) (short)-487)))) == (((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned char)63))))));
        var_28 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((arr_1 [i_2]) % (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (1477979661U)))) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_9 [i_2]))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10026))) : (var_17))))) : (var_17)));
}
