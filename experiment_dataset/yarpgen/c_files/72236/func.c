/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72236
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
    var_18 = ((/* implicit */unsigned char) ((int) var_17));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((-1514788812836147686LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214)))));
                            var_20 |= ((/* implicit */_Bool) ((((/* implicit */int) max((arr_2 [i_2 + 1] [10]), (((/* implicit */short) var_4))))) * (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)63)) ? (arr_9 [i_1]) : (arr_9 [i_1])))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_2 + 3] [i_2] = ((((/* implicit */int) arr_13 [i_2] [2LL] [i_2] [i_2] [i_2] [i_2 - 1])) + (((/* implicit */int) arr_13 [i_2] [i_2 + 3] [i_2 + 3] [i_2] [i_2] [i_2 - 1])));
                            var_21 += var_11;
                            var_22 = ((/* implicit */int) max((var_22), (((int) arr_2 [i_0] [i_0]))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */int) (short)2)) | (((/* implicit */int) (short)-4002))));
                        }
                        for (short i_6 = 1; i_6 < 15; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */int) ((short) (unsigned short)7151))) == (((/* implicit */int) ((((/* implicit */int) min(((short)-7), (((/* implicit */short) (signed char)-58))))) != (((/* implicit */int) var_9)))))));
                            var_24 = ((/* implicit */signed char) 1791245353);
                            arr_20 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */int) max((1776943934U), (((/* implicit */unsigned int) (signed char)-68))));
                            var_25 = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */int) ((signed char) 1943914803))), (((arr_11 [i_0] [i_1] [i_2] [i_1] [i_6]) / (((/* implicit */int) (short)12))))))) * (((long long int) (-(((/* implicit */int) arr_7 [i_2] [i_6])))))));
                        }
                        arr_21 [i_0] [i_2] = ((/* implicit */short) arr_9 [i_2]);
                        arr_22 [i_0] [i_1] [i_2 - 1] [i_0] [i_2] = ((/* implicit */signed char) arr_7 [i_2] [1]);
                    }
                } 
            } 
        } 
        arr_23 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        var_26 = ((/* implicit */short) ((((/* implicit */int) (signed char)47)) != (((/* implicit */int) arr_24 [i_7]))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) (unsigned short)61821)) == (((/* implicit */int) arr_24 [i_7])))))));
        var_28 = ((/* implicit */unsigned short) var_8);
    }
    var_29 = ((/* implicit */short) var_16);
}
