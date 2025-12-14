/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60419
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
    var_18 = ((/* implicit */int) min(((unsigned char)247), (((/* implicit */unsigned char) (_Bool)1))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_4 [1ULL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (min((arr_2 [(unsigned short)8]), (arr_2 [i_0])))))) != (arr_1 [i_0 - 2] [i_0 + 1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_19 = (+(arr_2 [i_0 - 3]));
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) var_10)) / (((/* implicit */int) (_Bool)1)))) - (238)))));
        }
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_21 *= ((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)0))) ? (min((max((((/* implicit */unsigned int) (_Bool)1)), (0U))), (((/* implicit */unsigned int) arr_15 [i_2 + 1] [10ULL] [10ULL] [i_3] [(_Bool)1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [(signed char)10] [(signed char)10])))));
                        arr_17 [i_0] [i_2 + 2] [i_3] = ((/* implicit */signed char) ((unsigned long long int) 846455351U));
                        arr_18 [i_4] [i_4 - 1] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        arr_22 [(unsigned short)15] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)90))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) (signed char)48))))))));
        arr_23 [(unsigned char)8] = (-(((/* implicit */int) (short)-1326)));
        var_23 = ((/* implicit */int) -3915642167813249548LL);
    }
}
