/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86194
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
    var_19 = ((/* implicit */_Bool) var_15);
    var_20 = ((/* implicit */signed char) ((long long int) (+(((((/* implicit */_Bool) 9037399757172390176LL)) ? (9037399757172390173LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 6; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_1] = ((/* implicit */long long int) (((!(((_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) ((signed char) ((unsigned char) arr_11 [i_0])))) : (((/* implicit */int) ((_Bool) arr_10 [i_2] [i_2] [i_2] [1U] [i_3] [i_3 + 2] [i_4 + 2])))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) (((+(((((/* implicit */_Bool) 561834707U)) ? (26LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11287))))))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_1]))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3 - 1] [i_2] [i_4 - 2] = ((/* implicit */long long int) max((arr_10 [i_1] [i_4 - 2] [i_3] [i_1] [i_1] [i_1] [i_0]), (max((((/* implicit */unsigned long long int) 4311534279267780413LL)), (arr_3 [i_2 + 1] [i_2 + 1] [i_1])))));
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_7 [i_2] [i_1] [i_0] [i_0]))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-108)), (9037399757172390173LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_1])) ? (arr_8 [i_2] [i_2 + 1] [i_2] [i_1]) : (arr_8 [i_1] [i_2 + 1] [i_2] [i_1]))))));
                }
            } 
        } 
    } 
}
