/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57293
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
    var_17 = var_4;
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)(-32767 - 1))));
        arr_3 [i_0] [i_0] |= ((/* implicit */short) (((_Bool)0) ? ((~(((/* implicit */int) (short)32749)))) : (((/* implicit */int) (short)-5369))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) (short)32747)) + (((/* implicit */int) (_Bool)1)))))));
        arr_6 [i_1] = arr_5 [i_1];
        arr_7 [i_1] = (short)32738;
        var_19 = ((arr_4 [i_1 - 1]) && (arr_4 [i_1 - 1]));
    }
    for (short i_2 = 1; i_2 < 15; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_20 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
            var_21 -= ((/* implicit */_Bool) arr_8 [i_3]);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        {
                            arr_23 [i_4] [i_6] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (!(arr_15 [i_2] [i_2] [i_2] [i_2])))) * (((/* implicit */int) var_10))));
                            arr_24 [i_2] [(_Bool)1] [i_5] [i_5] [i_7] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) min((min(((short)32767), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) var_8))))) || ((!((((_Bool)1) || (arr_17 [i_2] [i_2] [i_5] [i_6])))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_2 + 2] [i_2 - 1] [i_7 + 1] [i_7 - 2])) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-22625)) : (((/* implicit */int) ((short) arr_17 [i_2 - 1] [i_2 + 1] [i_7 - 2] [i_7 - 1])))));
                            var_23 = ((/* implicit */_Bool) max((var_23), ((_Bool)1)));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */_Bool) max((var_24), (((_Bool) ((var_9) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */short) arr_22 [(_Bool)0])), (arr_12 [i_2] [i_2])))))))));
            arr_25 [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4] [i_2] [(_Bool)1])) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0)))))));
            arr_26 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)15636)) ? (((/* implicit */int) ((_Bool) arr_20 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 2]))) : (((/* implicit */int) min((arr_4 [i_2 + 2]), ((_Bool)1))))));
        }
        var_25 ^= min((((_Bool) (short)7936)), (var_5));
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_2] [i_2] [i_2 - 1] [i_2])) + (((/* implicit */int) (short)24163)))))));
    }
    var_27 = var_11;
    var_28 = var_10;
}
