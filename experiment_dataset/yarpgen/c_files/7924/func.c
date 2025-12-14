/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7924
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
    var_10 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
    var_11 = (~(((((/* implicit */_Bool) ((var_1) ? (var_7) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-17406))))) : (var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [(unsigned short)8] = (+((+(((/* implicit */int) (short)-17420)))));
                            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_1 - 2] [i_3 - 2])))))));
                            arr_11 [3ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_8 [(_Bool)1] [4ULL] [(unsigned char)2] [i_3 - 2]))) ^ (((((/* implicit */int) arr_8 [i_3 - 1] [i_3] [i_3 - 2] [i_3 - 2])) | (((/* implicit */int) arr_8 [i_3] [i_3] [(unsigned short)6] [i_3 - 2]))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-17396), (((/* implicit */short) (unsigned char)9))))) ? (((((/* implicit */_Bool) (unsigned short)37612)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) | (2147483647)))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)27924))));
}
