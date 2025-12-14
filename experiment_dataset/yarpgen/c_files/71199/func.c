/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71199
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
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) 6815203391853781531LL);
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned short) arr_5 [i_0])), (var_5)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) arr_10 [i_3 + 1] [i_2]);
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)108)) ? (-1225743247) : (297371971))))));
                var_17 = ((/* implicit */short) ((unsigned int) (((+(((/* implicit */int) arr_8 [i_3] [i_2])))) >= (((/* implicit */int) ((0ULL) <= (18446744073709551615ULL)))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            arr_20 [i_2] [i_4] = (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) + (2138433843614574969LL))));
                            var_18 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_11 [i_2])), ((+(var_0))))) < (((/* implicit */unsigned long long int) max((arr_16 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (0ULL)));
                            arr_21 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)161)))), (((/* implicit */int) ((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_5])) <= (arr_10 [i_2] [i_2]))))))), (((min((((/* implicit */unsigned long long int) arr_13 [(unsigned short)20] [(unsigned short)20] [i_4])), (arr_9 [i_4] [i_5]))) / (((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                            arr_22 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 3980547410383879867ULL))))) + (1976605358)));
                        }
                    } 
                } 
            }
        } 
    } 
}
