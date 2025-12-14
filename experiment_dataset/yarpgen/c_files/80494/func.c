/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80494
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12063948218476534822ULL))))), (((18446744073709551615ULL) << (((((/* implicit */int) (signed char)-95)) + (141))))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-78))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_2 [i_1]))))))));
                arr_7 [i_0] [i_1] [i_1] = 7333884574612023798LL;
                var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_1 - 3] [i_1 + 1] [0LL])), (arr_1 [i_1 - 4] [i_1])))) ? (((var_3) / (((/* implicit */int) arr_1 [i_1 - 4] [i_1])))) : (((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 1]))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [0U] [i_1 - 2])) && (((/* implicit */_Bool) arr_0 [i_1 - 3] [i_1 - 4])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((long long int) arr_9 [i_3 - 1])), (((/* implicit */long long int) ((arr_10 [i_3 - 1] [i_3] [i_3 - 1]) % (arr_10 [3U] [i_3] [i_3 - 2]))))));
                var_13 = ((/* implicit */long long int) max((1429336483U), (((/* implicit */unsigned int) ((arr_10 [i_3 - 1] [i_3 + 1] [i_3 + 1]) / (arr_10 [i_3 + 1] [i_3] [i_3 + 1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((var_9) != (((/* implicit */int) max(((!(var_1))), ((!(((/* implicit */_Bool) arr_13 [i_2])))))))));
                            arr_17 [i_2] [i_4 + 3] [i_4] = ((/* implicit */signed char) max((max((var_3), (((/* implicit */int) (signed char)-71)))), (((((/* implicit */_Bool) arr_15 [i_4] [i_4 + 2] [i_5] [i_5 + 4])) ? (((/* implicit */int) arr_15 [i_4] [i_4 + 3] [i_4] [i_5 + 3])) : (((/* implicit */int) arr_15 [i_4] [i_4 - 1] [i_4] [i_5 + 2]))))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_10 [(short)17] [(short)17] [i_4]))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (long long int i_8 = 4; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-64))))), (-4371866504407327421LL)))))));
                                var_18 = ((/* implicit */int) arr_15 [i_6] [i_3] [i_6] [i_7]);
                                var_19 = ((/* implicit */int) min((((/* implicit */short) var_1)), (max((min((((/* implicit */short) arr_14 [i_7] [i_7] [i_6])), ((short)8331))), (arr_21 [i_3] [i_3 - 1] [i_3 - 2] [i_3] [i_6])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) (signed char)-114)) ? (11598473651164122249ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) << (((max((((/* implicit */long long int) (short)8325)), (7264691935706548735LL))) - (7264691935706548720LL))))));
}
