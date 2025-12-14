/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74180
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
    var_11 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */int) max((var_12), (((int) ((unsigned int) -247756326)))));
                            var_13 = ((unsigned char) ((_Bool) 247756332));
                            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1601836212)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12095)))))));
                            var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)14)) ? (-247756326) : (((((/* implicit */_Bool) (unsigned char)240)) ? (-247756332) : (((/* implicit */int) (unsigned char)18))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) ((_Bool) -247756333));
            }
        } 
    } 
}
