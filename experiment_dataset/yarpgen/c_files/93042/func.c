/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93042
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
    var_13 = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) ((((-1184945021) + (2147483647))) << (((((/* implicit */int) var_7)) - (45353)))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) max(((_Bool)1), (var_4))))))) + (((((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_5))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((var_4) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))) ? (var_10) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-86)))))))));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (short)-32063);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */short) (signed char)1))))), (var_1)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))) : (var_1)))) ? (((/* implicit */int) ((short) var_1))) : (var_12)))));
                                arr_14 [i_0 + 2] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    arr_18 [i_1] = ((/* implicit */signed char) (short)32062);
                    arr_19 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) var_7);
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_5] [i_1] [2LL] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (short)25938)) ? (16541487211971374654ULL) : (17039430928252930850ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2067315245325664093LL))))));
                                arr_26 [(signed char)1] [i_1] [(short)0] [i_6] [i_7] [i_1] = ((/* implicit */signed char) ((var_4) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_9)) | (((/* implicit */int) var_7))))));
                                var_15 ^= ((/* implicit */unsigned long long int) var_3);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
