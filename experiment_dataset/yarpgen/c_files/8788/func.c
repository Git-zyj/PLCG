/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8788
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
    var_13 -= ((/* implicit */unsigned int) max((((/* implicit */int) min(((unsigned char)255), ((unsigned char)0)))), ((+(((/* implicit */int) ((short) var_11)))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) (-(264115525U)));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */short) arr_8 [i_0] [i_0]);
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((3230699699U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 1] [i_1 + 1])))))) && (((/* implicit */_Bool) max((3230699699U), (((/* implicit */unsigned int) (unsigned char)255)))))));
                    }
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((264115509U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2] [i_1 + 1])))));
                    var_17 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) arr_0 [i_0])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 14482693159412088247ULL))));
}
