/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76940
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
    var_16 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_1] [i_0])))) ? (((4250464877U) << (((/* implicit */int) (_Bool)0)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) ^ (((/* implicit */int) var_13)))))))) ? ((((~(((/* implicit */int) arr_2 [i_0] [i_1])))) >> (((((/* implicit */int) arr_0 [i_0])) + (45))))) : (((((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (signed char)33))))) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51669)) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((arr_4 [(signed char)7] [i_0] [i_0]) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) arr_2 [9U] [(signed char)6])))), (((/* implicit */int) (!(arr_4 [(unsigned short)0] [i_1] [i_1]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((((/* implicit */_Bool) (unsigned char)80)) || (((/* implicit */_Bool) (unsigned char)97))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (var_3)))) || ((!(((/* implicit */_Bool) var_7)))))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (628245166))) : (((/* implicit */int) arr_2 [i_1] [i_0]))))) ? (((((/* implicit */_Bool) min((628245166), (arr_3 [i_0] [i_1])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))) : ((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_4 [i_0] [i_1] [i_1]) ? (44502418U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))), (max((1509849425U), (904611313U)))))) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((((/* implicit */int) var_2)), (((((/* implicit */int) var_7)) >> (((((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */int) var_7)))) - (95937819)))))));
    var_21 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((628245175) / (var_15)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((/* implicit */int) var_8)))))))), (((((/* implicit */long long int) -628245158)) * (((long long int) (unsigned char)79))))));
}
