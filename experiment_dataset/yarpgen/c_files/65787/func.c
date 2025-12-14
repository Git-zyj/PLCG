/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65787
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
    var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-32748)) ? (2702613556590298962LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12))))), (((/* implicit */long long int) max(((signed char)-31), ((signed char)-58))))))) ? (min((((/* implicit */int) (unsigned short)44387)), ((~(var_3))))) : (var_5)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((arr_5 [i_1 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) min(((short)120), (((/* implicit */short) (signed char)-48))))))));
                var_13 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-6130959908655653067LL)))) ? (((/* implicit */int) ((18U) == (((/* implicit */unsigned int) (-2147483647 - 1)))))) : (((/* implicit */int) ((short) var_7))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (int i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            {
                var_15 -= ((/* implicit */unsigned long long int) var_6);
                var_16 = ((/* implicit */unsigned short) min((((/* implicit */short) ((unsigned char) arr_8 [i_2]))), (arr_10 [i_2] [i_2])));
                arr_12 [i_2] [i_3 + 1] [(short)9] &= ((/* implicit */unsigned long long int) arr_8 [(signed char)9]);
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_21 [i_5] [i_3 - 3] = ((/* implicit */long long int) arr_10 [i_5 - 1] [i_5 + 1]);
                                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 - 3] [i_4 + 1] [i_4] [i_3 - 3])) ? (((/* implicit */int) (unsigned char)102)) : (arr_14 [i_5 - 3] [i_4 + 1] [i_3] [i_3 - 2])))) ? (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) arr_14 [i_5 - 1] [i_4 + 1] [(short)9] [i_3 - 3])))) : (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) (signed char)-65)))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */int) max((var_18), ((+(((/* implicit */int) ((unsigned short) min((var_6), (((/* implicit */long long int) var_1))))))))));
            }
        } 
    } 
}
