/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82968
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_5))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_13), (((/* implicit */short) arr_0 [i_2 + 1] [i_2 - 2]))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_0 [i_2 - 2] [i_2 - 2])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) % (((/* implicit */int) ((((/* implicit */_Bool) 16460278073606911986ULL)) || (((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_4])))))));
                                var_20 = var_11;
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_2 - 2] [(unsigned char)7] = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) 390812845U))))) | (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)4] [i_1]))) : (1986466000102639629ULL))), (arr_3 [i_2 - 2] [i_2 + 1])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((unsigned long long int) (unsigned short)47041)) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) < (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
}
