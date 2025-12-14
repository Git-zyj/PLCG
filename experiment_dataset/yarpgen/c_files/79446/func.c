/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79446
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
    var_11 = ((/* implicit */unsigned char) (~(var_1)));
    var_12 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) var_7)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (!(((/* implicit */_Bool) 1956112544))))))));
                    arr_8 [i_0] [1ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)51)) ? ((-((-(((/* implicit */int) (unsigned char)71)))))) : ((+(((/* implicit */int) max(((signed char)0), ((signed char)62))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (signed char)-16))) ? (((((/* implicit */int) (signed char)-11)) | (((/* implicit */int) (short)-32739)))) : (((/* implicit */int) ((_Bool) (signed char)-49)))));
                }
            } 
        } 
    } 
}
