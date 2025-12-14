/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92679
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 = var_9;
                arr_5 [i_1] [i_1] = ((/* implicit */short) (-(max((((/* implicit */long long int) (signed char)-2)), (7339206002917655568LL)))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) var_10))), (max((((/* implicit */int) ((short) 8511511735527266424LL))), ((+(((/* implicit */int) var_8)))))))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) (unsigned char)61)))) : (((/* implicit */int) var_3))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    var_20 *= ((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24600))) : (9223372036854775807LL)))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) ((unsigned short) 9223372036854775807LL))), (9223372036854775800LL))))))));
                                arr_18 [i_2] [i_2] [i_3] [i_4] [i_2] [i_2] [i_6] |= ((/* implicit */signed char) -9223372036854775807LL);
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_2] [(unsigned char)6] [i_2] = ((/* implicit */unsigned short) ((unsigned char) (+((-9223372036854775807LL - 1LL)))));
                }
            } 
        } 
    } 
    var_22 = 1315659982;
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        for (short i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 17; i_11 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (unsigned char)0))));
                                arr_36 [i_7] [i_8 + 3] [i_9] [i_11] [i_7] = ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) max(((short)15220), ((short)-15221)))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)176)))))));
                arr_37 [i_7] [i_7] [(unsigned short)2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-15223))))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (short)15220))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_10);
}
