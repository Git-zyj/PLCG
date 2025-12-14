/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6434
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
    var_19 = ((/* implicit */unsigned int) var_3);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)28279)) || (((/* implicit */_Bool) (signed char)83))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((((unsigned int) var_12)) << ((((+(((/* implicit */int) arr_2 [i_0 - 1])))) + (156))));
        var_22 = ((/* implicit */unsigned short) var_3);
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_16)) ? (1645380697U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))))) : ((+(897307823U)))))) | (min((13798902383562467474ULL), (((/* implicit */unsigned long long int) (signed char)3))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) arr_6 [i_2 + 3] [i_2 + 3]))) | (min((arr_6 [i_2 - 1] [i_2 - 1]), (arr_6 [i_2 + 2] [16U])))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_2 - 3] [i_2 - 1])), (var_14)))) ? (((((/* implicit */_Bool) arr_7 [i_2 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 3] [i_2 + 1]))) : (var_7))) : (((/* implicit */unsigned int) ((181700103) << (((913657271U) - (913657270U))))))));
        }
        for (unsigned int i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            arr_12 [i_1] [i_3 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [1U])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_10 [i_3 - 1] [i_3 + 2])))));
            /* LoopSeq 1 */
            for (long long int i_4 = 3; i_4 < 16; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            arr_21 [i_1] [i_3 + 2] [(unsigned short)7] [i_5] = ((/* implicit */unsigned int) ((270215977642229760LL) >= (min((8906497776541689120LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 13798902383562467483ULL)) && (((/* implicit */_Bool) arr_10 [(unsigned short)11] [(unsigned short)11])))))))));
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))))), ((((_Bool)1) ? (181700103) : (((/* implicit */int) (signed char)16))))));
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (4647841690147084141ULL)))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_3 [i_1]) : (-10LL)))))) <= ((+(((((/* implicit */_Bool) arr_2 [(short)7])) ? (118577507935270657ULL) : (((/* implicit */unsigned long long int) 1984471698U))))))));
                        }
                    } 
                } 
                arr_22 [i_1] [16LL] [i_1] = ((/* implicit */signed char) arr_10 [(short)9] [(short)15]);
            }
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) 0))));
        }
        var_28 ^= ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
        /* LoopNest 2 */
        for (unsigned int i_7 = 4; i_7 < 16; i_7 += 4) 
        {
            for (signed char i_8 = 3; i_8 < 17; i_8 += 4) 
            {
                {
                    arr_29 [16] [i_7 - 3] = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_5 [i_7 - 4] [i_7 - 4])))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)54733)) : ((-(-987448280)))))));
                    arr_30 [i_7] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_1)) ? ((~(-181700104))) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) var_18))));
                    var_29 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) arr_1 [i_8])))) : (((((/* implicit */int) arr_28 [i_1] [i_7] [4U] [4U])) << (((var_1) - (2161980647U))))))));
                }
            } 
        } 
    }
}
