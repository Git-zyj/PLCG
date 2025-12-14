/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93006
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
    var_10 += ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */long long int) min((min(((~(1205601695158357885ULL))), (min((var_2), (17241142378551193731ULL))))), (((/* implicit */unsigned long long int) -1973676971))));
                        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) arr_11 [(signed char)8] [4LL] [i_2])), (var_1))) : (var_7)))))));
                        arr_13 [i_0] [i_1] [i_3] = min(((-(arr_8 [3ULL] [i_1] [(unsigned short)9]))), (((/* implicit */unsigned long long int) (+(1973676970)))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_1] = ((/* implicit */int) max((var_6), (((((/* implicit */_Bool) arr_8 [i_4] [i_2] [(_Bool)1])) ? (arr_8 [i_0] [i_0] [1LL]) : (((/* implicit */unsigned long long int) arr_7 [8LL]))))));
                        var_13 ^= (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((863463682), (-863463682)))), ((-(arr_0 [i_1] [i_4])))))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)49651))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (var_9)))) : (((/* implicit */int) ((arr_0 [5LL] [5LL]) < (var_4))))))) ? ((+(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) var_2)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_15 += ((/* implicit */unsigned int) max(((-(max((((/* implicit */long long int) (short)-4096)), (-1LL))))), (((/* implicit */long long int) (unsigned short)15884))));
                            var_16 ^= ((/* implicit */unsigned short) arr_12 [2LL] [i_0] [i_0] [2LL]);
                            var_17 |= ((/* implicit */unsigned int) var_9);
                            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-31864)) || (((/* implicit */_Bool) var_7))))))));
                            arr_20 [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 17241142378551193730ULL)) ? (-1LL) : (((/* implicit */long long int) 863463682))));
                        }
                    }
                    var_19 *= ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1205601695158357885ULL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [15LL] [15LL] [(short)6])))))))) && (((/* implicit */_Bool) arr_10 [i_2] [8LL] [8LL] [8LL]))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 16; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [15LL] [i_6 + 1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)15885)) < (((/* implicit */int) (unsigned char)255)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-1LL) : (arr_12 [i_0] [i_0] [i_2] [i_1])))) : (((unsigned long long int) arr_21 [(unsigned short)11]))))));
                                var_21 = ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49651))) : (1205601695158357885ULL));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((short) ((((var_6) < (var_2))) ? (var_2) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))))))));
    var_24 = ((/* implicit */unsigned long long int) var_8);
}
