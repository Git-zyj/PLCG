/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95416
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                arr_10 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1013820358)), (2985315517U)))), (var_3)));
                                var_18 = (~(((/* implicit */int) ((10507967374022471168ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_19 = ((/* implicit */_Bool) ((((((/* implicit */long long int) arr_8 [17LL] [i_3] [i_2] [i_1] [i_1] [i_0])) < (var_4))) ? (((((/* implicit */_Bool) 1849537194U)) ? (arr_8 [i_0] [i_1] [i_2] [(_Bool)1] [i_3] [(signed char)21]) : (((/* implicit */unsigned int) arr_1 [i_3])))) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (arr_1 [i_3]))))));
                            }
                            for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                            {
                                arr_14 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) arr_11 [i_5] [i_0]);
                                var_20 += ((/* implicit */unsigned short) min((var_0), (((/* implicit */long long int) -241447922))));
                                var_21 = ((/* implicit */int) ((var_9) >> (max((((/* implicit */unsigned long long int) (_Bool)1)), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64614))) : (12ULL)))))));
                            }
                            arr_15 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1014420131)) && (((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 0U))))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */short) min((11781805772387281211ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned int) (signed char)127)), (((unsigned int) var_16)))));
    var_23 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)42140)), (18446744073709551615ULL)));
    var_24 = ((/* implicit */long long int) 1286087321);
}
