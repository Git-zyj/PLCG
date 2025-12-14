/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82526
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) (unsigned char)120);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned char) (((+(max((15027057416409776728ULL), (((/* implicit */unsigned long long int) -601950217)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((/* implicit */int) ((arr_8 [i_0 - 1] [i_0] [i_0] [i_0 - 1]) >= (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_6))))))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) arr_14 [i_4]);
        var_23 = ((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4] [i_4]);
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((3445576478924901229ULL) % (((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_4] [i_4]))) : (var_4)))))))))));
        var_25 ^= ((/* implicit */short) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)23919)) : (((/* implicit */int) (_Bool)1))))))))));
    }
}
