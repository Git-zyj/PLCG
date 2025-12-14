/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95563
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */signed char) ((((arr_1 [(unsigned char)4]) - (((/* implicit */int) arr_13 [i_3 - 1] [i_4])))) - (((/* implicit */int) (_Bool)1))));
                                var_20 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) 1152358554653425664LL)) ? (((((/* implicit */_Bool) (unsigned char)247)) ? (-1152358554653425660LL) : (1152358554653425660LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)88)))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((5040952840935384169LL) % (((/* implicit */long long int) ((/* implicit */int) (short)27193)))))) ? (((/* implicit */int) ((unsigned short) 0ULL))) : (((/* implicit */int) (signed char)31)))))));
                var_21 += ((/* implicit */long long int) 562949953420288ULL);
            }
        } 
    } 
    var_22 ^= ((/* implicit */long long int) (signed char)-22);
    var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((unsigned int) var_14))))), (-634143838824405692LL)));
}
