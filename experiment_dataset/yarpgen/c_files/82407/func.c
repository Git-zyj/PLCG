/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82407
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
    var_17 = min((max((((/* implicit */unsigned long long int) var_10)), (max((var_5), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) var_11)), (var_16))))));
    var_18 = ((/* implicit */unsigned char) var_3);
    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5407924618245033672LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 3])))))) : (arr_0 [i_1])));
                                var_20 = ((/* implicit */unsigned char) 1411187116133871865LL);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -5407924618245033672LL)))) : (max((arr_1 [i_0 + 1] [i_0 - 3]), (arr_1 [i_0 - 3] [i_0 - 2])))))));
                arr_14 [i_0] [i_0] = ((/* implicit */signed char) (~(((unsigned long long int) ((0) + (((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 1] [i_0] [(short)15] [i_0 + 1] [(short)15])))))));
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                arr_25 [19U] [i_0] [i_0] [9LL] = ((/* implicit */short) ((unsigned short) max((var_13), (var_13))));
                                arr_26 [9LL] [i_1] [i_0] [(unsigned short)13] [i_7] = ((/* implicit */int) max((((unsigned int) var_10)), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45215))) > (var_16))))));
                                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [i_5] [i_5] [i_5]))))) ? (((-2147483632) + (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0] [i_7] [i_1])))) : ((-(((/* implicit */int) arr_5 [i_0])))))) - ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
