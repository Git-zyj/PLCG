/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62145
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
    var_14 |= ((/* implicit */unsigned long long int) ((_Bool) var_10));
    var_15 = ((((/* implicit */int) var_10)) * (((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) ((unsigned char) 704469740)))))));
    var_16 &= ((/* implicit */long long int) (~(((int) ((((/* implicit */_Bool) (unsigned char)126)) || ((_Bool)1))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(arr_0 [i_0 - 1]))))));
        var_18 = ((/* implicit */long long int) (unsigned short)31744);
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) arr_2 [i_1] [i_0 - 2])) ? ((+(((/* implicit */int) arr_4 [i_1])))) : ((-(((/* implicit */int) arr_4 [i_1])))));
            arr_7 [i_1] = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_0 [i_0])))));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) (short)30987);
            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_3);
            arr_11 [i_0 + 4] [i_0 + 4] = ((/* implicit */signed char) (((-(arr_1 [i_0 - 3]))) - (arr_1 [i_0 + 4])));
        }
        var_20 = ((/* implicit */signed char) (unsigned short)65281);
    }
}
