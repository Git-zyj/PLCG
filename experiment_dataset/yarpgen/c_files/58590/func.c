/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58590
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
    var_11 = ((/* implicit */unsigned int) var_9);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32532)) ? (((/* implicit */int) (short)31302)) : (((/* implicit */int) (signed char)-43))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) (~(var_5)));
                            var_15 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)5347)) == (((/* implicit */int) (_Bool)1))));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (+(-1482455908))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)636)) && (((/* implicit */_Bool) (short)638))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 1; i_4 < 8; i_4 += 3) 
    {
        var_18 = ((/* implicit */int) max((var_18), (854932000)));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (((/* implicit */long long int) arr_6 [i_4 + 2] [i_4])) : (arr_3 [i_4] [i_4 - 1])));
        arr_12 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
        arr_13 [i_4] = ((/* implicit */unsigned int) (unsigned char)252);
    }
}
