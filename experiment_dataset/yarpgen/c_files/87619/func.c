/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87619
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
    var_16 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        var_17 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_18 ^= ((/* implicit */unsigned long long int) var_11);
                            arr_12 [i_0] [(unsigned short)16] [(unsigned short)16] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_4]))));
                        }
                        for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [(unsigned short)12] [(_Bool)1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_0] [i_1]))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_5]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19677))) : (17289234140423278281ULL)))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))));
                    }
                    for (short i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (short)-5874))));
                        arr_21 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) max(((short)-2549), (var_15)))))))));
                        arr_22 [i_0] [(_Bool)1] [i_1] [(_Bool)1] [i_6] = ((/* implicit */_Bool) (short)2548);
                    }
                    var_22 -= ((/* implicit */unsigned long long int) arr_14 [(short)14] [i_1] [(short)14] [(short)14] [i_1] [(signed char)2]);
                }
            } 
        } 
        arr_23 [(short)16] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */unsigned short) ((var_5) >> (((((arr_24 [i_7]) ? (((/* implicit */int) arr_7 [i_7] [i_7] [(short)2] [i_7] [i_7])) : (((/* implicit */int) arr_16 [i_7] [i_7] [(_Bool)1] [(_Bool)1] [i_7])))) - (21663)))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (short i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                {
                    arr_33 [i_7] [i_7] [i_9 + 1] = ((/* implicit */short) 3336092012157341929ULL);
                    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_9] [i_9 - 1] [i_9 + 2] [i_9 + 3] [i_9 + 2]))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_1))));
}
