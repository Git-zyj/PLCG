/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68599
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
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
    var_20 = ((/* implicit */short) ((_Bool) var_1));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_21 = ((/* implicit */_Bool) arr_2 [11] [i_0] [19]);
            arr_6 [i_1] [i_0] = ((/* implicit */signed char) ((unsigned short) var_6));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_22 = ((/* implicit */_Bool) ((unsigned char) ((short) var_3)));
            var_23 = ((/* implicit */signed char) ((unsigned short) var_11));
        }
        var_24 -= ((/* implicit */short) var_14);
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_0 [i_0] [i_0]))));
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27810)) || (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (var_3)))))))));
        var_27 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_2 [i_3] [0ULL] [i_3]) >> (((var_3) - (7957748458939494213ULL)))))) != (arr_9 [i_3] [i_3]))))));
    }
    var_28 = ((/* implicit */long long int) var_8);
}
