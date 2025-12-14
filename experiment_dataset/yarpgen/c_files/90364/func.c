/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90364
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((short) var_4))) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (short)22614))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((short) arr_0 [i_0]);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_9 [(short)18] [i_0] [i_2] [i_0] = var_6;
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1] [(short)9] [i_1] [i_4 - 1] [i_4 - 1] [i_0] = ((/* implicit */short) min((max((((/* implicit */int) max((arr_2 [i_0] [i_0]), ((short)31543)))), (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2] [i_3] [i_0] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3] [i_0] [i_4])))))), (((/* implicit */int) var_10))));
                            arr_14 [i_4] [i_3] [i_0] [i_1] [i_0] = var_2;
                        }
                        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-17835), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) (short)-28169)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)18203)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)18191)) : (((/* implicit */int) (short)6625))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)8398)))))));
                            arr_17 [(short)7] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)18216)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) (short)7672)) < (((/* implicit */int) var_2))))))), (((/* implicit */int) ((short) var_2)))));
                            var_15 = (short)6613;
                        }
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_16 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6645)) ? (((/* implicit */int) (short)-19941)) : (((/* implicit */int) var_6)))))));
                        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) (short)18203))));
                        var_18 = arr_8 [i_0];
                    }
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_24 [i_0] [(short)10] [(short)2] [(short)12] &= ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min(((short)9138), ((short)6611)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-7263)) : (((/* implicit */int) var_6))))));
                        arr_25 [i_0] [i_0] [i_0] [i_7] [i_2] [(short)15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (var_11)))) ? (((((/* implicit */_Bool) arr_23 [(short)7] [i_1] [i_2] [i_7])) ? (((/* implicit */int) (short)-6616)) : (((/* implicit */int) (short)-19119)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_3)))))))) ? (((((/* implicit */_Bool) min(((short)6611), (var_6)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_9)) * (((/* implicit */int) (short)1792)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)6641)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) max(((short)9162), (arr_16 [i_0] [i_1] [i_2] [(short)12] [i_1])))) : (((/* implicit */int) (short)6644))))));
                    }
                    var_19 = var_7;
                    var_20 |= ((/* implicit */short) ((((/* implicit */int) var_10)) - (max((((/* implicit */int) (short)-6611)), (((((/* implicit */_Bool) (short)-9138)) ? (((/* implicit */int) (short)6641)) : (((/* implicit */int) (short)-6641))))))));
                }
            } 
        } 
    } 
    var_21 = var_1;
}
