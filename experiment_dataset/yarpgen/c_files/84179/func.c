/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84179
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) min(((!(((/* implicit */_Bool) var_13)))), (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-557)) : (((/* implicit */int) var_12)))) > (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_16 = ((short) arr_0 [i_1]);
                    var_17 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (short)-6177))))) <= (((/* implicit */int) var_11)))) ? (((((/* implicit */int) (short)11992)) >> (((((/* implicit */int) arr_3 [i_0] [i_0])) - (26069))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [(short)9] &= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) max((var_7), (var_14)))) != (((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_3] [i_1])))))));
                        arr_10 [i_0] [i_1] [i_0] [i_1] [(short)8] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)8198)) && (((/* implicit */_Bool) (short)19864))))) << ((+(((/* implicit */int) ((((/* implicit */int) (short)-6376)) <= (((/* implicit */int) var_8)))))))));
                        arr_11 [i_0] [i_0] [i_2] [(short)6] [i_0] [(short)6] = ((/* implicit */short) (-(((((/* implicit */int) arr_5 [i_0] [i_1] [(short)2] [i_3])) * (((/* implicit */int) arr_5 [i_3] [(short)4] [(short)2] [i_3]))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_18 = arr_5 [i_4] [(short)9] [i_2] [i_4];
                        arr_15 [i_0] [i_1] [(short)5] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_2])) : ((-(((/* implicit */int) var_12))))));
                        var_19 = var_12;
                    }
                }
            } 
        } 
    }
    for (short i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-6177))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) (+(((/* implicit */int) ((short) ((((/* implicit */int) arr_7 [i_8] [i_5] [(short)0] [i_5])) < (((/* implicit */int) arr_8 [(short)2] [(short)2] [(short)7] [i_7] [i_8]))))))));
                        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) ((short) (short)-8197))) | (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_6 [(short)8] [(short)6])))))))));
                    }
                } 
            } 
            var_23 *= ((/* implicit */short) ((((/* implicit */int) (short)-31973)) <= (((/* implicit */int) (short)6176))));
            arr_27 [(short)0] = ((short) (short)8650);
        }
    }
    var_24 *= max((var_5), (((/* implicit */short) ((((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) (short)-6169)))) && (((/* implicit */_Bool) max((var_11), (var_8))))))));
}
