/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58496
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) (unsigned short)11527);
            var_14 &= ((/* implicit */unsigned int) 274877906943LL);
        }
        var_15 ^= ((/* implicit */unsigned long long int) (_Bool)1);
        var_16 -= ((/* implicit */unsigned int) (short)32765);
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) -20LL);
        var_18 = ((/* implicit */short) 12506042546123042931ULL);
    }
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) 1048575ULL);
                                arr_22 [i_4] = ((/* implicit */unsigned long long int) (unsigned short)46550);
                                var_21 = ((/* implicit */unsigned char) (unsigned short)11527);
                            }
                        } 
                    } 
                } 
                var_22 = (unsigned char)229;
            }
        } 
    } 
}
