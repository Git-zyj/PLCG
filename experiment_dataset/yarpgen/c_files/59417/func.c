/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59417
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
    var_13 = ((/* implicit */unsigned int) (signed char)-27);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) (signed char)-52)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_0] [i_2] [i_1] [i_0] [(short)4] = 1046136331U;
                        arr_12 [i_0] = ((/* implicit */long long int) ((short) (signed char)-27));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0 - 1]))));
        arr_14 [i_0] = ((/* implicit */unsigned long long int) (signed char)-25);
        arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (signed char)51))) ^ (((/* implicit */int) ((unsigned short) (short)0)))));
    }
}
