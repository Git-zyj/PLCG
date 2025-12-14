/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97762
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) (_Bool)1)))));
                    arr_7 [i_2] [8] [i_0 - 1] [i_0 - 2] = ((/* implicit */unsigned short) ((signed char) (unsigned short)0));
                    var_17 = ((/* implicit */unsigned int) (signed char)-126);
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        var_18 |= ((/* implicit */int) 14640450906826061024ULL);
                        var_19 = ((/* implicit */int) min((var_19), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)2)))))))));
                        var_20 = (-(((unsigned long long int) 1045004406U)));
                        arr_10 [i_2] [i_3] [i_0 - 1] = ((unsigned short) (-(((/* implicit */int) (unsigned short)13902))));
                        arr_11 [i_3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)0))))));
                    }
                    var_21 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) (unsigned short)65526)))));
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */unsigned char) var_14);
}
