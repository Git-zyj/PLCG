/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6601
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
    var_14 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) 1213217738U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_4)) < (3081749539U))))) : (((((/* implicit */_Bool) (unsigned short)45827)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))) : (14485765408222558090ULL))))) ^ (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_3 [i_0] [i_0])) | (((/* implicit */int) var_6)))))))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 2] [i_2]))) : (3081749558U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 3])) >= (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_2 [i_1 - 3] [i_2])));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1213217719U), (arr_0 [i_3 + 1] [i_2 - 3])))) ? (((((/* implicit */_Bool) arr_0 [i_3 - 2] [i_2 + 1])) ? (arr_0 [i_3 - 2] [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_3 + 1] [i_2 - 2]))))));
                            var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))), (min((min((((/* implicit */unsigned long long int) 3533589330U)), (5859450719940745909ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (unsigned char i_4 = 4; i_4 < 11; i_4 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1213217743U) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6858))) : (1213217732U)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62))) : (arr_11 [i_4] [i_4 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (var_12) : (1213217732U)))) ? (3081749545U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4]))))))));
        var_21 = 1213217737U;
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_4] [(unsigned char)2]))) >= (3081749533U)))), (3111896590U)))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 |= ((/* implicit */long long int) ((var_12) > (((/* implicit */unsigned int) ((int) 18446744073709551613ULL)))));
        var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [1ULL] [i_5]))) : (3081749558U))))), (((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) -1732849805)) : (arr_12 [i_5] [i_5])))));
    }
}
