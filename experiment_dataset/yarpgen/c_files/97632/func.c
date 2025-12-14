/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97632
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_6 [i_0 + 1] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) >= (arr_7 [17ULL] [17ULL] [10LL])))))))))))));
                    var_13 += ((/* implicit */unsigned short) ((min((arr_4 [i_1 + 1] [i_0 - 1]), (((/* implicit */long long int) var_2)))) % (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
                    var_14 = ((/* implicit */long long int) var_0);
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 12706887256862449962ULL))) >= (((/* implicit */int) ((unsigned short) arr_7 [i_1 + 2] [i_0 + 1] [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [3U] [i_1] = ((/* implicit */unsigned short) arr_10 [i_0 - 1] [i_1] [i_2] [i_3] [i_4 - 3] [i_2]);
                                var_16 = ((/* implicit */unsigned int) (~(((arr_7 [i_0 + 1] [i_0 - 1] [i_1 + 1]) | (var_4)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */_Bool) var_6);
    var_18 += ((/* implicit */signed char) (~((~(((/* implicit */int) var_9))))));
}
