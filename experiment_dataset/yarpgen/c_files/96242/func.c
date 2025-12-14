/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96242
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
    var_15 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)25011)), (8070880874721041865ULL)));
    var_16 |= ((/* implicit */unsigned short) max((((max((((/* implicit */unsigned long long int) var_3)), (797958675909397032ULL))) & (((/* implicit */unsigned long long int) var_8)))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (5072211044519081809ULL))) << (((max((0ULL), (((/* implicit */unsigned long long int) var_7)))) - (616308950728901220ULL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) arr_5 [i_1 - 1] [15LL] [6U] [15LL]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_1 + 1] [i_3] [6ULL])) <= (((/* implicit */int) max((arr_14 [i_0] [i_1 - 1] [i_1 + 1] [6LL] [18]), (arr_14 [i_0] [i_1 - 1] [i_1 + 1] [i_3] [(unsigned short)2])))))))));
                                var_19 = ((/* implicit */int) 5072211044519081809ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_3), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned long long int) -4503599627370496LL)) & (var_4))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((var_9), (var_2)))) == (((/* implicit */int) var_6))))))));
}
