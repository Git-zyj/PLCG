/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64376
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((int) arr_3 [4LL])) : ((-(max((-816644203), (((/* implicit */int) arr_2 [i_1])))))))))));
                var_19 += ((/* implicit */long long int) (((-(((((/* implicit */int) var_1)) * (((/* implicit */int) arr_2 [i_1])))))) | ((+((+(((/* implicit */int) arr_3 [10]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - ((-(((/* implicit */int) ((unsigned short) var_3)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) >= (-22LL)));
    /* LoopSeq 4 */
    for (signed char i_2 = 2; i_2 < 7; i_2 += 2) 
    {
        arr_7 [i_2 - 2] [i_2] = (+(((((((/* implicit */_Bool) var_8)) ? (-1) : (((/* implicit */int) var_15)))) + (((/* implicit */int) var_15)))));
        var_22 ^= ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)242))));
        arr_8 [i_2 + 1] = ((/* implicit */long long int) arr_2 [i_2]);
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */short) arr_11 [i_3]);
        arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((int) (~(arr_11 [i_3]))))));
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) arr_11 [(signed char)6])) | (arr_10 [(unsigned short)18] [i_3])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3]))))) : ((+(((/* implicit */int) var_9))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 24; i_4 += 2) 
    {
        arr_19 [i_4 - 2] [(unsigned short)6] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */int) var_1)) : (816644202))) + (2147483647))) << (((((((/* implicit */int) arr_17 [i_4])) + (64))) - (17)))));
        arr_20 [i_4] [i_4 - 1] = ((/* implicit */short) (signed char)-62);
        var_23 ^= ((/* implicit */short) (-(((unsigned long long int) 816644202))));
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) -816644202)) ? (((/* implicit */unsigned long long int) -816644206)) : (1644834381479007338ULL)));
        var_25 = ((/* implicit */long long int) arr_17 [i_5]);
    }
}
