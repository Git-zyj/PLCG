/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78767
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
    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = max((((((/* implicit */long long int) ((/* implicit */int) arr_1 [15LL] [i_0]))) ^ (-1LL))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)73)))) ^ (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [(unsigned char)8]))))))));
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] = (-(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3])) ? (-5867539366275835392LL) : (min((((/* implicit */long long int) var_12)), (var_1))))));
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 1] [i_1 + 1])))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)225)) > (((/* implicit */int) arr_10 [(unsigned char)9] [i_3] [i_2 + 1] [i_1 - 1]))))))))));
                        var_15 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_8 [4LL] [i_1 - 1] [i_3] [i_3])) : (((/* implicit */int) var_7))))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_0] [i_0])) + (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [(unsigned char)7] [i_1]))))));
            var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) : (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_5))))))));
            var_18 ^= (((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))) | (arr_4 [(unsigned char)10]))))) + ((~(arr_9 [i_0] [i_0] [i_0] [i_1]))));
            arr_13 [i_0] [(unsigned char)14] [i_0] = (+(((((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)13])) ? (5973486506350591200LL) : (8492079924880645635LL))) / (5867539366275835395LL))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0]))) : (-5973486506350591198LL)))) ? (((-1LL) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)158)) | (((/* implicit */int) var_0)))))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_4]))))) / (((arr_4 [i_4]) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 2; i_5 < 12; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (unsigned char i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        {
                            arr_25 [i_6] &= (+(((((/* implicit */_Bool) (unsigned char)255)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                            arr_26 [i_0] = arr_24 [i_5 + 3] [i_5 - 2] [i_5 + 4] [i_5] [i_5];
                            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-2011688569884104064LL))))));
                        }
                    } 
                } 
            } 
            var_22 = ((long long int) arr_19 [i_0]);
        }
    }
    var_23 -= ((/* implicit */long long int) var_12);
    var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (unsigned char)227))))))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) -7745101069681798304LL))) ? (((((/* implicit */_Bool) ((5973486506350591200LL) >> (((((/* implicit */int) (unsigned char)150)) - (119)))))) ? (((((/* implicit */int) (unsigned char)99)) << (((((/* implicit */int) (unsigned char)99)) - (98))))) : (((/* implicit */int) ((unsigned char) var_8))))) : (((/* implicit */int) var_7))));
}
