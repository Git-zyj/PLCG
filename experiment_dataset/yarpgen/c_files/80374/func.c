/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80374
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
    var_20 = ((/* implicit */_Bool) ((1796492594) | (((/* implicit */int) var_19))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_0 [i_1 + 1]), ((unsigned short)53996)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) min((var_13), (-3461606537537238042LL)))) : (min((((/* implicit */unsigned long long int) var_9)), (var_0)))))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)62)), (((((/* implicit */_Bool) (+(arr_5 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (-7466048761185426042LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6428)))))))));
                }
            } 
        } 
        arr_9 [1ULL] = ((/* implicit */unsigned char) (((!((_Bool)1))) || (((/* implicit */_Bool) ((unsigned int) arr_6 [i_0] [i_0])))));
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
    {
        arr_14 [13LL] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (short)16454))))) ? (((var_16) + (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (((((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) (unsigned char)254)) - (254)))))) ? (((/* implicit */long long int) ((unsigned int) -3291269987284344391LL))) : (min((((/* implicit */long long int) (unsigned char)17)), (var_11)))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (var_7) : (var_3)));
        var_23 = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 2147483647)) : (-6623915169843045373LL));
    }
    var_24 = (unsigned short)55444;
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-30093)) : (((/* implicit */int) (unsigned char)19))));
}
