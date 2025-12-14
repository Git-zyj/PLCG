/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63606
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
    var_19 = ((/* implicit */int) 297406578U);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? ((((+(var_6))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 297406589U)) ? (1928854185U) : (297406578U)))) : (var_18)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned char) ((unsigned long long int) 297406593U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_2)))) ? (((/* implicit */int) ((_Bool) arr_0 [6U]))) : ((-(2147483647)))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1]))) : (0U)))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)0))))))) : (min((max((var_3), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11968)) >> (((((/* implicit */int) var_10)) - (49))))))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (-1944120181))))) : (var_2)))) ? (max((((/* implicit */unsigned long long int) 3997560724U)), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_18) : (((/* implicit */unsigned long long int) 0U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) min((18446744073709551615ULL), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967295U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (11205274080269395137ULL)))))));
                    var_23 += ((/* implicit */unsigned int) 10138536074917100941ULL);
                }
                arr_10 [i_0] [8U] [i_1] = ((/* implicit */unsigned short) var_5);
                var_24 ^= ((/* implicit */_Bool) arr_1 [i_1] [i_0 - 1]);
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_0 - 1] [8U] [i_0]), (arr_7 [i_0 - 1] [i_0 - 1] [i_0])))) ? (max((((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) arr_2 [i_1] [i_1]))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) : (297406578U))))) : (((((/* implicit */_Bool) 4294967284U)) ? (33550336U) : (var_0)))));
            }
        } 
    } 
    var_25 |= ((signed char) var_5);
}
