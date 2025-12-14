/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82980
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
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) var_4)), ((+((+(((/* implicit */int) var_11))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(arr_3 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (unsigned short)28157))));
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                }
            } 
        } 
        arr_11 [i_0] = ((9223372036854775806LL) << (((((((-9223372036854775806LL) - (-9223372036854775796LL))) + (65LL))) - (55LL))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((long long int) arr_2 [i_3 - 2]));
                        arr_19 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8920347095109826598ULL)) ? (((/* implicit */long long int) 1541212990)) : (9223372036854775806LL)));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_0] [i_0]))))))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-9223372036854775806LL) / (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_3])))))) ? (9223372036854775805LL) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_4])) ? (arr_12 [i_3 + 3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (arr_0 [i_4] [i_4]) : (arr_2 [i_3])));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */long long int) ((/* implicit */int) (short)32759))) != (-9223372036854775806LL)))));
                        }
                        for (short i_7 = 1; i_7 < 21; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) var_15);
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_12))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 19; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */_Bool) ((int) var_13))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 398388610))))))))));
                            var_28 = ((/* implicit */unsigned short) ((var_4) ? (arr_15 [i_0] [i_0]) : (-2018922242)));
                            var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_0]))));
                            var_30 = ((/* implicit */unsigned int) var_1);
                        }
                    }
                } 
            } 
        } 
    }
    var_31 += ((/* implicit */unsigned int) (-(var_1)));
}
