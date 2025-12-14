/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61014
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
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned short) (unsigned char)111))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)18525))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47009))) * (67108863LL))))) == (max((67108872LL), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)154)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [17ULL] [17ULL] [2U])))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_7 [i_2] = ((/* implicit */long long int) ((unsigned char) arr_0 [i_0 + 3]));
                    var_19 ^= ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-67108882LL)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_12 [i_1] [8] [8] [i_3] = ((/* implicit */signed char) ((unsigned int) arr_10 [i_0 + 2] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3]));
                            arr_13 [i_3] = ((/* implicit */signed char) arr_0 [i_1]);
                            arr_14 [i_2] [i_3] [i_2] [i_2] [i_2] |= arr_3 [i_4] [18U] [i_1];
                            var_20 -= ((/* implicit */unsigned long long int) var_7);
                        }
                        arr_15 [i_3] [i_3] = ((/* implicit */signed char) var_15);
                        arr_16 [i_0 + 3] [i_1] [i_2] [i_1] |= ((/* implicit */signed char) var_8);
                    }
                }
                for (signed char i_5 = 1; i_5 < 23; i_5 += 3) 
                {
                    var_21 = (signed char)-24;
                    var_22 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(-4299387014025424806LL)))), (((((/* implicit */_Bool) ((signed char) (unsigned char)9))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)95)), (var_4)))) : (((unsigned long long int) 24U))))));
                    var_23 -= ((/* implicit */signed char) max((max((((/* implicit */unsigned short) (signed char)-92)), (arr_17 [i_0 - 1] [i_0 - 1] [i_0]))), (((/* implicit */unsigned short) ((unsigned char) (signed char)-115)))));
                    var_24 *= ((/* implicit */short) (+(-4299387014025424806LL)));
                }
                for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) max((2147483647), (((/* implicit */int) (short)8191))));
                    arr_23 [i_1] [i_6] [i_1] [i_0 + 3] |= ((/* implicit */signed char) ((short) ((unsigned long long int) arr_5 [i_0 + 1] [i_0] [i_1] [(short)23])));
                }
            }
        } 
    } 
}
