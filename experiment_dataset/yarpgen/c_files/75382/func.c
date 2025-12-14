/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75382
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)24354)) < (((/* implicit */int) (short)-1220))));
        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (short)16383))));
    }
    var_20 = (short)8177;
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) (short)21105)) : (((/* implicit */int) (signed char)43))));
                    var_22 -= ((/* implicit */short) ((((/* implicit */int) (short)-878)) < (((/* implicit */int) (signed char)93))));
                    var_23 ^= min((((/* implicit */short) (signed char)60)), ((short)3310));
                    /* LoopSeq 4 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                    {
                        arr_15 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */signed char) (short)32767);
                        var_24 = ((/* implicit */short) (-(((/* implicit */int) min((arr_6 [i_1]), (var_4))))));
                        var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (short)11578)))) | (((((/* implicit */_Bool) (short)-8177)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (signed char)-97))))));
                    }
                    for (short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        var_26 = (short)8;
                        arr_19 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)-7485)) ? (((/* implicit */int) (short)-14090)) : (((((/* implicit */_Bool) (short)1220)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_8 [i_3] [i_1]))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (short)23930))));
                        arr_20 [i_1] [i_1] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)7)) + (((/* implicit */int) (short)7501))));
                        var_28 -= ((/* implicit */short) (~((~(((/* implicit */int) (short)32736))))));
                    }
                    for (short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                    {
                        var_29 = (short)20737;
                        arr_24 [i_6] [(short)18] [(short)18] [i_3] |= var_4;
                        arr_25 [i_1] [i_6] = ((/* implicit */short) arr_23 [(short)19] [i_3] [i_6] [i_6] [i_1] [(short)13]);
                    }
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_30 |= ((/* implicit */short) ((((/* implicit */int) (short)-8165)) >= (((/* implicit */int) (short)4345))));
                        var_31 = ((/* implicit */short) ((((/* implicit */int) (short)-30389)) + (((/* implicit */int) (short)19763))));
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */short) (((-(((/* implicit */int) (short)16256)))) & (((/* implicit */int) var_16))));
}
