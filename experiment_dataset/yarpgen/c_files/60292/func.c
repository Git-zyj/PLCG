/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60292
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)248)) ? (((((/* implicit */_Bool) min((arr_6 [i_0] [i_3] [i_3] [i_4]), (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_2] [i_3]))) >= (arr_6 [i_0] [i_1] [i_1] [i_3])))) : (((((/* implicit */int) (unsigned char)6)) - (((/* implicit */int) (unsigned char)1)))))) : (((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) ((-8813195167796171948LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))) : (((/* implicit */int) ((signed char) (unsigned char)1))))))))));
                                var_19 = ((/* implicit */unsigned int) (((~(1151122228))) | (((/* implicit */int) min(((unsigned char)248), ((unsigned char)162))))));
                            }
                        } 
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned long long int) 4939204969993119863LL);
                arr_12 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */long long int) ((signed char) ((var_14) ^ (((/* implicit */int) ((short) arr_11 [(signed char)14] [(signed char)14] [i_0] [i_0] [i_1]))))));
                var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((arr_8 [i_0] [i_0 + 2] [i_1]) & (((/* implicit */unsigned long long int) 2608933577U)))) <= (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [16] [i_0])) ? (arr_8 [i_0 + 2] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 1] [i_0]))))))), (var_5)));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))));
}
