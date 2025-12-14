/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58843
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((max((9223372036854775807LL), (((/* implicit */long long int) var_2)))) ^ ((-(-9223372036854775807LL))))) - (((/* implicit */long long int) (-(((/* implicit */int) (short)-1997)))))));
                var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)149)) >> (((arr_0 [i_0]) - (16874323546237462401ULL)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)204))))), (min((arr_0 [i_2]), (var_10))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (arr_5 [i_2]))))));
                    var_15 = ((((/* implicit */_Bool) (short)1996)) ? (9223372036854775780LL) : ((+(((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-9223372036854775780LL))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_2] [i_3 + 1] [i_4] [i_4])), (var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775792LL))))) : (((((/* implicit */_Bool) -1433750495)) ? (-1433750488) : (((/* implicit */int) arr_10 [i_2] [i_3 + 1] [(unsigned short)9] [i_4]))))));
                    arr_12 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */short) (unsigned short)0);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (unsigned short)17598);
}
