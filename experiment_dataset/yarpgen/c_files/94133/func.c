/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94133
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
    var_13 = ((/* implicit */short) ((int) ((int) -4018601807360031522LL)));
    var_14 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [(unsigned short)0] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((_Bool) ((unsigned int) 4018601807360031522LL)));
                        arr_11 [i_0] = ((/* implicit */short) ((unsigned long long int) ((_Bool) arr_6 [i_3] [i_3 - 2] [i_3 + 2] [i_3 + 1])));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((unsigned int) ((long long int) ((unsigned int) var_9))));
                            arr_15 [i_1] [i_3] [i_0] [(unsigned char)3] [i_4] [i_0] [i_2] = ((/* implicit */short) ((unsigned short) ((unsigned int) ((unsigned short) var_9))));
                            var_16 = ((/* implicit */short) ((_Bool) -1LL));
                        }
                        for (int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                        {
                            arr_18 [9U] [i_1] [i_2] [i_2] [i_0] = ((long long int) ((unsigned char) (_Bool)1));
                            arr_19 [i_0 + 2] [i_1] [i_2] [i_3 + 2] [i_0] = ((unsigned int) ((unsigned char) arr_4 [i_3] [i_0] [i_3 + 1] [i_3]));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((long long int) -1LL))));
                            var_18 = ((/* implicit */long long int) ((unsigned int) 73280500U));
                        }
                        for (int i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) 1043077395535693211LL)));
                            arr_25 [i_2] [i_0] [(unsigned short)11] = ((/* implicit */unsigned int) ((unsigned short) ((_Bool) var_6)));
                            var_20 = ((/* implicit */unsigned char) ((short) ((long long int) var_6)));
                            var_21 ^= ((/* implicit */short) ((int) ((unsigned int) 4018601807360031503LL)));
                        }
                    }
                } 
            } 
        } 
        var_22 |= ((/* implicit */unsigned int) ((unsigned short) ((_Bool) (_Bool)1)));
    }
}
