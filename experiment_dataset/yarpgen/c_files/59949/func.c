/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59949
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_12 = arr_3 [i_0 + 4] [i_0 + 2];
        arr_4 [i_0] = min(((short)-14676), ((short)-14676));
        var_13 ^= arr_1 [i_0];
    }
    for (short i_1 = 2; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = max(((short)14676), ((short)22025));
        var_14 = ((/* implicit */short) (-(((/* implicit */int) ((short) ((short) var_4))))));
        var_15 ^= arr_0 [i_1 + 1];
    }
    for (short i_2 = 2; i_2 < 16; i_2 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((short) (short)-15291))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)17081)) || (((/* implicit */_Bool) (short)3680))));
    }
    for (short i_3 = 2; i_3 < 16; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3 + 4])) | (((/* implicit */int) arr_0 [i_3 - 1]))))) ? (((((/* implicit */_Bool) (short)15310)) ? (((/* implicit */int) (short)4203)) : (((/* implicit */int) (short)13311)))) : ((+(((/* implicit */int) var_0))))));
        var_18 ^= arr_8 [i_3 - 1];
        var_19 ^= ((short) (short)10187);
        /* LoopSeq 4 */
        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_20 ^= ((/* implicit */short) (((+(((/* implicit */int) arr_5 [i_3 - 2] [i_3 + 4])))) / (((/* implicit */int) min((var_9), (var_1))))));
            arr_17 [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3 + 4] [i_4])) || (((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3 + 2] [i_3 + 4]))))) << (((((/* implicit */int) arr_11 [i_3])) - (32050)))));
            var_21 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_3 + 1] [i_3])) - (((((/* implicit */_Bool) (short)-14653)) ? (((/* implicit */int) (short)1918)) : (((/* implicit */int) (short)13879))))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) arr_21 [i_3] [(short)14] [i_6 + 2] [i_6] [i_6])) <= (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_6 + 2] [i_6 - 1] [i_3])) ? (((/* implicit */int) arr_20 [i_6] [i_6 + 1] [i_6 + 2] [i_6 - 1])) : (((/* implicit */int) var_11)))))))));
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_3 + 2]))));
                        arr_22 [i_3] [i_6] [i_3] [i_6] = var_6;
                        var_24 = arr_5 [i_3] [i_5];
                    }
                } 
            } 
            arr_23 [i_3 - 2] [i_3 - 2] = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_3 - 2] [i_4])) > (((/* implicit */int) arr_10 [i_4]))));
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
        {
            arr_27 [(short)17] = arr_20 [i_3] [i_3 + 1] [i_3] [i_7];
            var_25 = arr_24 [(short)11] [(short)11];
            arr_28 [i_3] [i_7] [i_7] = ((short) arr_2 [i_3 + 1]);
            var_26 = ((/* implicit */short) max((var_26), (arr_21 [(short)5] [i_3 + 4] [i_3] [i_3] [(short)6])));
            var_27 ^= arr_3 [i_3 + 4] [i_7];
        }
        for (short i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */short) ((((/* implicit */int) (short)-25705)) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_8] [i_3] [i_3])) ? (((/* implicit */int) arr_20 [i_3] [i_8] [i_8] [i_8])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_25 [i_3 - 2] [i_3 + 2])) : (((/* implicit */int) arr_16 [i_3 - 1] [i_8] [i_8]))))));
            var_29 ^= arr_29 [i_3] [i_8] [i_8];
        }
        for (short i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            var_30 = ((short) ((((/* implicit */_Bool) arr_6 [i_3 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_3 + 1]))));
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 2; i_12 < 18; i_12 += 1) 
                        {
                            arr_42 [i_3] [i_9] [i_10] [i_9] [i_12] = ((/* implicit */short) (-(((/* implicit */int) ((short) ((short) var_0))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) max((((((/* implicit */_Bool) arr_21 [i_12] [i_12 - 2] [i_11] [i_10] [i_10])) ? (((/* implicit */int) arr_21 [(short)9] [i_12 - 2] [i_12] [i_11] [i_10])) : (((/* implicit */int) arr_21 [i_12] [i_12 - 2] [(short)7] [i_3] [(short)7])))), (((/* implicit */int) arr_21 [i_12] [i_12 - 2] [i_3] [i_3] [i_3])))))));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_3] [i_3 + 1] [i_12 - 1])) ? ((-(((/* implicit */int) max(((short)-22498), (arr_20 [i_9] [i_10] [i_11] [(short)19])))))) : (((/* implicit */int) arr_37 [i_3 + 4] [i_3 - 2] [(short)16] [i_3])))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            var_33 = arr_13 [i_11];
                            arr_47 [i_9] [i_9] [i_10] [i_11] [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_31 [i_13])) ? (((/* implicit */int) arr_2 [i_10])) : (((/* implicit */int) arr_38 [i_9])))) % (((/* implicit */int) arr_30 [i_3 + 3]))));
                            var_34 = var_10;
                            var_35 = arr_7 [i_3 + 1];
                        }
                        var_36 = ((/* implicit */short) max((((/* implicit */int) ((short) arr_18 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 2]))), (((((/* implicit */_Bool) arr_25 [i_3 + 3] [i_3 + 1])) ? (((/* implicit */int) arr_25 [i_3 + 3] [i_3 - 1])) : (((/* implicit */int) var_6))))));
                    }
                } 
            } 
        }
    }
    var_37 = var_2;
    var_38 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) max((((short) (short)-14674)), (var_11)))) ? ((~(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)10162)) : (((/* implicit */int) (short)-32408)))) : (((/* implicit */int) var_4))))));
}
