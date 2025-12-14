/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58031
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
    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((930947080U) >= (930947089U))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_2 [(_Bool)1] [(signed char)18] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (signed char)10)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 1146209449U)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)50)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */short) (signed char)13)), (arr_5 [i_0 - 2]))))));
                    var_18 = ((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [i_0 - 1] [i_2]);
                    var_19 -= ((/* implicit */unsigned int) (signed char)13);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) 3364020180U))))), ((+(((/* implicit */int) arr_9 [i_0 - 2] [i_4 - 1] [i_2] [i_4 - 1]))))));
                                arr_17 [i_4 - 1] [i_3] [i_2] [i_3] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_4]) & (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 - 1]))))) || (((/* implicit */_Bool) ((unsigned char) arr_7 [i_0 - 1] [i_4 - 1] [(signed char)6])))));
                                arr_18 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_16 [(unsigned char)3] [i_1] [i_1] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) 3364020185U);
        arr_22 [(short)12] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) 3308627169139910937ULL)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) arr_21 [i_5] [i_5 + 3])))) + (((/* implicit */int) ((((/* implicit */int) arr_16 [i_5 + 1] [i_5 - 1] [i_5 - 1] [(signed char)18])) >= (((/* implicit */int) var_10)))))));
        var_22 = ((/* implicit */_Bool) min((var_22), ((!((!(((/* implicit */_Bool) (short)4798))))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) var_10)))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_19 [i_5 + 2]))));
    }
    var_25 = ((/* implicit */unsigned char) var_14);
}
