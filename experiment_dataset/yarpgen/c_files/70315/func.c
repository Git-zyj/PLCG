/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70315
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
    var_10 = var_0;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_4 + 1] = (unsigned char)208;
                                arr_15 [i_0] [i_0] [i_0] [i_3 + 3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)169)) & (((/* implicit */int) (unsigned short)26)))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((14755263209892966002ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32256)))))))))));
                            }
                        } 
                    } 
                } 
                var_11 = ((/* implicit */int) ((unsigned long long int) ((unsigned short) ((short) (_Bool)0))));
            }
        } 
    } 
    var_12 = ((unsigned short) 18446744073709551615ULL);
}
