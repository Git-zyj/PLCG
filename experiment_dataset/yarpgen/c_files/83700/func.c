/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83700
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
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1 + 3] [i_1 + 3] = ((short) (short)-1);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_13 = arr_0 [i_0 + 3];
                            var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2] [i_2] [i_3 + 1]))))) ? (((((/* implicit */int) arr_2 [i_0 + 3])) | (((/* implicit */int) var_7)))) : (((/* implicit */int) max((min(((short)248), ((short)-1))), (arr_0 [i_3]))))));
                            var_15 = ((/* implicit */short) max((var_15), (max((((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2] [i_1 - 1] [i_1 + 1])) || (((/* implicit */_Bool) (short)-16898))))), (arr_7 [i_0] [i_1 - 3] [i_3 + 1])))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) (+(((/* implicit */int) ((short) (short)10)))));
                /* LoopNest 3 */
                for (short i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((var_17), (arr_16 [i_6] [i_1 - 1])));
                                arr_19 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_1 + 1] [i_4] [i_4] [i_6])), ((+(((/* implicit */int) arr_13 [i_0] [i_0] [i_4 + 3] [(short)11])))))))));
                                var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) max(((short)1920), (var_7)))) ? (((((/* implicit */_Bool) max((arr_7 [i_5] [i_0] [i_0]), (arr_14 [i_0 + 1] [(short)9] [(short)9])))) ? (((/* implicit */int) max((arr_9 [i_5] [i_1 - 3] [i_5]), ((short)-27)))) : (((((/* implicit */_Bool) arr_11 [(short)22] [i_5] [i_5] [i_6])) ? (((/* implicit */int) arr_9 [i_5] [i_1] [i_1])) : (((/* implicit */int) arr_17 [i_6] [i_1] [(short)10] [i_6] [i_6] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)9132))))) ? ((-(((/* implicit */int) (short)24576)))) : (((((/* implicit */_Bool) (short)9)) ? (((/* implicit */int) arr_5 [i_6])) : (((/* implicit */int) (short)-32750))))))));
                                var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) (short)0))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    arr_22 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */int) ((((/* implicit */int) (short)29197)) >= (((/* implicit */int) (short)-1921))))) + (((/* implicit */int) max(((short)(-32767 - 1)), ((short)-27595)))))), (((/* implicit */int) ((short) min(((short)-11179), (arr_11 [i_0] [i_1] [i_1] [i_0])))))));
                    arr_23 [i_0] [i_0] [i_0] [i_1] = min(((short)-30982), ((short)5529));
                }
                /* vectorizable */
                for (short i_8 = 2; i_8 < 23; i_8 += 2) 
                {
                    var_20 = (short)(-32767 - 1);
                    arr_26 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) + (((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_1])) : (((/* implicit */int) (short)21126))))));
                }
            }
        } 
    } 
    var_21 -= ((/* implicit */short) ((max((((/* implicit */int) max((var_7), ((short)-2994)))), (((((/* implicit */int) var_12)) - (((/* implicit */int) (short)27756)))))) / (((((/* implicit */_Bool) ((((/* implicit */int) (short)-1603)) / (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((short) (short)-29643))) : (((/* implicit */int) ((short) var_9)))))));
}
