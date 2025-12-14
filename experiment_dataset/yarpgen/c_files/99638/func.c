/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99638
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-21821))))) ? ((~(((/* implicit */int) (unsigned short)4310)))) : (((/* implicit */int) (!((_Bool)1))))))) ? ((-(((arr_1 [(_Bool)1] [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : (var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2350327049U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_16 [(_Bool)1] [i_2] [i_0] [9ULL] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_2] [i_4]) ? (4294967295U) : (arr_12 [i_0] [5ULL] [i_1] [i_2] [i_2] [i_3] [i_4])))) : (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4])))))) ? (((((/* implicit */_Bool) 3914249824U)) ? (380717472U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-43))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [3U] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0]))) : (var_7)))) ? ((((_Bool)0) ? (3974078545U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))));
                                var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))) ? ((((!(((/* implicit */_Bool) var_7)))) ? ((((_Bool)1) ? (5584942671620337755ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4] [i_0] [i_0] [i_0])))))))) : ((((!(((/* implicit */_Bool) var_6)))) ? ((((_Bool)1) ? (arr_9 [(_Bool)1] [i_1] [i_2] [i_3] [(unsigned short)4] [i_3]) : (arr_15 [i_2] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_2])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5715)) ? (3678466125U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (~(3657855587U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1326064360688003403ULL)))))) : ((~(var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (0ULL) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) var_5)) ? (33554368U) : (662256793U))))))));
}
