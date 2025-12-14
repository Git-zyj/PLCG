/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66018
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [4] = ((/* implicit */unsigned char) var_1);
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */int) (unsigned char)171))))) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_5))))) : ((+(((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_9)), (arr_4 [i_0] [i_1])))) ? (((/* implicit */int) arr_1 [(signed char)8])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_9))))))));
                var_13 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [7U] [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_1 - 3])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3 + 2] [i_1 + 1])))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (17592186044415LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_3 - 1] [i_2 + 2] [i_1 - 1])), (var_6)))))));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_12 [i_0] [i_0] [(_Bool)1] [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */short) max(((-2147483647 - 1)), (((/* implicit */int) (short)-1983))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : ((-2147483647 - 1)))) + (((/* implicit */int) ((unsigned short) (short)-16015)))))) ? (((/* implicit */int) var_10)) : ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) -789141061234546823LL)) || (((/* implicit */_Bool) (signed char)50))))) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_9)))))))));
    var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 0U)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_8)) : (0ULL))))), (((/* implicit */unsigned long long int) (-(max((var_4), (((/* implicit */int) var_6)))))))));
    var_18 = ((/* implicit */signed char) var_1);
}
