/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93899
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
    var_13 += ((/* implicit */unsigned int) var_5);
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1440207191)))))) ^ (min((var_6), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(max((((/* implicit */int) var_9)), (-1440207191))))))));
                                var_16 = ((/* implicit */unsigned short) ((short) var_4));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(var_4)))))))))));
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */signed char) (-(max((var_10), (((/* implicit */long long int) var_12))))));
                    arr_12 [i_1] = ((/* implicit */_Bool) var_0);
                    arr_13 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) 1440207213)))));
                    arr_14 [2] [(unsigned short)9] &= ((/* implicit */signed char) max(((~(((var_7) ^ (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [6U] [i_1] [i_1])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2] [(short)11] [i_0]))))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (-2147483647 - 1));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)62)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) * (((/* implicit */int) ((25ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31199))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-116)), (16728725203054758192ULL)))) ? (((/* implicit */int) min((arr_9 [i_0] [i_1] [(short)9]), ((unsigned short)49491)))) : (((/* implicit */int) arr_17 [i_5]))))) : ((~(min((arr_10 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5]), (var_11)))))));
                }
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) min((var_2), (arr_20 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_5)));
                var_24 = ((/* implicit */long long int) var_11);
            }
        } 
    } 
}
