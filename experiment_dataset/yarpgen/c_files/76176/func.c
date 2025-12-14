/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76176
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((long long int) ((unsigned short) min((((/* implicit */int) arr_1 [i_0] [(unsigned char)23])), (1839257600)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ^ (((long long int) ((int) (short)32767)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_2] [i_2] [i_2] [8U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_4])) || (var_6)));
                        arr_15 [1U] [(signed char)8] [i_2] [(signed char)8] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_2]) : (var_7)));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_18 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42))) < (var_8))) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_6 [i_1] [i_2 - 1]))));
                        var_12 = ((/* implicit */_Bool) ((int) (unsigned short)0));
                        arr_19 [i_2] [i_5] = ((/* implicit */_Bool) arr_16 [i_1] [i_1] [(short)11] [i_2] [i_2] [(signed char)18]);
                    }
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        arr_23 [i_1] [i_2] [i_6] = (-(((/* implicit */int) arr_10 [i_2] [i_2] [i_2])));
                        arr_24 [i_2] [i_2] [i_3] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_7)))));
                    }
                    var_13 = ((/* implicit */unsigned char) var_8);
                    arr_25 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned int) max((var_14), (var_7)));
        var_15 = ((/* implicit */signed char) (unsigned char)17);
    }
    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 4) 
    {
        arr_29 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) (signed char)-42))));
        var_16 = ((/* implicit */short) var_7);
        arr_30 [i_7] = ((/* implicit */_Bool) arr_20 [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7]);
        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */int) (short)-8687)) % (((/* implicit */int) arr_26 [i_7 + 1]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)28925)) ? (arr_9 [i_7] [i_7] [i_7]) : (0U)))) : ((-(max((-1916086467077070165LL), (((/* implicit */long long int) var_9))))))));
    }
    var_18 -= ((/* implicit */unsigned long long int) 425161405);
}
