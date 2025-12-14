/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55139
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) min(((+(5923581670605039340LL))), (((/* implicit */long long int) ((min((var_2), (var_12))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
        arr_4 [10ULL] &= ((/* implicit */short) 684505091);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_15)), ((unsigned char)232))))));
            var_19 = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_1])), ((unsigned short)63929))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_0)));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_2] [i_0]))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (int i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_15 [i_0] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_4 - 1] [i_0] [i_3] [i_4 - 1]))) : (17196463215960579233ULL)));
                        var_22 = arr_13 [i_0] [i_2] [i_3] [i_0] [i_4];
                        var_23 = ((/* implicit */short) ((1250280857748972378ULL) > (0ULL)));
                        arr_16 [i_4 - 1] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) == (34359738367ULL)));
                    }
                } 
            } 
        }
    }
    var_24 = ((/* implicit */unsigned short) var_1);
    var_25 ^= ((/* implicit */unsigned char) max((var_2), (((/* implicit */unsigned long long int) var_14))));
    var_26 = ((/* implicit */short) var_17);
}
