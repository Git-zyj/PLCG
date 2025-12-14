/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87987
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
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)9589))))) && (((/* implicit */_Bool) max((var_12), (var_4)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((short) var_12)))));
                    var_14 = ((/* implicit */short) max((var_14), (((short) min((var_3), (((/* implicit */short) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_11))))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_1] = var_0;
                            var_15 = var_0;
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_16 = (short)8069;
                            var_17 += var_5;
                            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_3 + 1] [(short)4] [i_3 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))));
                            var_19 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
                        }
                        var_20 = ((/* implicit */short) (~(((/* implicit */int) min(((short)-23294), (arr_13 [i_3 + 2] [i_0 + 2] [i_0] [i_0] [i_0] [i_0]))))));
                        arr_18 [i_0] [i_1] [i_1] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]))))) ? (((((/* implicit */_Bool) (short)-9589)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) min(((short)32767), (min((arr_3 [i_0] [i_1]), (var_3))))))));
                        arr_19 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */int) min((arr_10 [i_0] [i_0] [i_2] [i_0]), (var_2)))) != (((/* implicit */int) (short)-30543)))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (short)-26777)) : (((/* implicit */int) (short)15351)))))))));
                    }
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-12524)) : (((/* implicit */int) var_11)))))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) (+(((/* implicit */int) ((short) ((short) arr_1 [i_0] [i_0]))))));
    }
    var_23 += ((/* implicit */short) ((((/* implicit */int) var_6)) <= (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >> (((((/* implicit */int) var_5)) - (23974)))))));
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (short i_7 = 1; i_7 < 10; i_7 += 4) 
        {
            {
                var_24 = ((short) arr_21 [i_7] [i_7 + 2]);
                var_25 = ((/* implicit */short) min((((/* implicit */int) min((min((var_9), ((short)-8069))), (max(((short)32767), (var_5)))))), (max(((-(((/* implicit */int) arr_22 [i_7])))), (((/* implicit */int) max((arr_20 [i_6] [i_6]), (var_8))))))));
                arr_24 [i_6] = (short)-31948;
            }
        } 
    } 
}
