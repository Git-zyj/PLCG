/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84938
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
    var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_10)), (var_5)))), (min((var_13), (((/* implicit */long long int) var_10))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_0 + 1]))))) || (var_14))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_14)))))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193)))));
                            var_18 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_4 [i_3 - 1] [i_1])))));
                            arr_12 [i_1] [i_3 + 1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) (unsigned short)65535);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (long long int i_6 = 2; i_6 < 15; i_6 += 4) 
                {
                    for (long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((min((2878914960U), (((/* implicit */unsigned int) 18)))), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_5] [i_6] [i_5] [i_6] [i_6]))));
                            arr_21 [i_6] [i_6 + 1] [(short)0] [i_6] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_6 - 1] [i_7 + 1] [i_6 - 1] [i_7 - 1]))));
                            arr_22 [i_1] [i_1 - 1] [i_5] [13ULL] = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_1 + 1] [i_0] [i_6] [i_7 - 1] [i_7 + 1]);
                            arr_23 [(unsigned char)2] [i_7 + 1] [i_5] [i_6] [i_1] [i_5] [7] = ((/* implicit */int) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_7])), (-1675158730)))) : (arr_7 [i_5] [i_1 + 2] [i_5] [i_5]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned int) ((((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned char)1] [i_0] [i_1 - 3] [i_1 + 2] [i_1 - 3])), (1675158731)))) % (max((4289554541136464549LL), (((/* implicit */long long int) var_4))))))))));
        }
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (0U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : ((-(2858713058U)))));
        var_22 = max((((((/* implicit */int) ((((/* implicit */_Bool) 4289554541136464549LL)) || (((/* implicit */_Bool) (unsigned char)154))))) + (((/* implicit */int) ((signed char) var_1))))), (((/* implicit */int) var_4)));
    }
}
