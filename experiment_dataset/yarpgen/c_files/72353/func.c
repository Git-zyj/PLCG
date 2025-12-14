/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72353
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
    var_11 = ((/* implicit */_Bool) min((var_8), (((var_4) ? (var_6) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (7566815665426818697ULL)))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7)))))))) * (var_1)));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) ((unsigned char) var_6)))))) : ((-(max((((/* implicit */unsigned int) var_0)), (var_1)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 8; i_2 += 3) 
            {
                {
                    var_14 *= ((/* implicit */signed char) (~(((((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 1])) | (((/* implicit */int) arr_4 [i_2 - 4] [i_2 - 2]))))));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (((arr_7 [i_2] [i_1] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))))))))))));
                    var_16 = ((/* implicit */unsigned int) var_8);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((((5696287891177743012ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) | (((/* implicit */int) ((unsigned short) var_2)))));
                                var_18 ^= ((/* implicit */unsigned char) ((unsigned long long int) var_6));
                                var_19 = ((/* implicit */unsigned short) min(((+(arr_2 [i_2 - 4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10879928408282732918ULL)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (short)22903)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((signed char) (+(min((((/* implicit */unsigned long long int) arr_15 [i_7] [i_6] [i_5])), (var_8))))));
                    var_21 = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
    } 
}
