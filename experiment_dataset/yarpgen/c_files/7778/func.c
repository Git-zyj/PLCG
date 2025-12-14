/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7778
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)42380)))) * (max((arr_11 [i_1 - 3] [i_1] [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 - 3]), (((/* implicit */unsigned int) (unsigned short)42380)))));
                                var_14 ^= ((/* implicit */signed char) min((min(((unsigned short)6409), ((unsigned short)42380))), (((/* implicit */unsigned short) (_Bool)0))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] &= ((/* implicit */unsigned short) arr_4 [i_1]);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_4 [i_1 - 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)-112))))))) : (max((((((/* implicit */_Bool) 66668964U)) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))))), (((/* implicit */unsigned long long int) arr_8 [i_0] [(unsigned short)8] [i_0 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                {
                    arr_25 [i_6] [(unsigned short)9] [i_7] = ((/* implicit */signed char) arr_19 [i_6]);
                    var_15 ^= ((/* implicit */short) var_4);
                    var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_7] [i_5] [i_7])) ? ((+(((/* implicit */int) (signed char)-16)))) : (((/* implicit */int) max((var_5), (arr_21 [i_7] [i_7] [i_7]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 2; i_8 < 13; i_8 += 2) 
    {
        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            {
                arr_32 [i_8] = ((/* implicit */signed char) max((((/* implicit */int) min((max((arr_21 [i_8] [(signed char)4] [i_8]), (((/* implicit */unsigned short) var_0)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-40)))))))), ((~(((/* implicit */int) var_2))))));
                var_17 = var_5;
                var_18 |= ((/* implicit */unsigned short) ((signed char) (signed char)112));
            }
        } 
    } 
    var_19 = min((((/* implicit */unsigned int) ((int) 66668951U))), (((unsigned int) var_4)));
}
