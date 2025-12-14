/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98010
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
    var_20 = ((/* implicit */short) var_6);
    var_21 -= ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        arr_12 [i_0] [0LL] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */int) var_19);
                        var_22 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) var_18)) == (arr_8 [i_0] [i_2]))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                    }
                    arr_13 [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_10))))) ? ((+(((/* implicit */int) arr_10 [0ULL] [i_2] [i_0] [i_0] [i_1] [i_0])))) : (((/* implicit */int) ((short) -1576846351))));
                    var_23 = ((/* implicit */unsigned int) var_11);
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (unsigned char)163))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */int) var_19);
        var_25 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))));
    }
    var_26 = ((/* implicit */unsigned short) (unsigned char)70);
}
