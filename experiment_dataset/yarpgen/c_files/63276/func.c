/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63276
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
    var_10 = ((/* implicit */_Bool) (-(((/* implicit */int) max((((short) 3445969156U)), (((/* implicit */short) var_8)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = arr_0 [i_0] [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)-16566)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
        var_12 = ((/* implicit */signed char) (+(((var_3) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_13 = ((/* implicit */short) (-(2147483647)));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            arr_11 [i_1] [i_2] &= ((/* implicit */short) (~(((((/* implicit */_Bool) 4105913232069482741LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1]))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_14 = ((var_3) ? (((/* implicit */long long int) arr_5 [i_2 + 2])) : (((((/* implicit */_Bool) arr_19 [i_1] [i_2 + 1] [i_3] [i_2 + 1] [i_5 - 1])) ? (arr_19 [i_1] [i_2 - 1] [i_3] [i_4 - 3] [i_5]) : (6915135285063335739LL))));
                            var_15 *= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_7 [i_1] [i_5 + 2])) ? (-1969970531) : (((/* implicit */int) arr_13 [i_1] [i_2 + 1] [i_3])))));
                        }
                    } 
                } 
                var_16 &= ((short) ((((/* implicit */_Bool) (unsigned char)129)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    arr_23 [i_6] [i_2] [i_2] = ((/* implicit */_Bool) (+(var_0)));
                    var_17 = ((/* implicit */short) arr_9 [i_2 + 2] [i_2]);
                }
            }
        }
    }
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_5))));
}
