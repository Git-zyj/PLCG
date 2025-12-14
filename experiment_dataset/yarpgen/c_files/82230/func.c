/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82230
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */long long int) var_11)), (var_0))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+((~(min((((/* implicit */unsigned int) var_5)), (arr_8 [12ULL] [12ULL] [i_2] [i_2] [i_1] [i_0]))))))))));
                                arr_13 [i_4] [4U] [4U] [i_3 + 3] [(unsigned char)17] &= ((/* implicit */unsigned char) (+(((((((/* implicit */int) ((signed char) (signed char)-77))) + (2147483647))) >> (((((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_13)))) - (136)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */int) (unsigned short)44404)) : (((/* implicit */int) arr_6 [i_0] [1])))) ^ (((/* implicit */int) var_5))));
            }
        } 
    } 
}
