/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96476
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) ((short) arr_1 [i_0]))))))));
        var_14 = ((/* implicit */short) min(((-((~(((/* implicit */int) arr_1 [(short)7])))))), (((/* implicit */int) min((((short) arr_1 [i_0])), (arr_1 [i_0]))))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_0)))))) ^ (((((((/* implicit */int) (short)-23636)) + (2147483647))) << (((((((/* implicit */int) (short)-17316)) + (17334))) - (18))))))))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 12; i_1 += 3) 
    {
        var_16 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1 - 2]))));
        var_17 += ((/* implicit */short) ((((/* implicit */int) (short)19660)) ^ (((/* implicit */int) arr_2 [i_1 - 4]))));
        /* LoopSeq 1 */
        for (short i_2 = 4; i_2 < 14; i_2 += 3) 
        {
            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)30813))) ? (((/* implicit */int) arr_8 [i_1] [i_2 - 4])) : (((/* implicit */int) var_10))));
                var_20 = arr_10 [i_1 + 3] [i_2 - 2] [i_3 - 2];
                arr_11 [i_3] |= arr_6 [i_1];
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_21 = arr_7 [i_1];
                    var_22 += arr_10 [i_1 + 1] [i_2] [i_3 - 2];
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) arr_4 [i_2 - 4])) * (((/* implicit */int) arr_4 [i_1 - 3])))))));
                }
                arr_15 [i_1 + 3] [i_2 - 1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_1))));
            }
            arr_16 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_2 - 1])) - (((/* implicit */int) arr_12 [i_1 + 2] [i_1 - 4] [i_1 - 1] [i_2 - 4]))));
        }
        var_24 += ((short) (short)12262);
        /* LoopNest 3 */
        for (short i_5 = 2; i_5 < 13; i_5 += 1) 
        {
            for (short i_6 = 3; i_6 < 12; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    {
                        arr_25 [i_5] [(short)0] [i_1] [i_1] [i_5] [(short)12] = ((short) (short)-26743);
                        arr_26 [i_1] [i_5] [(short)7] [i_1] = var_2;
                    }
                } 
            } 
        } 
    }
    var_25 = var_12;
    var_26 = var_6;
    var_27 = var_8;
}
