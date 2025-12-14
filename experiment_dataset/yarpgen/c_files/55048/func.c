/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55048
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [(signed char)8]);
                arr_5 [i_1] [i_1] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_1])))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((1245902173789928467LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-19579))))), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((unsigned short) ((short) arr_4 [(signed char)16]))))));
                var_16 = ((/* implicit */short) ((var_2) ? (((((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) / ((+(var_7))))) : (((/* implicit */long long int) min((arr_1 [(unsigned char)13]), (((/* implicit */unsigned int) arr_0 [(unsigned short)16] [(unsigned short)16])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)-1)), (18446744073709551613ULL)));
                            var_18 = ((/* implicit */short) max((((/* implicit */long long int) 2785288636U)), (max((((/* implicit */long long int) min(((short)(-32767 - 1)), ((short)0)))), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6731))) : (arr_9 [8ULL] [i_2] [i_2] [i_3])))))));
                            var_19 ^= ((/* implicit */short) ((unsigned char) ((((5032127293688835058ULL) | (((/* implicit */unsigned long long int) 1889529810U)))) % (((/* implicit */unsigned long long int) 2405437486U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((unsigned int) (~(((/* implicit */int) var_2))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */long long int) 28672U)) : (9223372036854775807LL))))))));
}
