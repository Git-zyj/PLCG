/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73062
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */int) var_5);
                        var_15 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) << (((((((/* implicit */int) (short)-32521)) + (32541))) - (6))))))));
                        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_17 = ((arr_6 [i_0] [i_1] [i_2] [i_2]) & (var_5));
                        var_18 &= ((/* implicit */int) ((unsigned long long int) (short)32520));
                    }
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) min(((short)-32521), ((short)-32521)));
                    var_19 = ((/* implicit */int) ((unsigned short) ((_Bool) (+(arr_9 [i_2] [i_2] [i_1] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */long long int) var_11);
}
