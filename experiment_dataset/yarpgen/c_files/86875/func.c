/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86875
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_10 = max((max((arr_6 [i_0] [i_1] [i_1 - 1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)51049)))), (((/* implicit */unsigned long long int) ((int) ((unsigned short) (signed char)-13)))));
                    var_11 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 255ULL)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))))) : (min((arr_4 [i_2]), (arr_4 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 4; i_3 < 16; i_3 += 1) 
    {
        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (((/* implicit */int) (unsigned short)44679)) : (((/* implicit */int) (unsigned char)157)))), (((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_3] [i_4] [i_5])), (arr_11 [i_3] [i_5] [i_5])))))), (((/* implicit */int) arr_9 [i_3] [14ULL] [i_5]))));
                    var_13 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_3] [(unsigned short)11] [(unsigned short)11]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3] [2ULL] [i_5])) ? (-696972480) : (((/* implicit */int) (signed char)100))))) : ((+(arr_7 [i_3]))))));
                }
            } 
        } 
    } 
}
