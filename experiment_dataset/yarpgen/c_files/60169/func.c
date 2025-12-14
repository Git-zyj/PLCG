/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60169
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
    var_19 = (+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_9) : (arr_4 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_3 [3] [i_1] [(unsigned short)6]))))))))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max(((unsigned short)65521), (((/* implicit */unsigned short) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : ((~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (13687425485727431045ULL)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_2] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_2] [i_2] [i_4])))) ? (((/* implicit */unsigned int) max((arr_12 [i_0] [i_0] [i_2] [i_3 - 3]), (((/* implicit */int) var_18))))) : (((((/* implicit */_Bool) (unsigned char)87)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_0] [i_2])), (min((arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] [i_4]), (((/* implicit */int) (unsigned short)14))))))) : ((-(min((arr_3 [i_3] [i_1] [i_3]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (_Bool)0)))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_3] [i_0] [i_2] [i_3 - 1] [i_1]))))) >> (((min((max((((/* implicit */unsigned int) (signed char)-111)), (2987705514U))), (arr_4 [i_1] [i_3 - 2] [i_2]))) - (2264944755U)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_5)), (((min(((_Bool)0), ((_Bool)1))) ? (max((var_16), (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27935)))))))));
}
