/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91466
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (short)7576))));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) (short)-7576))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-7576))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7597))) : (((((/* implicit */_Bool) var_14)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_2] = max((((/* implicit */long long int) (short)7578)), (18014398509481983LL));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((2753020700161120186ULL) / (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) var_1)), ((short)-7577)))) + (((((/* implicit */int) (signed char)-6)) / (((/* implicit */int) (signed char)-2))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (((((~(((/* implicit */int) (short)-7577)))) < (((/* implicit */int) max(((short)960), (((/* implicit */short) (signed char)96))))))) ? (((((/* implicit */_Bool) 134217728U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)(-127 - 1))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 = ((/* implicit */_Bool) 134217728U);
        arr_19 [i_5] = max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18017)) && ((_Bool)1)))), (((((/* implicit */int) (signed char)18)) ^ (((/* implicit */int) (unsigned char)127)))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)8390)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 955100025))));
        var_22 = ((/* implicit */signed char) ((var_11) + (((/* implicit */int) var_0))));
    }
    var_23 -= ((/* implicit */long long int) (_Bool)1);
}
