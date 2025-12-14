/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95142
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0 + 2] [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_4] [i_4] = ((/* implicit */int) (-(((long long int) min((arr_3 [17U] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)241)))))));
                                arr_14 [(short)5] [i_1] [2U] [14LL] [i_4] = ((/* implicit */signed char) ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) (unsigned short)22134)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned short)22129)))))) | (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (16000935059200459961ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) max((arr_8 [i_1] [i_1 - 1] [i_2]), (((/* implicit */unsigned int) arr_2 [i_1]))))))))));
                                var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((2901092257U), (((602038750U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22134)))))))) && (((/* implicit */_Bool) (-((~(((/* implicit */int) arr_2 [9LL])))))))));
                                arr_15 [i_4] [i_1] [(_Bool)1] [(_Bool)1] [i_2] &= ((/* implicit */unsigned short) 4503599627362304ULL);
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) var_2);
                    var_19 = ((/* implicit */_Bool) ((5821637629172498910ULL) + (((/* implicit */unsigned long long int) (-(602038750U))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) / (((((/* implicit */int) max(((unsigned short)1920), (((/* implicit */unsigned short) (signed char)60))))) << (((var_6) - (3021471896213979273ULL)))))));
    var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) var_16)), (18446744073709551614ULL)))));
}
