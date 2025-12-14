/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56250
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_10 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2428624896092897484LL)) ? (-2428624896092897485LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) ^ (arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (arr_0 [i_0])));
    }
    var_11 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)141)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) (unsigned short)24078)) : (((/* implicit */int) (signed char)50))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) : (4294967283U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))));
    var_12 = 8700994792296430825ULL;
}
