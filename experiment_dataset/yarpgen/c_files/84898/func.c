/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84898
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
    var_13 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((((/* implicit */_Bool) 10575851567593727748ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [14U] [i_1 + 1] [i_0]))) : (1013528591913272795ULL))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0])), (1073741824U))), (max((((/* implicit */unsigned int) arr_5 [i_0] [20ULL] [i_0])), (0U)))))))))));
                    arr_9 [i_1] = ((/* implicit */unsigned char) max((10575851567593727754ULL), (((/* implicit */unsigned long long int) 4294967295U))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1 + 1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3667870347U)) ? (((/* implicit */int) arr_13 [i_1] [i_1 + 1] [(_Bool)1] [(_Bool)1] [i_1] [i_1 + 1] [i_1])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((arr_13 [i_1] [i_4] [i_4] [i_4] [i_4] [i_1 - 1] [i_1]), (arr_13 [i_1] [i_4] [i_4] [i_4] [i_4] [i_1 + 2] [i_1])))) : (((/* implicit */int) min((arr_13 [i_1] [i_4] [i_4] [i_3] [i_3] [i_1 + 2] [i_1]), (arr_13 [i_1] [i_2] [i_1] [i_1] [(unsigned char)15] [i_1 + 1] [i_1]))))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (10780276881356778740ULL)))) ? (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2] [i_4])) ? (10780276881356778725ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_3 - 1] [i_4]))))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (7666467192352772876ULL)))));
                                var_15 = max((6994100451404462422ULL), (10575851567593727754ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((min((arr_8 [18ULL] [18U] [i_6 + 1] [18ULL]), ((_Bool)0))) ? (((/* implicit */int) max(((unsigned char)83), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) min((arr_8 [4ULL] [12U] [i_6 + 1] [4ULL]), (var_0))))));
                arr_23 [(_Bool)1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)0)), (7666467192352772874ULL))), (((/* implicit */unsigned long long int) ((var_5) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) ? (((((/* implicit */_Bool) 21854305U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (2080374784ULL))) : (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) arr_8 [18ULL] [i_6 - 1] [18ULL] [10ULL])) : (((/* implicit */int) arr_8 [(_Bool)1] [i_6 - 1] [16U] [(_Bool)1])))))));
                var_17 = ((min((var_12), ((_Bool)1))) ? (((((/* implicit */_Bool) arr_2 [i_6 + 1])) ? (10167087747222727158ULL) : (((/* implicit */unsigned long long int) var_3)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [9ULL] [i_5] [i_5] [i_6] [i_6] [i_6])) : (((/* implicit */int) (unsigned char)96))))), (((arr_22 [i_6 - 1] [i_5] [i_5]) ? (arr_3 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [(_Bool)1] [(_Bool)1]))))))));
            }
        } 
    } 
}
