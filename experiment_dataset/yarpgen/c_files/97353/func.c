/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97353
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
    var_10 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */int) ((short) (-2147483647 - 1)));
                var_12 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned short) (unsigned short)62275)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned int) ((unsigned long long int) (short)24525));
                    var_14 = ((/* implicit */_Bool) max((var_14), (((_Bool) ((_Bool) (_Bool)0)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    arr_11 [i_0] [12] [i_3] [i_3] = ((unsigned int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_15 = ((unsigned int) (signed char)49);
                        var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_17 = 2432382009U;
                        var_18 = ((/* implicit */short) 495848841);
                        var_19 = ((signed char) 1918317836U);
                    }
                    for (signed char i_5 = 3; i_5 < 23; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */short) (signed char)54);
                        var_21 = ((/* implicit */int) ((unsigned char) 2389423401U));
                        arr_18 [i_5] [i_1] [3LL] = ((unsigned long long int) 4294967295U);
                    }
                }
            }
        } 
    } 
    var_22 = ((unsigned int) var_2);
}
