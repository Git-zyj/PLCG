/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67269
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
    var_10 |= ((/* implicit */long long int) max((var_1), (var_1)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_2]))));
                    arr_8 [i_2] = ((/* implicit */long long int) var_9);
                    var_12 = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) ((8727598557727324744ULL) >= (((/* implicit */unsigned long long int) arr_3 [i_0])))))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_11 [i_3] = var_6;
        arr_12 [i_3] = ((((8727598557727324744ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 1]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_14 ^= ((/* implicit */short) arr_9 [i_3 + 1]);
            var_15 = arr_9 [i_3 + 1];
            arr_16 [i_3 + 1] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((max((((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4))), (((/* implicit */long long int) ((signed char) var_4))))) + (59LL))) - (24LL)))));
            arr_17 [i_3] [23LL] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (arr_13 [i_3])));
            arr_18 [24LL] [24LL] |= (!(((/* implicit */_Bool) var_1)));
        }
    }
    var_16 = ((/* implicit */signed char) var_7);
    var_17 = ((/* implicit */long long int) ((((((unsigned long long int) var_3)) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_3))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) var_1)) < (((/* implicit */int) ((var_8) > (((/* implicit */int) var_0)))))))))));
}
