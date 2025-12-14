/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98310
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
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (_Bool)0));
        arr_3 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (536349137547007940ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 6058946134933502670LL)) : (6239748268097989333ULL))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) var_4)) : (2147483647))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
                    var_15 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) var_8))) > (((unsigned long long int) (-2147483647 - 1)))));
                    var_16 = ((/* implicit */unsigned char) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1 + 1]))));
                }
            } 
        } 
    }
    var_17 = ((((/* implicit */_Bool) (~(var_13)))) || (var_7));
    var_18 = (+(var_0));
    var_19 = ((/* implicit */unsigned long long int) (((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) (signed char)71)) >= (((/* implicit */int) (_Bool)1))))) - (1))))) <= (((/* implicit */int) ((((12206995805611562282ULL) > (((/* implicit */unsigned long long int) var_13)))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (var_13)))))))));
}
