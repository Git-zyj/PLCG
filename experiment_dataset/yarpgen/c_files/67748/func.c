/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67748
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
    var_15 &= ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [15U] [i_3 - 2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((min((max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (arr_5 [i_3 - 2] [i_0]))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 - 2] [(unsigned short)16] [i_4] [i_4 + 1] [i_4 + 1])))), (((/* implicit */unsigned long long int) 933084385U))));
                                var_16 += ((/* implicit */long long int) ((((/* implicit */int) ((arr_5 [i_0] [i_3]) < (min((((/* implicit */unsigned long long int) arr_10 [i_4] [i_3] [i_3] [i_0])), (255ULL)))))) < (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_2 + 2])) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_1 - 2] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_1 - 1] [i_2 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [14LL] [10ULL] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
                                var_17 += ((/* implicit */long long int) (_Bool)1);
                                var_18 = ((/* implicit */short) min((var_18), (arr_6 [i_1] [i_2] [i_1])));
                                var_19 ^= ((/* implicit */long long int) ((min((((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))), (arr_10 [i_0 - 1] [i_1] [i_6] [i_6]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10363))) : (arr_16 [i_1] [i_1] [i_5] [i_6])))) ? ((~(((/* implicit */int) (short)-19805)))) : (((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (-7464001796735913658LL)))))))));
                                var_20 = ((/* implicit */_Bool) max((max((arr_5 [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1 + 1] [i_1] [i_2] [i_2] [1ULL] [i_1])))), (((/* implicit */unsigned long long int) ((short) ((short) arr_19 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
