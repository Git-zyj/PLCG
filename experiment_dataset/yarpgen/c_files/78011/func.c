/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78011
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_0 + 4] [i_1 + 1] [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_9 [i_2] [i_2] [i_2] [i_3] [i_3] &= ((/* implicit */unsigned long long int) var_7);
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) min(((short)2828), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */long long int) max((((/* implicit */int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))))) : (arr_6 [i_3] [(short)7] [i_1 - 1]));
                            arr_11 [i_2] [i_1] [i_2] = (!(((/* implicit */_Bool) (-(max((arr_3 [i_0] [i_3]), (((/* implicit */unsigned long long int) (signed char)89))))))));
                            arr_12 [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_0 [12U]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_14 -= ((/* implicit */unsigned char) min((max((((/* implicit */long long int) arr_8 [i_0 + 3] [i_1 - 1])), (arr_2 [i_0 - 1] [i_1 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3103400015817339629ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_17 [i_0] [i_1] [i_4] [i_4] [i_5] = arr_4 [i_4] [i_0] [i_4] [i_5];
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((((unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) ((unsigned char) var_10))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))))));
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 23; i_6 += 3) 
    {
        for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            {
                arr_23 [7] = ((/* implicit */unsigned char) ((int) var_9));
                arr_24 [i_6 + 1] = ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) 4132298080U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))));
                arr_25 [i_6] [i_7] = arr_22 [i_7];
            }
        } 
    } 
    var_16 = max(((((!(((/* implicit */_Bool) var_4)))) ? (var_12) : (((/* implicit */long long int) var_0)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_0)) : (-2692076794756255844LL)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (4366480434336948282LL))) : (((/* implicit */long long int) var_10)))));
    var_17 = ((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)));
}
