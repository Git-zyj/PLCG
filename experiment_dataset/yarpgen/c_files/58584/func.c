/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58584
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) (unsigned short)3)) % (((/* implicit */int) (signed char)-120)))) >= ((-(12)))))) - (((((/* implicit */_Bool) var_1)) ? ((-(arr_3 [i_1]))) : ((+(arr_3 [i_1])))))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)8)) | (20))) >> (((((arr_2 [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) - (1698090925107987794ULL)))))) ? ((-(12))) : ((+(-10)))));
                }
                var_14 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(1880298728)))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (short)27545))))) : (((((/* implicit */_Bool) var_9)) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
}
