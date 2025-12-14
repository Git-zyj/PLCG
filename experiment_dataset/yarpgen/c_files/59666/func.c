/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59666
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) -1)) : ((~(var_0)))))));
                var_21 = ((/* implicit */unsigned char) min((-639664), (((/* implicit */int) max((arr_1 [i_1]), (arr_1 [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((unsigned short) arr_3 [i_0] [i_1] [(_Bool)1])))));
                    var_23 = ((/* implicit */short) max(((-(((/* implicit */int) max((arr_4 [i_1] [i_2]), (((/* implicit */signed char) (_Bool)1))))))), (((/* implicit */int) min((((/* implicit */short) ((var_14) < (((/* implicit */int) var_13))))), (arr_3 [i_2] [i_2] [i_2 + 1]))))));
                    var_24 = ((/* implicit */unsigned int) ((((1087099320U) & (((((/* implicit */_Bool) var_19)) ? (2192640309U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_2]))))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_12 [(unsigned char)9] [i_4])), (17552941613223689938ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)80)))))))) && (var_8)));
                    var_26 &= ((unsigned char) max((((/* implicit */unsigned long long int) (short)28146)), (17552941613223689929ULL)));
                    var_27 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)39)), (893802460485861669ULL)));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((/* implicit */_Bool) 4027162138U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (arr_10 [i_4] [i_3])))));
                    arr_17 [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((17552941613223689919ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))), ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_7 [i_3])) : (arr_10 [i_4] [5U])))))));
                }
            } 
        } 
    } 
}
