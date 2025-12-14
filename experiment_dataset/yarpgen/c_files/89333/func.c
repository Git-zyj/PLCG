/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89333
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
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_9 [(signed char)12] [(short)13] [i_2] = ((/* implicit */_Bool) (signed char)-47);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) 4258285600121175823ULL))));
                        var_12 ^= ((/* implicit */int) max((14188458473588375793ULL), (((((/* implicit */_Bool) arr_8 [i_1 + 1])) ? (4258285600121175822ULL) : (((/* implicit */unsigned long long int) 8796093022208LL))))));
                        var_13 = (-(min((((/* implicit */unsigned long long int) arr_8 [i_2])), (((((/* implicit */_Bool) arr_0 [10ULL])) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (14188458473588375795ULL))))));
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((_Bool) (_Bool)0)))));
                    }
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_15 ^= ((/* implicit */int) ((long long int) arr_2 [i_1]));
                        var_16 &= ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 2] [i_0 - 1])) ? (14188458473588375800ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_1 - 2] [i_4])))) >> (((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 2] [i_4])) ? (4258285600121175823ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))))) - (4258285600121175794ULL)))));
                        arr_16 [i_0] [(_Bool)1] [i_2] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) -1833522032))), (var_4)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 3) 
                    {
                        var_17 *= arr_3 [i_5 - 1];
                        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775780LL)) ? (14099972803856789908ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
                        arr_21 [i_5] [i_5] = ((/* implicit */signed char) ((short) 0U));
                    }
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */_Bool) 0ULL);
    var_20 = ((/* implicit */int) 10ULL);
    var_21 += var_4;
    var_22 = ((/* implicit */int) max((var_4), (((/* implicit */unsigned long long int) var_8))));
}
