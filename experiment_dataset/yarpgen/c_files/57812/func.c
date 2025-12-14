/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57812
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (~(((arr_1 [(unsigned char)21] [(unsigned char)21]) ^ (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) var_8)))));
                        var_22 ^= ((/* implicit */unsigned char) 13925412019368226009ULL);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) var_4);
    }
    var_24 = var_15;
    var_25 = ((/* implicit */unsigned long long int) (+((+(((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (signed char)-108))))))));
}
