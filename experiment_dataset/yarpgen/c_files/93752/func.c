/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93752
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
    var_15 = ((/* implicit */_Bool) (unsigned char)255);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_6 [i_0] = (-9223372036854775807LL - 1LL);
            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            arr_7 [i_0] [0ULL] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))) ? (((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        }
        var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)128))))) != (min((2143289344ULL), (((/* implicit */unsigned long long int) (unsigned char)24)))))))) / (((arr_15 [i_2] [i_4 + 2] [i_2]) ^ (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)53)))))))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) % (-956234686177096577LL)))))))));
                }
            } 
        } 
        arr_17 [i_2] = ((/* implicit */long long int) min(((unsigned char)80), (((/* implicit */unsigned char) ((arr_8 [i_2]) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)17873))))))));
        var_21 = min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_10 [i_2])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2]))))));
    }
}
