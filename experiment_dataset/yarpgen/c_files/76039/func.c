/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76039
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
    var_15 = ((/* implicit */_Bool) 34085);
    var_16 = var_1;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(-34085)))) - (min((((/* implicit */unsigned long long int) var_5)), (arr_1 [12ULL] [i_0]))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_2] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned char) ((long long int) arr_3 [i_0 - 1] [i_0 - 1]));
                    var_18 = ((/* implicit */signed char) (_Bool)1);
                }
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23463))) == (16789755925501043104ULL)));
}
