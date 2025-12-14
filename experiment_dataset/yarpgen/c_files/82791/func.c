/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82791
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (short)14360)) : (((/* implicit */int) (short)-14360))));
        var_14 = ((/* implicit */short) (((~((~(((/* implicit */int) (short)5139)))))) | (((/* implicit */int) var_9))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */int) (short)29606)) == (((/* implicit */int) (short)(-32767 - 1)))));
        arr_7 [i_1 + 2] [i_1] = ((/* implicit */short) (!((!((!(((/* implicit */_Bool) var_7))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 15; i_3 += 2) 
            {
                {
                    arr_13 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_10), (var_1)))), (((((/* implicit */int) (short)25646)) << (((((/* implicit */int) (short)9072)) - (9068)))))))) ? (((/* implicit */int) ((((/* implicit */int) (short)6897)) != (((/* implicit */int) (short)32767))))) : ((((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) arr_4 [(short)4] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_3]))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 + 4])) / (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */int) var_3)) & (((/* implicit */int) arr_10 [i_1 + 4]))))));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))));
    }
    var_17 = ((/* implicit */short) min((((/* implicit */int) var_7)), (max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-21828)))), ((~(((/* implicit */int) var_7))))))));
}
