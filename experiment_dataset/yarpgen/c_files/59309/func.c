/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59309
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) & ((((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 += ((/* implicit */unsigned int) min(((short)3022), ((short)15363)));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_1] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
                var_15 = ((/* implicit */short) 4294967281U);
            }
            var_16 |= ((/* implicit */short) ((((_Bool) max((var_6), (arr_6 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */short) (_Bool)1))))))))) : (((((/* implicit */_Bool) 3520545826U)) ? (min((((/* implicit */unsigned int) var_1)), (2903518131U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-16878)) : (((/* implicit */int) arr_4 [i_1] [i_0])))))))));
            var_17 = ((/* implicit */short) var_12);
            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-12763)) + (12770))))) >> (((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) == (((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((_Bool)0)))) * (((/* implicit */int) min(((_Bool)1), (var_7))))))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(_Bool)1] [i_3])) << (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])), (var_12)))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_2 [i_0]))))))))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */int) min((((_Bool) arr_3 [i_3 - 1] [i_3 - 1] [i_0])), ((_Bool)1)))) <= (((((/* implicit */int) var_10)) | (((/* implicit */int) arr_10 [i_3 - 1] [i_3] [i_0]))))))));
        }
        var_21 = ((/* implicit */short) min((var_21), (((short) (short)-9864))));
        var_22 = 2610651022U;
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_4 [(short)5] [(_Bool)1])) ? ((+(57344U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
            arr_16 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_8 [(_Bool)1] [(_Bool)1] [i_4])))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((arr_7 [10U] [i_6] [i_5 + 3] [i_0]) && (((/* implicit */_Bool) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [(_Bool)1] [i_0])))))))))));
                var_25 ^= ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_4 [i_5 - 2] [i_0]))))) % (arr_1 [i_5 + 1]));
            }
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
            {
                var_26 -= ((((/* implicit */int) arr_5 [i_5 - 1])) != (((/* implicit */int) arr_5 [i_0])));
                arr_27 [i_0] [i_0] = ((unsigned int) (_Bool)1);
            }
            var_27 = ((arr_11 [i_5 + 3] [i_0]) && (arr_11 [i_5 + 2] [i_5]));
        }
    }
    for (short i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        var_28 = ((/* implicit */short) (((+((+(((/* implicit */int) (short)9846)))))) | (((/* implicit */int) ((short) (+(((/* implicit */int) arr_29 [i_8]))))))));
        var_29 = ((/* implicit */short) min((var_29), (((short) ((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) min((arr_29 [i_8]), (arr_29 [(short)5])))) : (((((/* implicit */_Bool) 1108831801U)) ? (((/* implicit */int) arr_29 [i_8])) : (((/* implicit */int) (_Bool)0)))))))));
        var_30 = ((((/* implicit */unsigned int) ((((((/* implicit */int) ((short) arr_28 [i_8]))) + (2147483647))) >> (((min((var_12), (var_2))) - (1487067321U)))))) % (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
        var_31 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+(((/* implicit */int) (!((_Bool)0)))))))));
        arr_32 [i_9] |= arr_30 [i_9];
    }
    for (short i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        arr_35 [(short)2] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
        arr_36 [i_10] [i_10] = ((((((/* implicit */_Bool) 2271494454U)) ? (((arr_8 [i_10] [i_10] [(_Bool)1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16128))) : (arr_25 [i_10] [i_10] [i_10] [i_10]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (short)-19746))))))) & (max((((/* implicit */unsigned int) min((arr_21 [i_10] [i_10]), (((/* implicit */short) (_Bool)0))))), (var_5))));
    }
    var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
}
