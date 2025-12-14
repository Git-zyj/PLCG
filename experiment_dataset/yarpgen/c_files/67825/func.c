/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67825
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
    var_12 = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) var_7)));
    var_13 = (signed char)-1;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((/* implicit */int) (signed char)9)) / (arr_4 [10LL] [i_1 + 3] [i_0] [i_1 + 4]))) / (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [(unsigned short)7] [i_0])) >= ((-(((/* implicit */int) (short)6282))))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_4) & (((/* implicit */int) var_6)))) / (((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 1] [i_2]))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)57010)) >> (((((/* implicit */int) var_5)) - (27943))))))) : (min((((((/* implicit */int) var_1)) * (((/* implicit */int) arr_3 [i_0] [i_0] [i_4])))), (((/* implicit */int) (_Bool)1))))));
                                var_16 *= ((/* implicit */short) var_5);
                                var_17 = ((/* implicit */long long int) (((+(((/* implicit */int) var_2)))) >> (((((/* implicit */int) (unsigned char)146)) - (139)))));
                                var_18 = ((/* implicit */int) min((((arr_9 [i_1 + 1] [i_2 - 2] [i_3]) * (arr_9 [i_1 + 1] [i_2 - 2] [i_3]))), (((((unsigned long long int) (unsigned short)0)) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_1]))) + (-1592840948596223852LL))))))));
                                var_19 |= arr_3 [i_4] [i_2] [i_1 - 3];
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2 - 1]);
                    var_21 -= ((/* implicit */long long int) 0U);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
}
