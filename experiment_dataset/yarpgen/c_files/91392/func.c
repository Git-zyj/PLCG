/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91392
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
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) var_10)))) : (((/* implicit */int) var_5)))) - (min(((-(((/* implicit */int) var_0)))), ((~(((/* implicit */int) var_5))))))));
    var_13 = var_10;
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) max((var_4), ((short)(-32767 - 1)))))))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-23472)) & (((/* implicit */int) (short)-29311))))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) : (((((/* implicit */int) var_1)) & (((/* implicit */int) var_8))))))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~(((/* implicit */int) (short)1819))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        arr_4 [i_1] = arr_2 [i_1] [i_1];
        arr_5 [i_1] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_16 = ((/* implicit */short) (~(((/* implicit */int) ((short) (short)26537)))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23481)) ? (((/* implicit */int) (short)-8561)) : (((/* implicit */int) (short)-1836))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((short) var_0)))));
            arr_10 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_8 [i_1]))));
        }
        for (short i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_17 = ((/* implicit */short) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_6 [i_3] [i_4] [i_3 + 2]))));
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_18 ^= ((/* implicit */short) ((((((/* implicit */int) var_2)) > (((/* implicit */int) var_4)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))));
                            arr_20 [(short)3] [i_1] = (short)0;
                            var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))));
                            arr_21 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) (short)-1286)))) : (((/* implicit */int) ((short) arr_14 [i_5])))));
                        }
                    } 
                } 
                var_20 += var_4;
            }
            for (short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_7])) ? (((((((/* implicit */int) arr_16 [i_1] [i_1 + 1] [i_1] [i_1 + 3])) + (2147483647))) << (((((((/* implicit */int) var_4)) + (12802))) - (26))))) : (((/* implicit */int) arr_8 [i_3])))))));
                arr_24 [i_1] = ((/* implicit */short) (-((~(((/* implicit */int) (short)-23472))))));
                /* LoopSeq 1 */
                for (short i_8 = 2; i_8 < 12; i_8 += 4) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)-22420)))))));
                    var_23 = ((/* implicit */short) (+(((((/* implicit */int) var_0)) - (((/* implicit */int) var_11))))));
                    /* LoopSeq 3 */
                    for (short i_9 = 3; i_9 < 13; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))));
                        var_25 = ((/* implicit */short) (~(((/* implicit */int) (short)10723))));
                    }
                    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_26 = var_0;
                        var_27 = ((/* implicit */short) (!(((((/* implicit */int) var_3)) > (((/* implicit */int) arr_32 [i_1] [i_3] [i_7] [i_8 - 1] [i_10]))))));
                    }
                    for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        arr_38 [i_7] [i_7] [i_7] &= arr_23 [(short)10] [i_7] [i_7];
                        var_28 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (short)-28375)) && (((/* implicit */_Bool) arr_3 [i_1 - 1])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_11)) - (((/* implicit */int) arr_12 [i_8]))))));
                    }
                    var_29 -= ((/* implicit */short) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) arr_27 [i_8] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_33 [(short)2] [(short)2] [i_3 - 1] [i_1 - 1] [i_1]))))));
                }
                var_30 = ((/* implicit */short) max((var_30), (var_9)));
            }
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_4)))))));
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                for (short i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    {
                        arr_45 [i_3] [i_3] [i_1] [i_1] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_1]))))) ? (((/* implicit */int) (short)-398)) : (((/* implicit */int) ((((/* implicit */int) (short)4677)) >= (((/* implicit */int) (short)30894)))))));
                        var_32 = ((/* implicit */short) (((-(((/* implicit */int) arr_31 [i_1] [i_12] [i_12] [(short)12] [i_1])))) % (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_5))))));
                        arr_46 [i_1] [i_1] [(short)12] [i_13] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_1] [i_1])))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_39 [(short)12] [i_3] [(short)12])) ? (((/* implicit */int) (short)1819)) : (((/* implicit */int) var_9)))))))));
        }
        var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1 + 3] [i_1]))));
        var_35 += ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_1 + 2] [i_1 + 2] [i_1] [i_1])))))));
    }
}
