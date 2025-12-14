/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9266
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551614ULL)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((arr_1 [i_2]) ? (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_1])))))))));
                    arr_10 [i_0] [i_1] [(unsigned char)9] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) == (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) && (var_2))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_16 [i_2] [i_2] [i_2] [(short)6] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_2] [i_0]))))), (var_12)))) ? (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */int) arr_2 [i_4]))))) : (min((arr_12 [i_0] [i_1] [(_Bool)1] [i_2] [(short)5] [i_4]), (((/* implicit */unsigned long long int) ((arr_0 [i_3]) > (arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]))))))));
                                arr_17 [i_0] &= ((/* implicit */short) min((((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4]))))), (arr_5 [i_1])));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned char)8] [i_1] [i_1] [i_1] [(_Bool)1]))) ^ (1587504732890233221ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
}
