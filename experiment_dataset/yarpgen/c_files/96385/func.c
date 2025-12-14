/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96385
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
    var_17 &= ((/* implicit */unsigned int) var_16);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((1085751995U) / (3209215300U)))) : (max((((/* implicit */unsigned long long int) var_5)), (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17042430230528ULL)) ? (8127234881884509078LL) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) (_Bool)1))))))))) : (min((((/* implicit */unsigned long long int) min((var_16), (((/* implicit */short) arr_1 [i_0] [i_0]))))), (arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)65)) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_4 [i_1])), (3932471085U))) * (var_2)))) ? ((-((+(((/* implicit */int) arr_3 [i_1] [i_1])))))) : (((/* implicit */int) var_4))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -964922457)) + (10123180727556911141ULL)));
        var_21 = ((/* implicit */unsigned char) max((1617164641U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)26225)) - (964922432))))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((((int) arr_7 [i_2])), (((/* implicit */int) (short)32765)))))));
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_2])), (-1557354494)))), ((+(max((arr_0 [i_3]), (((/* implicit */unsigned long long int) arr_4 [i_2]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_0);
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((var_3) <= (((/* implicit */long long int) var_12)))))));
}
