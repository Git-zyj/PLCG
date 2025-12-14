/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90222
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
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        arr_4 [(signed char)11] |= ((/* implicit */unsigned int) arr_0 [(_Bool)1]);
        arr_5 [i_0] [i_0] |= ((/* implicit */unsigned short) var_11);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_12 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [8LL] [i_2]))));
            arr_11 [i_2] = ((/* implicit */unsigned int) (-(arr_6 [i_1])));
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_1))));
        }
        var_14 += ((/* implicit */unsigned char) (~(arr_6 [i_1])));
    }
    /* vectorizable */
    for (signed char i_3 = 4; i_3 < 9; i_3 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_3 - 2])) ? ((-(6486532053966436892LL))) : (((/* implicit */long long int) (+(var_4))))));
        var_16 += ((/* implicit */unsigned char) (+(var_5)));
        var_17 *= ((/* implicit */unsigned char) var_10);
        arr_15 [i_3 - 2] = ((/* implicit */unsigned long long int) var_3);
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_3 - 2]))));
    }
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_8))))) ? (max((((/* implicit */long long int) 3831007654U)), (6486532053966436892LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((var_6) - (2985610304326821740LL)))))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)30297))))) : (463959648U))))));
    var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (var_1)))))) || (((/* implicit */_Bool) max(((+(var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) var_9))))))))));
}
