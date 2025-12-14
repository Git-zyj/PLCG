/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73798
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
    var_19 *= ((/* implicit */signed char) var_9);
    var_20 = ((/* implicit */signed char) (unsigned char)177);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_4 [10ULL] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_6))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1])) * (((/* implicit */int) var_13)))))));
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_22 *= ((/* implicit */short) ((unsigned short) arr_9 [i_1] [i_1] [i_2]));
            arr_11 [(signed char)13] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((((/* implicit */_Bool) (short)1029)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (140737488347136ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1])))));
            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) 3014691467U))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            arr_15 [i_1] [i_3] = ((/* implicit */signed char) ((3014691467U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1] [i_3 - 1])))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_1] [i_3 - 1] [i_1])) >= (arr_6 [i_3] [i_3 + 1])));
            var_25 = ((/* implicit */short) ((((/* implicit */int) (short)22125)) + (((/* implicit */int) (signed char)-33))));
            var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_3 + 1] [i_3 - 1]))));
            arr_16 [i_1] = (-(((/* implicit */int) var_6)));
        }
        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            arr_20 [i_4] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)85)) ? (arr_8 [i_1]) : (1280275845U)))));
            arr_21 [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) (unsigned char)78);
        }
        for (signed char i_5 = 2; i_5 < 14; i_5 += 2) 
        {
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((signed char) (short)32767)))));
            arr_26 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 11426023459085892398ULL)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_12 [i_1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178)))));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_5] [i_6])))))));
                var_29 = (~((~(((/* implicit */int) var_7)))));
            }
        }
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((_Bool) 2147483647)))));
        arr_29 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)16))));
    }
}
