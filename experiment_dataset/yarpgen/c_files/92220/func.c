/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92220
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 3051185786U)) ? (var_10) : (((/* implicit */int) (unsigned char)56)))), (max((var_10), (((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned long long int) 3719610587U))))) ? (((/* implicit */unsigned int) var_10)) : (((((/* implicit */_Bool) 4995879235251710875ULL)) ? (3165747247U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15370)))))))) : (min((((var_13) ? (var_4) : (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) ((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_2 + 1]) : (arr_1 [i_0 - 1] [i_2 + 1])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_1] [i_2] [i_1]))))), (max((((/* implicit */unsigned long long int) var_15)), (7791920463842955524ULL)))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1243781510U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [(short)20] [(unsigned short)1]))) : (16857794576229945140ULL)))))) ? (1399238460U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1] [(unsigned char)6]))))));
                    var_19 += ((/* implicit */signed char) 11273400753741072526ULL);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)12]))))) : (((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (arr_5 [i_0 - 1] [17U] [i_2])))))) ? (((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_2 - 1] [i_2])) : (min((arr_1 [i_0 - 1] [i_1]), (3719610587U))))))));
                    var_21 = ((/* implicit */unsigned int) var_13);
                }
            } 
        } 
    } 
}
