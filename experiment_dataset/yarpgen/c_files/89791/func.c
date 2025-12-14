/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89791
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
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-88))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [(short)0] [i_0] = ((/* implicit */signed char) min((((int) ((((/* implicit */int) (signed char)-74)) | (((/* implicit */int) (signed char)-32))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3800219412361194657LL)))) && ((!(((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_3] [i_0])))))))));
                                var_17 = ((/* implicit */int) min((min((((/* implicit */long long int) arr_4 [i_3])), (min((3800219412361194646LL), (arr_0 [i_1]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min(((unsigned short)21), (((/* implicit */unsigned short) (signed char)-1))))))))));
                                arr_14 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (short)12587)))));
                                var_18 = ((/* implicit */unsigned char) max(((~((-(3800219412361194657LL))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_0 + 1] [i_1 - 1] [i_3 - 2] [i_4 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) (~(max(((~(var_5))), (max((var_5), (((/* implicit */unsigned long long int) -3800219412361194658LL))))))));
    var_20 = ((/* implicit */unsigned long long int) var_12);
}
