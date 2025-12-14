/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90020
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
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) (short)-32757))));
                                var_11 = ((/* implicit */unsigned short) max((((((((/* implicit */int) arr_12 [(unsigned short)9] [i_2] [i_4 - 2] [i_4] [i_4] [i_4])) + (2147483647))) << (((((/* implicit */int) (short)32750)) - (32750))))), (((int) (unsigned char)213))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned int) (short)32757)) - (((/* implicit */unsigned int) ((-1905994250) + (((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-32762))) + (arr_1 [i_1])))) ? (min((arr_2 [i_1]), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned short)13] [(unsigned short)13] [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + ((+(((/* implicit */int) (short)32753)))))))));
                var_12 = ((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)5] [i_0 + 2])) ? (((/* implicit */unsigned int) -2144459265)) : (arr_7 [i_0] [13U] [i_0 + 2]))) : (((/* implicit */unsigned int) -2144459281)));
            }
        } 
    } 
    var_13 = ((/* implicit */short) 13264087246533253728ULL);
    var_14 = ((/* implicit */unsigned int) var_8);
}
