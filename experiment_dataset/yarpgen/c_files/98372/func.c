/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98372
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
    var_10 = ((((/* implicit */_Bool) 2265825449997585322ULL)) ? (2265825449997585330ULL) : (16180918623711966277ULL));
    var_11 = ((/* implicit */unsigned int) ((16180918623711966270ULL) + (2265825449997585343ULL)));
    var_12 -= ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) 0)) : (16180918623711966277ULL)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-(((/* implicit */int) var_5)))))));
                            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_15 = ((/* implicit */int) var_1);
        arr_13 [i_4] [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65533)) ? (16180918623711966277ULL) : ((-(2265825449997585354ULL)))));
    }
}
