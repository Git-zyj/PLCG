/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62717
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (short)13991))))) : (((/* implicit */int) var_1)))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-13995)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_10)) : (var_14))))))) : (((/* implicit */int) var_0)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)30)) * (((/* implicit */int) (short)-14018))))) ? (arr_5 [(unsigned char)4] [(short)0] [i_1 + 1]) : (((/* implicit */int) ((var_14) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))))))));
            arr_6 [i_0] [i_0] = var_2;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                for (unsigned char i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 8388608)) ? (arr_8 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        arr_16 [i_0] [i_0] [i_4] [6] [(unsigned short)4] = ((/* implicit */int) var_14);
                        var_19 += ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(unsigned char)10])) | (((/* implicit */int) (unsigned char)187))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_4 - 2])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_11)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((((/* implicit */int) var_6)) >= (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned int) arr_5 [(unsigned char)3] [i_5 - 1] [i_5 - 1])) : (arr_2 [i_5 + 2] [i_2])));
                        var_21 = ((/* implicit */int) (unsigned char)5);
                        arr_23 [i_2] [i_5] = ((/* implicit */int) (-(arr_22 [i_0] [i_0] [i_0] [i_0])));
                        var_22 *= var_3;
                    }
                } 
            } 
        }
        var_23 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((short)-1), ((short)19176))))));
    }
}
