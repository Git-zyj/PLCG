/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81242
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_17)), (arr_3 [i_0])))) > (var_14)));
                arr_8 [10ULL] [i_1] [10ULL] = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) : (var_13))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((min((max((((/* implicit */unsigned int) var_11)), (arr_0 [i_0] [i_1]))), (arr_3 [i_0]))) << (((min((((/* implicit */long long int) min((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_0] [i_1] [i_1])))), (max((((/* implicit */long long int) 705522139)), (var_14))))) - (3193841318LL))))))));
            }
        } 
    } 
    var_20 -= var_11;
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                var_21 *= ((/* implicit */short) min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) ((short) arr_12 [24ULL]))) : (arr_13 [i_2 + 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) arr_16 [i_2] [i_3] [i_4] [i_5])) ^ (arr_19 [i_4] [i_4] [i_4]))))), (arr_18 [i_4]))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((((/* implicit */_Bool) arr_13 [i_2 - 2])) ? (arr_13 [i_2 - 2]) : (arr_13 [i_2 - 1]))), (min((arr_13 [i_2 + 1]), (arr_13 [i_2 - 2]))))))));
                            arr_20 [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) ((signed char) max((4294967293U), (((/* implicit */unsigned int) ((17908001904175678185ULL) > (((/* implicit */unsigned long long int) var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = max((((/* implicit */unsigned long long int) var_15)), (((unsigned long long int) 2994866567127825524ULL)));
}
