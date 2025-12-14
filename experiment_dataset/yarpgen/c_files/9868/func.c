/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9868
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) (unsigned char)7)), (-2202712395648930927LL))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)83))))) ? (min((6057491821672764165ULL), (((/* implicit */unsigned long long int) (unsigned char)249)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (max((5056313115248942339ULL), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (12720116853119555702ULL) : (((/* implicit */unsigned long long int) -1069185333)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)29660)) ? (((/* implicit */int) var_7)) : (var_4))), (((/* implicit */int) ((signed char) arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                                var_21 = ((/* implicit */long long int) (signed char)(-127 - 1));
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */int) (unsigned char)239);
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((unsigned short) var_8)))));
                                arr_19 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */int) ((_Bool) ((int) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) -852286115))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) var_12);
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_15);
    var_25 = ((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12))))), (var_6)));
}
