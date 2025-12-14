/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56642
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
    var_15 *= ((/* implicit */unsigned char) min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) (~((+(var_5))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)24293))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_10 [19ULL] [i_1] [i_3] [i_3] = ((/* implicit */signed char) var_7);
                        arr_11 [i_0] [9U] [i_0] = ((/* implicit */signed char) (unsigned char)127);
                    }
                }
            } 
        } 
    } 
}
