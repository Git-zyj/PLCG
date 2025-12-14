/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55711
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
    var_20 += ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)60))))) ? ((-(((/* implicit */int) var_18)))) : (((((/* implicit */int) (short)57)) >> (((((/* implicit */int) var_12)) + (31991))))))) >= (min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) (short)-17749))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_21 += var_17;
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_22 = arr_1 [i_1] [i_1 + 3];
                                arr_14 [i_0] [i_2] [i_1 - 2] [(short)22] [i_2 + 1] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), ((short)17737)))) ? (((/* implicit */int) max(((short)27639), (arr_12 [i_0] [i_2 + 2])))) : (((((/* implicit */int) var_13)) - (((/* implicit */int) (short)-24417))))))) ? (((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 1] [i_1])) : ((-((-(((/* implicit */int) arr_7 [i_3] [i_3] [i_2]))))))));
                                var_23 = ((short) max((arr_9 [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3]), (arr_9 [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3 + 2])));
                                var_24 ^= var_9;
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_1] = var_18;
                /* LoopNest 3 */
                for (short i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_5 + 3] = (short)16250;
                                arr_24 [i_5 + 3] [i_1] = ((/* implicit */short) (~((((~(((/* implicit */int) var_8)))) / ((-(((/* implicit */int) arr_11 [i_0] [(short)14] [i_0] [i_0] [i_0] [i_0]))))))));
                                var_25 = ((/* implicit */short) (-(((((/* implicit */int) (short)-9993)) | (((((/* implicit */int) (short)16297)) / (((/* implicit */int) arr_13 [(short)18] [i_1] [i_1] [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((short) var_8);
    var_27 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) == (((((/* implicit */_Bool) max((var_11), (var_18)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) max(((short)32744), (var_18))))))));
    var_28 &= ((/* implicit */short) ((((((/* implicit */int) var_5)) < (((((/* implicit */int) var_15)) >> (((((/* implicit */int) (short)11947)) - (11925))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17))));
}
