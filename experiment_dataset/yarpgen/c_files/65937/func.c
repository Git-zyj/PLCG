/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65937
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
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_10 -= arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [4U];
                                var_11 = ((/* implicit */signed char) max((8189554622832919117LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(_Bool)1]))) >= (arr_1 [i_0 - 1]))))));
                                arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((_Bool) (_Bool)1)))));
                                var_12 -= ((/* implicit */long long int) ((arr_11 [4LL] [i_1 - 1] [i_2] [i_4]) || ((!(((/* implicit */_Bool) 522957547U))))));
                                var_13 = ((((/* implicit */unsigned long long int) ((long long int) 9223372036854775798LL))) >= (((arr_11 [i_0] [i_1] [i_2] [i_4]) ? (arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (18446744073709551615ULL))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) (+(4814966058783753263ULL)));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 1) 
                        {
                            var_15 -= (+(max((((((/* implicit */_Bool) 1285951490)) ? (4814966058783753273ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((_Bool) var_5))))));
                            arr_24 [0ULL] [(signed char)14] [i_2] = ((/* implicit */int) 5274447585617014511LL);
                        }
                        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((~(arr_18 [i_0] [3U] [i_0]))) : (min((9223372036854775807LL), (((/* implicit */long long int) 815141175U))))))) ? ((~(((/* implicit */int) (unsigned char)120)))) : (var_4)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [i_7] [i_7] [i_2] [i_1] [i_7] [i_0] = ((/* implicit */short) 18446744073709551615ULL);
                        var_17 = ((/* implicit */unsigned int) (_Bool)1);
                        var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((arr_20 [i_0 - 1] [i_2] [i_2] [i_2]), (((/* implicit */int) arr_3 [i_0 - 1]))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_7] [12U] [12U] [i_7])) ? (var_2) : (4294967295U)))) : (((unsigned long long int) 18446744073709551614ULL))))));
                        arr_28 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_3 [i_0]);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 2; i_8 < 11; i_8 += 4) 
    {
        for (long long int i_9 = 3; i_9 < 12; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_10 = 2; i_10 < 12; i_10 += 1) 
                {
                    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 1) 
                    {
                        {
                            arr_42 [i_9] [i_11] = ((/* implicit */_Bool) (-(1921038738342514348ULL)));
                            var_19 *= max((((/* implicit */unsigned long long int) max((arr_17 [i_8 + 2]), (arr_17 [i_8 + 2])))), (((((/* implicit */_Bool) arr_26 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1])) ? (arr_19 [i_10 - 1] [i_10 - 1] [i_9 + 1] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12457173251841621071ULL)) ? (((/* implicit */long long int) 4018111531U)) : (9223372036854775807LL)))))));
                            var_20 = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                arr_43 [i_8 - 1] [i_9 + 1] [i_8] |= ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                {
                    var_21 = var_0;
                    var_22 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                }
            } 
        } 
    } 
}
