/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84322
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? ((+((~(3767218211156420294ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (var_6)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [11LL] = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) arr_2 [i_1] [i_2])) : (9223372036854775807LL))))) ? (var_2) : (max((3767218211156420306ULL), (((((/* implicit */unsigned long long int) var_9)) & (14679525862553131321ULL))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_13 [11ULL] [i_3] [(unsigned char)7] [(_Bool)1] [i_0] = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_3] [i_0]);
                                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1540730769)))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), ((-(3767218211156420295ULL))))) : (((arr_10 [i_3] [i_2] [i_2] [i_2] [i_1] [i_0 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 1])))))));
                            }
                        } 
                    } 
                    arr_14 [(_Bool)1] [i_1] |= max((max((14679525862553131320ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_12 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0])) != (arr_4 [i_1])))))), (((/* implicit */unsigned long long int) var_9)));
                    arr_15 [i_0 + 1] [i_0] [i_2] [i_2] = (+(max((((/* implicit */unsigned long long int) ((long long int) (unsigned short)25))), (((var_0) | (((/* implicit */unsigned long long int) arr_2 [8] [i_0])))))));
                }
            } 
        } 
    } 
    var_19 = (~(((((/* implicit */_Bool) min((3767218211156420294ULL), (((/* implicit */unsigned long long int) var_13))))) ? (max((((/* implicit */unsigned int) var_7)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))));
    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min(((unsigned short)43998), (((/* implicit */unsigned short) var_1))))) ? (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) var_3)))) : (var_5))), (((/* implicit */long long int) (_Bool)1))));
}
