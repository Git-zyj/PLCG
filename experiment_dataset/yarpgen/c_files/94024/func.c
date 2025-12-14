/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94024
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
    var_14 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        arr_2 [(unsigned char)13] = ((/* implicit */long long int) ((int) (unsigned short)65535));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_10 [i_0 - 3] [i_0 - 3] [i_0 - 4] [i_0 - 2] [(short)13] [i_0 - 4] = ((/* implicit */unsigned short) ((short) 13492395964507200389ULL));
                        arr_11 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_6);
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4954348109202351225ULL)) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_0 + 1]))))) ? (((/* implicit */int) min((arr_4 [i_0 + 1] [i_1] [i_2]), (arr_4 [i_0 - 2] [i_0] [i_2])))) : (((/* implicit */int) min((arr_4 [i_0 - 1] [i_1] [i_2]), (arr_4 [i_0 - 2] [14ULL] [0]))))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (max((((((/* implicit */_Bool) 4954348109202351221ULL)) ? (arr_8 [i_0] [(signed char)19] [i_0] [0U] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) 4294967295U))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 20; i_4 += 4) 
    {
        for (unsigned char i_5 = 4; i_5 < 20; i_5 += 1) 
        {
            {
                arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) 1U);
                var_18 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (4954348109202351228ULL))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_12);
}
