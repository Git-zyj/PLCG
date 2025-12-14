/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99602
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
    var_13 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) (signed char)104);
        var_15 = ((/* implicit */int) (((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1]);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 4; i_4 < 17; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) 3846371577U);
                                arr_16 [i_5] [i_4] [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)18816);
                            }
                        } 
                    } 
                    arr_17 [i_3] [i_3] [i_2] [(unsigned short)12] = ((/* implicit */int) arr_4 [i_3]);
                    var_17 = ((/* implicit */signed char) 32767LL);
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18816)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-32794LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28066)))));
    }
}
