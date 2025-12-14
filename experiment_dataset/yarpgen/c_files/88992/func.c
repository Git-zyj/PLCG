/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88992
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_6 [3U] [6ULL] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned short)56976);
                    var_20 = ((/* implicit */signed char) (+(((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)225)), (var_7)))) * ((-(((/* implicit */int) var_5))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_9 [i_2] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)32159))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32159))) * (2111255450U)))));
                        arr_10 [i_0] [i_3] [13] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_3]) - (arr_1 [i_1])))) ? (((/* implicit */long long int) (-(var_19)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32159))) : (arr_1 [i_2])))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-604)) - (((/* implicit */int) (short)15360))))), (var_10)));
}
