/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96642
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
    var_14 |= ((((/* implicit */int) var_5)) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(18446744073709551615ULL))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */long long int) ((unsigned long long int) 15900932683103426408ULL));
                                var_15 &= ((/* implicit */signed char) max((((((/* implicit */int) arr_9 [i_2] [i_3] [i_4] [i_4 + 1] [i_4])) + (min((var_13), (((/* implicit */int) arr_1 [i_3])))))), (min((var_13), (((/* implicit */int) var_10))))));
                                var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)32763))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) min((((/* implicit */short) (signed char)127)), ((short)-32765))))))));
                }
            } 
        } 
        var_18 -= ((/* implicit */unsigned char) 9223372036854775807LL);
    }
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) < (var_7)))))));
        var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_5])) ? (((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_5])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))))));
        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65535))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        for (unsigned int i_7 = 1; i_7 < 23; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((max((arr_22 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]), (arr_22 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]))), ((+(arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1])))));
                    arr_23 [i_6] [i_8] [i_6] [8ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)20304))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((int) 0ULL));
}
