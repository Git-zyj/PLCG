/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82570
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_4))));
        var_21 = ((/* implicit */long long int) 18ULL);
        var_22 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                    {
                        var_23 -= ((((/* implicit */unsigned int) max((arr_9 [i_0] [i_2 - 1] [i_2 - 1] [i_3 + 1] [i_3 + 1]), (((/* implicit */int) var_0))))) - (arr_6 [i_0] [(signed char)0]));
                        arr_11 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */short) var_17);
                        var_24 = (~(((/* implicit */int) (short)28439)));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                    {
                        var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-100)), (arr_5 [i_0] [i_0] [21LL] [21LL])))) ? (((/* implicit */int) arr_10 [i_4 + 1] [i_2] [i_2 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))) ? (max((2913292868U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_15 [(short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)233))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)25)) && ((_Bool)1)))) : (((((/* implicit */_Bool) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1282)))))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_1))))))));
                    }
                    var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 21; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    var_27 ^= ((/* implicit */int) 4294967274U);
                    var_28 ^= ((/* implicit */int) (((((!((_Bool)1))) ? (((/* implicit */unsigned int) arr_9 [i_0] [i_5] [i_5 - 1] [20LL] [i_5 - 1])) : (max((3236963260U), (((/* implicit */unsigned int) var_1)))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_5 + 2] [i_5 + 2])) ? (((/* implicit */int) arr_4 [i_5 + 1] [i_5 - 2])) : (((/* implicit */int) arr_4 [i_5 + 1] [i_5 - 2])))))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_4 [i_5 + 1] [i_5 - 1])) & (((/* implicit */int) arr_13 [i_5 + 1] [i_5 - 1] [i_5 - 1])))), (((/* implicit */int) (_Bool)1)))))));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -787444087)) ? (6039312808273351475LL) : (((/* implicit */long long int) 1883418190))));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 1; i_7 < 19; i_7 += 3) 
    {
        var_31 = ((/* implicit */long long int) arr_21 [i_7]);
        var_32 = ((((/* implicit */_Bool) -6039312808273351481LL)) ? (((/* implicit */long long int) arr_1 [i_7])) : (((((/* implicit */_Bool) (short)-3454)) ? ((~(-5448754023656950213LL))) : (((/* implicit */long long int) arr_14 [i_7] [(_Bool)1] [i_7 + 1])))));
    }
    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) var_13))));
}
