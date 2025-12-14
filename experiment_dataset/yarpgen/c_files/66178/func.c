/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66178
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 17; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */long long int) (short)8);
                            arr_13 [i_0] [i_1] [9ULL] [(unsigned short)6] [i_0] [i_0] [8U] = ((/* implicit */short) (-(max((((/* implicit */int) (short)4095)), (768008277)))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */long long int) -768008253);
        }
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_17 = ((/* implicit */_Bool) 8677041810169721164ULL);
            var_18 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0] [i_0]);
            var_19 *= ((((/* implicit */_Bool) 4064617041U)) ? (4064617030U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1])) ? (arr_14 [i_0] [i_0 - 1]) : (arr_14 [i_0] [i_0 - 1])))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 1) 
            {
                for (int i_7 = 1; i_7 < 20; i_7 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)2944)), (arr_1 [12ULL])))) ? (((/* implicit */unsigned int) (+(-1)))) : (4294967284U))), ((-(arr_1 [(short)12])))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 25)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) arr_6 [i_0] [i_7] [i_6] [i_6]))))) ? (-6972394816998062179LL) : (((/* implicit */long long int) -728592688))))) ? (((/* implicit */int) (short)-21015)) : (arr_14 [i_7] [i_5])));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -768008299)) ? (arr_3 [i_0 - 1] [i_0 - 1] [i_0]) : (((/* implicit */long long int) 12))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2647265752U)) ? (((/* implicit */int) (short)17174)) : (((/* implicit */int) (unsigned char)217))))) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_0] [i_0 - 2] [i_0] [i_0] [19] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_0] [(signed char)17] [i_0]))) : (arr_4 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)171))))) : (((/* implicit */int) (short)-21002)))))));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) -768008288)) : (var_5)))) ? (var_9) : ((~(728592677))))) : ((-(((((/* implicit */_Bool) 768008279)) ? (-768008284) : (((/* implicit */int) var_3))))))));
    var_24 = ((/* implicit */int) 14851760431507486045ULL);
}
