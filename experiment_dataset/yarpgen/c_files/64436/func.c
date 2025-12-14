/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64436
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) 0U))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                            {
                                var_16 = ((/* implicit */unsigned int) (short)6);
                                var_17 = ((/* implicit */short) (-((~(arr_14 [i_0] [i_0])))));
                                var_18 *= ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_2] [i_4] [i_1] [i_2]);
                            }
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1])) <= (arr_8 [i_0])))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_0] [i_1])))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */int) ((arr_14 [i_0] [i_1]) > (arr_14 [i_0] [i_1])))), ((((-(((/* implicit */int) var_6)))) % (((/* implicit */int) var_13)))))))));
                arr_15 [i_0] = ((/* implicit */_Bool) min(((-(((/* implicit */int) ((signed char) arr_2 [i_1]))))), (((int) arr_0 [i_0]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967288U)) || (((/* implicit */_Bool) 25U))))), ((+(arr_4 [i_5] [i_5])))))));
        arr_18 [i_5] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_17 [i_5])))), (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) (signed char)-20))))));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((2938682147U) != (((/* implicit */unsigned int) -687615960))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_6]))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6] [(signed char)19])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) : (((1613723833U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61)))))))));
        var_23 += ((/* implicit */signed char) arr_5 [i_6]);
        var_24 = ((/* implicit */signed char) arr_20 [i_6]);
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned int) (unsigned short)0);
    }
}
