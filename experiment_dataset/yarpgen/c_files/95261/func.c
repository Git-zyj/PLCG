/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95261
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
    var_13 = ((/* implicit */long long int) -506815611);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_1] [i_1])) + (2147483647))) >> (((((unsigned int) max((((/* implicit */unsigned long long int) var_9)), (arr_5 [i_0])))) - (2741947635U)))));
                arr_7 [(signed char)9] [i_0] [14LL] = ((/* implicit */unsigned short) ((506815602) << (((((/* implicit */int) ((unsigned char) (~(550421018))))) - (229)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_12 [i_0] [i_1 - 1] [(unsigned short)14] [i_3] [i_1 - 2]), (((/* implicit */short) ((unsigned char) (short)-9520)))))) <= (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [(unsigned short)4] [i_1 - 1])) > (((/* implicit */int) ((((/* implicit */_Bool) (short)9504)) || (((/* implicit */_Bool) (signed char)66)))))))))))));
                            arr_14 [i_2] [5LL] [i_2] [i_2] = ((/* implicit */unsigned char) 15262058289685445256ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_12);
}
