/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82628
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0])))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_1] [i_0])), (arr_5 [i_0 - 1] [i_2] [i_1] [i_0 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (max((((/* implicit */unsigned int) var_14)), (4294967283U)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 3) /* same iter space */
                    {
                        var_19 += arr_4 [i_2] [i_2 + 1] [i_2];
                        arr_9 [(_Bool)1] [(_Bool)1] [i_0] [(short)13] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [i_3]) ? (arr_3 [i_2 - 1] [i_1]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_16)) : (-1398975532))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_2 - 2])))) : (arr_4 [i_1] [i_2 + 2] [i_0])));
                    }
                    for (unsigned int i_4 = 3; i_4 < 17; i_4 += 3) /* same iter space */
                    {
                        var_20 += ((/* implicit */short) ((unsigned char) ((int) ((int) (signed char)16))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_5 [i_0] [i_0] [6LL] [i_4])))) ? (((((/* implicit */_Bool) (signed char)86)) ? (arr_5 [17ULL] [i_2] [i_0] [i_0]) : (arr_3 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)2] [i_2 - 1] [i_4 + 2])))))))) : (var_10)));
                        var_22 = ((/* implicit */int) arr_6 [i_1]);
                    }
                    arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) | (((unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
                    var_23 = ((/* implicit */short) ((int) min((((((/* implicit */_Bool) 1937846036)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (65535LL))), (((/* implicit */long long int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 3568435452U)), (((unsigned long long int) min((((/* implicit */int) (signed char)-17)), (1398975528))))));
    var_25 += ((/* implicit */long long int) 536870911U);
}
