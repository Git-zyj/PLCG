/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55118
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
    var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) -1697778019)) ? (((/* implicit */int) var_2)) : (-1697778019))), (((((((/* implicit */_Bool) var_2)) ? (2147483638) : (((/* implicit */int) (short)4360)))) + ((-(var_12)))))));
    var_14 = ((/* implicit */short) ((max(((+(-1834786226))), (((/* implicit */int) var_11)))) / (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (-2147483638) : (var_3)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [(short)2] [i_2] [i_1] [i_2] [i_2] [(short)2] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3 - 1])) >= (((/* implicit */int) arr_11 [i_0] [i_2] [i_3]))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)-3850)) ? (2147483638) : (((/* implicit */int) var_1)))) <= (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) > (((/* implicit */int) (short)-16310))))))))));
                        arr_13 [i_1] [i_1] &= var_4;
                    }
                    for (short i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((max((var_3), (((((/* implicit */int) (short)16309)) + (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_4])))))) * (((2047) * (((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_2]))))));
                        arr_18 [i_0] [i_4 + 2] [i_2] [i_4] [i_2] [i_4] = max((max((((/* implicit */long long int) arr_5 [i_4 + 2] [i_2])), (-6320460984314619267LL))), (((long long int) ((((/* implicit */int) (signed char)70)) % (((/* implicit */int) (signed char)-68))))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_4] [(_Bool)1] [(_Bool)1] [i_4 - 1] [i_2])) > (((/* implicit */int) arr_8 [i_0] [i_2] [i_4 - 1]))));
                    }
                    var_16 = ((/* implicit */signed char) var_8);
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 19; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_1] [i_0] [(short)6] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_5] [i_1])) - (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) var_7))));
                            var_17 = ((/* implicit */int) max((arr_5 [i_0] [i_0]), (arr_4 [i_5] [i_6])));
                        }
                        for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */int) max((max((max((((/* implicit */unsigned short) var_9)), (var_0))), (((/* implicit */unsigned short) arr_22 [i_7] [i_5] [i_2] [(short)8] [i_0])))), (((/* implicit */unsigned short) arr_20 [i_0] [(short)16] [i_1] [(short)16] [(_Bool)1] [i_7]))));
                            var_19 = ((/* implicit */short) (+((-(((/* implicit */int) var_10))))));
                            var_20 &= max((2622506076801341970LL), (((/* implicit */long long int) max(((short)-22347), ((short)32767)))));
                        }
                        var_21 = ((/* implicit */short) var_5);
                        arr_27 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [i_2] [i_5]);
                        var_22 = ((/* implicit */short) var_5);
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_26 [i_0] [i_2] [i_0]))));
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [13] [16])))), (((/* implicit */int) ((unsigned short) 3145728)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [(short)10])) > (((/* implicit */int) (short)-9612))))) : (((/* implicit */int) arr_5 [i_0] [i_0]))));
    }
}
