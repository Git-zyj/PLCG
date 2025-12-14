/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99256
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_0] [i_2 + 1] = arr_3 [i_0];
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2 + 1] [i_0] [i_4 + 1] [i_4 + 1] = ((/* implicit */signed char) (_Bool)1);
                                var_20 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5215920115136544048ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : (3915022319U));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (long long int i_6 = 3; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 1] [2ULL] [i_0 - 1]);
                                arr_23 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [(_Bool)1] [i_6] = ((/* implicit */signed char) arr_18 [i_0 - 1] [i_1 - 1]);
                                arr_24 [i_0] = ((/* implicit */signed char) min((379944991U), (((/* implicit */unsigned int) (_Bool)1))));
                                var_22 = ((/* implicit */long long int) (-(arr_20 [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
}
