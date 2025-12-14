/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5988
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
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) min((var_11), (min((((/* implicit */short) ((((/* implicit */_Bool) (short)-3409)) || (((/* implicit */_Bool) (short)-1))))), ((short)-3409)))));
        var_12 |= ((/* implicit */short) (-(((/* implicit */int) (short)14336))));
        arr_3 [i_0] = arr_2 [i_0] [i_0];
        arr_4 [i_0] = (short)21800;
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_13 = ((/* implicit */short) (+((+(((/* implicit */int) ((short) (short)-23699)))))));
        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)3409))));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        arr_16 [i_1] [i_2] = ((short) (~(((/* implicit */int) (short)-15234))));
                        var_15 *= ((/* implicit */short) ((((((((/* implicit */int) var_5)) - (((/* implicit */int) var_1)))) + (((/* implicit */int) var_8)))) + ((((+(((/* implicit */int) var_2)))) + ((+(((/* implicit */int) arr_9 [(short)6] [i_2] [i_3]))))))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */short) ((((((/* implicit */int) (short)16008)) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)-21803)))))) ^ (((((/* implicit */int) var_5)) ^ (((((/* implicit */_Bool) arr_5 [(short)7] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_1] [(short)5] [i_1]))))))));
    }
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (short)-24117))))) : (((((/* implicit */int) arr_14 [i_5] [(short)2] [i_6])) >> (((((/* implicit */int) (short)-3409)) + (3438)))))))) ? (((((/* implicit */_Bool) (short)-24323)) ? (((((/* implicit */int) arr_15 [i_5] [i_5])) % (((/* implicit */int) arr_18 [(short)15] [i_6])))) : (((/* implicit */int) (short)-26432)))) : (((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_28 [(short)15] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */int) max((arr_2 [i_7] [i_6]), (arr_2 [i_7] [i_6])))) / ((-(((/* implicit */int) var_1))))));
                        }
                    } 
                } 
                arr_29 [i_5] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) (short)-7502))), (((((/* implicit */int) (short)-24323)) + (((/* implicit */int) (short)8416))))))) ? (((/* implicit */int) ((short) (+(((/* implicit */int) (short)-8416)))))) : (((/* implicit */int) var_1))));
            }
        } 
    } 
}
