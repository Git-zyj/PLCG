/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83677
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_12 = arr_2 [i_0];
        var_13 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_14 = max((min(((+(2575745830U))), (((/* implicit */unsigned int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(_Bool)1])))))))), (((/* implicit */unsigned int) ((max((0U), (((/* implicit */unsigned int) arr_0 [i_0] [(_Bool)1])))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1152921504606846976LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0])))))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_10))));
        var_16 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) 201326592U)), (5016085770834447489LL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((((((arr_3 [i_1] [i_1]) + (9223372036854775807LL))) << (((((arr_3 [i_1] [i_1]) + (2431160666280383103LL))) - (50LL))))), (((/* implicit */long long int) var_9))));
        arr_6 [i_1] &= ((/* implicit */unsigned int) var_1);
        arr_7 [i_1] = ((/* implicit */signed char) 4093640681U);
    }
    var_18 = ((/* implicit */long long int) ((unsigned long long int) var_1));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((max((14868212754974081151ULL), (((/* implicit */unsigned long long int) 201326590U)))), ((-(arr_11 [i_3] [i_2])))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            arr_20 [i_5] [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((0U) << (((max((17536002473517910547ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) - (17536002473517910518ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (0U)));
                            arr_21 [i_2] [i_2] [i_2] [i_3] = (+(((((/* implicit */_Bool) 5016085770834447489LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_2]))));
                            var_20 = ((((((/* implicit */_Bool) -6171765259101544194LL)) ? (max((((/* implicit */unsigned long long int) (unsigned short)11979)), (0ULL))) : (max((((/* implicit */unsigned long long int) var_0)), (4561797660473817524ULL))))) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) arr_9 [i_4]))), (arr_17 [i_3] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
