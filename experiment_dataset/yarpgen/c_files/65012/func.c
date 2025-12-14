/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65012
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
    var_12 = ((/* implicit */int) var_4);
    var_13 = (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) : ((+(var_4))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((short) arr_3 [i_0] [i_0] [(unsigned short)18])), (((/* implicit */short) (unsigned char)54))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) : (var_5)));
                var_15 = ((/* implicit */unsigned short) arr_2 [i_1] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        for (unsigned int i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    arr_11 [i_4] [i_4] [i_2] [(signed char)20] = ((/* implicit */signed char) (short)(-32767 - 1));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 4; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_2] [12LL] [12LL] [i_2] = ((/* implicit */unsigned long long int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_4 - 2])))));
                                arr_18 [i_2 - 1] [i_2] [i_5] [i_6] = ((/* implicit */long long int) arr_12 [1LL] [i_3 - 1] [i_3 - 2]);
                                var_16 = ((/* implicit */unsigned int) ((var_4) % (((/* implicit */long long int) ((/* implicit */int) (short)29212)))));
                            }
                        } 
                    } 
                }
                var_17 *= ((/* implicit */signed char) (-(min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [8U] [i_3 - 1] [(signed char)22] [i_3])) ? (((/* implicit */long long int) var_6)) : (var_4))))))));
            }
        } 
    } 
}
