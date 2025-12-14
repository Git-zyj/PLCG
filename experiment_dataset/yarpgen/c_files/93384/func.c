/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93384
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) arr_1 [(unsigned short)16])) : (((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) arr_1 [(unsigned short)6]))))))));
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) arr_10 [(short)15] [(short)15] [(short)15] [(short)15]);
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_4] [i_2])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4])))) : (((/* implicit */int) arr_7 [i_2] [i_3] [(short)12] [i_2]))));
                            var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)17580)) ? (((/* implicit */int) (unsigned short)12503)) : (((/* implicit */int) (unsigned short)40830)))) : ((-(((/* implicit */int) (unsigned short)24716))))));
                        }
                    } 
                } 
            } 
            var_21 = (+(((/* implicit */int) arr_8 [(short)12] [i_0] [i_0])));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [(signed char)13] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_5])) : (((/* implicit */int) arr_16 [i_5] [i_5]))));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                arr_22 [i_0] [i_5] [i_0] = ((/* implicit */_Bool) (((!(arr_4 [i_5] [(short)15]))) ? (((arr_14 [i_0] [i_0] [i_0] [i_5] [i_5] [i_5]) ? (arr_9 [i_6]) : (((/* implicit */int) arr_20 [i_0] [(short)17] [i_0] [i_0])))) : (((arr_21 [8] [i_0]) ? (arr_15 [i_0]) : (((/* implicit */int) arr_5 [i_5] [i_0]))))));
                arr_23 [(_Bool)1] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6])) ? (arr_9 [i_5]) : (((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */int) arr_19 [(short)6] [i_5])) : (((/* implicit */int) arr_16 [i_0] [i_0])));
                arr_24 [i_0] [4] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_19 [i_5] [i_0]))))));
            }
            arr_25 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_19 [i_0] [(signed char)15]))))));
            arr_26 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_5] [i_0])) ? (((((/* implicit */_Bool) arr_13 [i_0] [(short)2] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_5] [i_0] [i_5] [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) arr_8 [i_5] [i_0] [i_0]))))));
        }
        arr_27 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? ((~(((/* implicit */int) arr_11 [i_0] [(short)15] [i_0] [i_0])))) : ((-(((/* implicit */int) (short)-2245))))));
    }
    var_22 ^= var_16;
    var_23 += ((/* implicit */_Bool) var_13);
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-((-(((/* implicit */int) var_3)))))))));
    var_25 = ((/* implicit */int) var_3);
}
