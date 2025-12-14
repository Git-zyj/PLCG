/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61257
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [13ULL] [i_4] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(arr_11 [i_4 + 1] [i_3] [i_4 - 1])))), (((long long int) (!(((/* implicit */_Bool) arr_2 [i_4 + 2] [19U] [i_1])))))));
                                var_16 = ((/* implicit */long long int) (-(max((arr_0 [i_3]), (((/* implicit */unsigned int) ((-8156607693930961883LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20705))))))))));
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] [0U] [2ULL] = (short)30084;
                                var_17 = ((/* implicit */short) ((((/* implicit */long long int) 543082457U)) <= ((~(((long long int) (unsigned short)512))))));
                                var_18 += ((/* implicit */unsigned short) min(((~(min((((/* implicit */unsigned long long int) var_7)), (arr_4 [i_1] [i_2] [i_3] [i_4 + 2]))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)12)), (var_13)))) ? (min((arr_4 [i_0] [(unsigned short)16] [i_3] [i_4]), (((/* implicit */unsigned long long int) 4294967292U)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (545814346U)))), (min((var_1), (((/* implicit */unsigned long long int) (unsigned short)27244)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((unsigned int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))), (((/* implicit */int) max((((/* implicit */signed char) var_10)), ((signed char)24)))))));
}
