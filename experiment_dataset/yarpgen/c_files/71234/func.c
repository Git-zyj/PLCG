/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71234
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
    var_20 = min((((/* implicit */int) (short)-1)), ((+(((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 524803351U)) ? (((/* implicit */int) (unsigned short)37468)) : (((/* implicit */int) (short)2))));
        var_22 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [2ULL] [8ULL]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [(unsigned char)3])) + (2147483647))) << (((var_5) - (18164305797744831565ULL)))))))) ? (((/* implicit */int) (short)-23333)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
        arr_4 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((18014398509481983LL) == (((/* implicit */long long int) 688966416U))))), ((-(0LL))))) >> (((((/* implicit */int) arr_3 [i_1] [i_1])) - (19092)))))) : (((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((18014398509481983LL) == (((/* implicit */long long int) 688966416U))))), ((-(0LL))))) >> (((((((/* implicit */int) arr_3 [i_1] [i_1])) - (19092))) + (7222))))));
    }
    for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_2])), (-1LL)))) ? ((-(6433476698586173206ULL))) : (((/* implicit */unsigned long long int) (-(-8938609177217997464LL)))))) == (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]))));
        arr_7 [i_2 - 1] [i_2] = ((/* implicit */unsigned int) (unsigned char)0);
    }
}
