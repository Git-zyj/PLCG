/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61177
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_11 &= ((((((/* implicit */int) (unsigned short)61837)) & (1518561598))) == (((((/* implicit */int) arr_3 [(short)18] [(short)18])) << (((/* implicit */int) var_6)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1518561613)) && (((/* implicit */_Bool) -1518561590))));
                        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (arr_4 [(signed char)16] [i_1] [(signed char)16]))) - (((/* implicit */unsigned int) ((((1518561601) & (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (unsigned char)237))))))))));
                        arr_14 [(short)5] [i_0] [i_2] [i_2] [(signed char)8] = ((/* implicit */long long int) ((((-162366317) - (var_5))) == (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                    }
                    var_13 = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_7 [i_0])) + (2147483647))) >> (((var_5) - (1638055996))))) * (((((/* implicit */int) (short)-12028)) % (((/* implicit */int) arr_7 [i_0]))))));
                }
            } 
        } 
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12028))) * (650412106U)));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_4]))));
        var_16 ^= ((((/* implicit */_Bool) arr_15 [(short)6])) || (((/* implicit */_Bool) arr_11 [i_4] [i_4])));
        arr_17 [i_4] = ((/* implicit */signed char) ((var_9) < (((/* implicit */unsigned int) var_1))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_17 = ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_11 [i_5] [(signed char)16])));
        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5])) != (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5]))));
        var_19 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)34)) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_5])) || (arr_18 [(_Bool)1] [i_5]))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) (unsigned short)44038)) * (((/* implicit */int) arr_8 [i_5] [(signed char)4] [18] [i_5])))))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_5] [(short)12])) && (((/* implicit */_Bool) -1518561580))));
            var_22 = ((1518561598) > (((/* implicit */int) (unsigned char)178)));
            var_23 = ((/* implicit */short) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (short)26622))));
        }
    }
}
