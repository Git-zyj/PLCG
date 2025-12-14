/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81077
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
    var_17 = ((/* implicit */int) ((signed char) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) var_13))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((var_10) ? (((/* implicit */int) var_10)) : (2147483647))))))));
                        var_19 *= ((/* implicit */short) arr_9 [i_0] [i_0] [(unsigned char)4]);
                        arr_10 [i_1] [i_1] = ((((/* implicit */_Bool) ((arr_5 [i_1]) ? (var_0) : (((/* implicit */int) arr_6 [(short)12] [i_2] [i_3]))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) (short)-1)))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_18 [i_0] [15] [(_Bool)0] [i_4] [i_6] = ((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) arr_6 [i_0] [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_5]))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14)) ? (((/* implicit */int) arr_6 [i_0] [i_5] [i_5])) : (var_0)))) ? (((/* implicit */int) arr_9 [i_7] [i_7] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) 1511272951)))))));
                            arr_23 [i_5] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */int) arr_2 [i_6])) >= (((var_8) ? (arr_16 [i_4] [i_6] [i_4] [i_4]) : (((/* implicit */int) var_11))))));
                            arr_24 [i_0] [i_4] [i_4] [i_0] [i_4] [(_Bool)1] [i_7] = 1150587344;
                            var_23 = ((/* implicit */short) var_8);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) -889136374);
                            var_25 = ((/* implicit */int) arr_19 [i_8] [i_4] [i_5] [i_6] [(short)17] [i_4]);
                        }
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_26 += ((/* implicit */signed char) (_Bool)0);
                            var_27 *= var_2;
                        }
                        for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)15] [i_4] = ((/* implicit */signed char) (short)24834);
                            arr_32 [i_0] [i_4] [(short)19] [i_4] [i_10] [i_10] = (((+(arr_30 [i_0] [i_4] [i_5] [4] [i_10]))) > (((var_8) ? (((/* implicit */int) (short)3721)) : (arr_16 [i_4] [i_4] [(short)13] [i_10]))));
                            arr_33 [i_10] [i_4] [i_4] [(short)0] = arr_15 [i_0];
                            arr_34 [i_4] [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) arr_7 [i_4]);
                        }
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            var_28 = ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_7)) - (((/* implicit */int) var_1)))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
        } 
        var_30 += (-(((/* implicit */int) var_1)));
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 20; i_12 += 4) 
    {
        arr_39 [i_12] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (1150587344) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (short)24996)) ? (889136381) : (((/* implicit */int) (signed char)-82)))) : (((/* implicit */int) ((var_6) >= (arr_3 [i_12] [i_12 + 1] [i_12 - 1]))))));
        var_31 &= ((/* implicit */unsigned char) ((((_Bool) var_11)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_12] [i_12] [i_12] [i_12 + 1] [i_12])))) : (((/* implicit */int) arr_22 [i_12 - 2] [i_12] [i_12] [i_12 - 2] [(short)13] [20] [i_12]))));
    }
    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
    {
        var_32 ^= ((/* implicit */short) arr_9 [24] [24] [i_13]);
        /* LoopSeq 1 */
        for (short i_14 = 2; i_14 < 13; i_14 += 2) 
        {
            var_33 = ((/* implicit */int) arr_22 [i_13] [(short)22] [i_13] [i_13] [(signed char)16] [i_14 - 1] [(signed char)3]);
            /* LoopNest 2 */
            for (unsigned char i_15 = 2; i_15 < 16; i_15 += 1) 
            {
                for (int i_16 = 3; i_16 < 16; i_16 += 1) 
                {
                    {
                        arr_52 [(_Bool)1] [i_14] [i_15] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_2) ? (-1) : ((-2147483647 - 1)))) / (((/* implicit */int) min((var_5), (var_5)))))))));
                        var_34 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_14 + 4] [i_13] [i_15 - 1])), (arr_25 [i_16 + 1] [(signed char)23] [i_14 + 3])))))), ((!(((/* implicit */_Bool) var_9))))));
                        var_35 = ((/* implicit */signed char) -66957736);
                    }
                } 
            } 
        }
    }
    var_36 = ((/* implicit */unsigned char) (-((~(max((1780866072), (var_3)))))));
}
