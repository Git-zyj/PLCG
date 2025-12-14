/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68245
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) ((unsigned long long int) (unsigned char)3));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(31)));
            var_15 = (~(((/* implicit */int) (_Bool)1)));
            var_16 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1] [18]))))) - (((var_7) / (((/* implicit */long long int) arr_0 [i_0]))))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_17 = (~(10077686667504622923ULL));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8)))))) + (12648636278716142222ULL));
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) var_6))) % (arr_1 [(_Bool)1] [i_2])))));
                var_19 = ((/* implicit */signed char) arr_3 [i_0 - 1] [i_2] [i_3]);
            }
        }
        var_20 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_0 [i_0 + 3])), (((var_8) + (((/* implicit */unsigned long long int) arr_0 [i_0 + 3]))))));
    }
    var_21 = var_8;
}
