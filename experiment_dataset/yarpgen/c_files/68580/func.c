/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68580
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
    var_18 = ((/* implicit */long long int) var_12);
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((((/* implicit */_Bool) 2683207027U)) ? (((/* implicit */int) (short)6144)) : (((/* implicit */int) (short)-6128)))))))));
    var_20 = (~(((((/* implicit */int) var_17)) << (((((/* implicit */int) var_16)) + (7606))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29383)) ? (((/* implicit */int) (short)-29374)) : (((/* implicit */int) (short)29381))))) ? (((((/* implicit */int) (short)-29384)) | (((/* implicit */int) (short)-29374)))) : (var_10)));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(((/* implicit */int) (short)29384)))) : ((~((~(((/* implicit */int) var_17))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_23 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (1736374671) : (((/* implicit */int) ((short) var_6))));
            var_24 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_4 [i_1] [i_0]))))));
            var_25 = ((/* implicit */unsigned char) arr_7 [i_1] [i_0]);
            /* LoopSeq 1 */
            for (signed char i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                arr_12 [i_0] [i_0] [i_2] [12LL] = ((/* implicit */long long int) (((+(arr_9 [i_0] [i_1] [i_2 - 3] [i_2]))) <= (arr_9 [i_0] [i_0] [i_0] [i_0])));
                var_26 = ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 2] [i_2] [i_2])) ? (607712116U) : (arr_8 [(short)4] [i_2 - 2] [(short)4] [(short)4])));
                arr_13 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_3 [i_2 + 2]))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        {
                            arr_21 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) arr_15 [i_2] [i_0] [i_0] [i_2]);
                            var_27 = ((/* implicit */long long int) 1736374671);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 15; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_28 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                            var_29 = min((((unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_2] [14LL] [i_2])) < (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] [i_6]))))), (((/* implicit */unsigned long long int) (-(var_11)))));
                        }
                    } 
                } 
            }
        }
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) var_5))));
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (short)17487))))))) && (((/* implicit */_Bool) (short)-29411)))))));
    }
    var_32 = ((/* implicit */int) min((((((/* implicit */_Bool) var_10)) ? (((2185902090U) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))))))));
}
