/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56037
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
    var_16 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_17 &= ((/* implicit */unsigned long long int) ((_Bool) 1890981982));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1516177235512375613LL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)255))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 4; i_3 < 8; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_19 += (((_Bool)1) ? (((/* implicit */unsigned long long int) 1076463479)) : (var_1));
                            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_3 - 4]))));
                        }
                        arr_14 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned short) arr_7 [i_3] [i_1]);
                    }
                } 
            } 
        } 
    }
    var_21 = var_10;
    var_22 = ((/* implicit */int) ((unsigned int) (short)-11634));
}
