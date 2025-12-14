/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78082
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
    var_19 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)38148))))));
            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (arr_0 [(signed char)12])))))))) % (min((((((/* implicit */_Bool) 4020674064120314449LL)) ? (-429740891383459833LL) : (3252441816623469961LL))), (min((9223372036854775807LL), (((/* implicit */long long int) (short)-29447))))))));
            arr_7 [i_0] [i_1 + 1] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))))));
            arr_8 [i_0] [i_1] |= ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0 - 2])), (var_0))))));
        }
        var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 3])) ^ (((/* implicit */int) (unsigned short)65525))))) ? (((/* implicit */int) (unsigned short)37180)) : (((/* implicit */int) ((((/* implicit */_Bool) -699323943)) && ((_Bool)1))))));
        var_23 = ((/* implicit */long long int) (+(((unsigned int) ((arr_5 [i_0] [(signed char)15] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
        var_24 = ((/* implicit */unsigned short) var_18);
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */signed char) arr_9 [i_2] [i_2]);
        var_25 = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */int) var_18)) + (2147483647))) << (((((((/* implicit */int) var_10)) + (26707))) - (6))))));
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
    {
        var_26 -= var_11;
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) (short)32767)) / (-373730993))))));
        arr_17 [6U] &= ((/* implicit */unsigned short) min((arr_15 [(unsigned short)16]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */int) arr_16 [i_3] [i_3])) : (((/* implicit */int) arr_16 [i_3] [i_3])))))));
    }
    var_28 = ((/* implicit */int) (signed char)-123);
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)76))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))));
}
