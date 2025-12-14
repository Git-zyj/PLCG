/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84778
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_18 -= ((/* implicit */int) (unsigned short)37366);
        var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : ((+(((/* implicit */int) (signed char)-7))))));
        var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -572811592)) > (((9223372036854775808ULL) / (16044224135922121014ULL)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_0 - 2] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0 - 2])) : (((/* implicit */int) arr_8 [i_0 + 1] [(_Bool)1]))));
                    var_21 = ((/* implicit */_Bool) 725288598419053029ULL);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */short) var_2);
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (int i_4 = 4; i_4 < 13; i_4 += 1) 
        {
            for (unsigned int i_5 = 4; i_5 < 15; i_5 += 3) 
            {
                {
                    arr_16 [i_3] [i_5] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41666))) + (arr_6 [i_4 + 3]))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_3])), (arr_3 [i_5] [(unsigned char)3])))), (((((/* implicit */_Bool) (unsigned short)48938)) ? (arr_11 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7716)))))))));
                    arr_17 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)127)) ? (9172205246848115943ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) arr_4 [i_4 - 3] [i_5 - 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4 - 4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_2 [i_5]))))) : ((~(arr_3 [i_5 - 4] [i_4 - 4])))));
                    var_23 = ((/* implicit */unsigned short) arr_7 [i_3] [(short)19]);
                }
            } 
        } 
    } 
}
