/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72218
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) 330514768810218427ULL)) ? (330514768810218427ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
    var_11 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (18446744073709551615ULL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] = ((short) max((arr_7 [i_4] [i_3] [i_2] [i_0]), (((((/* implicit */_Bool) (short)9502)) ? (((/* implicit */int) (short)9509)) : (((/* implicit */int) arr_6 [i_1] [i_0] [i_0] [i_4]))))));
                                arr_16 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) var_1)), (330514768810218430ULL)))));
                                var_12 = ((/* implicit */_Bool) max((var_12), (var_5)));
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((((/* implicit */unsigned long long int) var_8)) != (18116229304899333189ULL))) ? (((/* implicit */int) (short)12543)) : ((~((~(((/* implicit */int) var_1)))))))))));
                            }
                        } 
                    } 
                } 
                var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(18116229304899333188ULL)))) ? (((/* implicit */int) var_2)) : (max((((/* implicit */int) var_3)), (arr_7 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 1])))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                                var_16 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (max((((/* implicit */unsigned int) (signed char)-114)), (4294967295U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (short)23087)) < (((/* implicit */int) (signed char)-120)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 += ((/* implicit */short) ((((((((/* implicit */_Bool) 6094613800761759263LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) + (((/* implicit */int) var_4)))) - (((/* implicit */int) (signed char)125))));
}
