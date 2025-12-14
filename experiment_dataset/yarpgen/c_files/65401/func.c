/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65401
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
    var_11 |= ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_9))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_12 &= ((/* implicit */unsigned char) (-(arr_3 [i_0 + 1] [i_0])));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            arr_7 [i_0] [14U] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)30971)) && (((/* implicit */_Bool) arr_4 [(unsigned short)0] [i_1 + 1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)30980))));
            var_13 ^= ((_Bool) arr_1 [i_1 + 1] [i_0 - 1]);
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_5 [i_0 - 1] [i_1 - 1]));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        var_14 = ((/* implicit */int) var_1);
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned char)90))))) ? (((((/* implicit */int) (unsigned char)90)) << (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) min(((unsigned char)101), (var_8))))))) ? (((long long int) (_Bool)1)) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [(unsigned char)3] [(unsigned char)3]))))), (max((-3706447399213543627LL), (var_1))))));
    }
}
