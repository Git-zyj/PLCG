/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63820
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (7695399708750931194LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_16)))))))));
    var_21 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) var_5)) & (min((((/* implicit */unsigned long long int) var_18)), (3535717545933715096ULL))))) >> (((-1756046191) + (1756046241)))));
    var_22 = var_18;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0 + 2] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)92)) | (var_6)))) || (((/* implicit */_Bool) ((unsigned int) var_13)))));
        arr_4 [i_0] = ((/* implicit */_Bool) arr_0 [i_0 - 2]);
        var_23 -= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) < (var_8))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            var_24 ^= ((/* implicit */signed char) ((var_19) & (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (signed char)117)))))));
            arr_7 [i_1] = ((/* implicit */unsigned int) var_0);
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 1]))))) != (4294967295U)));
            var_26 = ((/* implicit */unsigned short) 5556608393502387725LL);
            arr_8 [i_0] = ((/* implicit */_Bool) var_9);
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */short) (-(536870880)));
        arr_14 [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_5 [i_2] [i_2]), (((/* implicit */short) arr_12 [i_2]))))), (((arr_12 [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))))));
        var_27 *= ((/* implicit */signed char) var_5);
        var_28 ^= ((/* implicit */unsigned long long int) -2067462496);
        arr_15 [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((((/* implicit */int) var_12)) | (var_6)))) | (arr_11 [i_2])))));
    }
}
