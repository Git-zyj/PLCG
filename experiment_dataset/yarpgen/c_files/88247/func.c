/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88247
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
    var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) max((3602869696517412332LL), (((/* implicit */long long int) (unsigned char)214))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((~(((((/* implicit */_Bool) 13738661407649248592ULL)) ? (4708082666060303023ULL) : (13738661407649248592ULL)))))));
    var_16 = max((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_12)) ? (4708082666060303024ULL) : (4708082666060303024ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_10))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0] [(unsigned char)10]))) >= (((((/* implicit */_Bool) 69766126051690870LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55006)) ? (-2987652384486182244LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) : (min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (13738661407649248592ULL)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) arr_4 [(signed char)4]);
            arr_7 [i_0] &= ((/* implicit */unsigned long long int) ((int) arr_3 [i_0]));
        }
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned short) max((arr_3 [i_0]), (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-2987652384486182244LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))))));
            var_19 = ((/* implicit */unsigned int) 8567741816081196346ULL);
            var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) max((arr_4 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_2])))))) << (((((((/* implicit */_Bool) max((8567741816081196346ULL), (((/* implicit */unsigned long long int) (signed char)7))))) ? (arr_2 [i_2]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24121))) & (13738661407649248592ULL))))) - (6647145952158702967ULL)))));
        }
    }
    for (short i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
    {
        var_21 = ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (arr_3 [i_3]) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_3] [i_3])) << (((((/* implicit */int) var_1)) - (37835))))))));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_3] [i_3]))))) : (((unsigned int) max((arr_3 [1U]), (var_14))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (unsigned short)64217))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) 8743138926818122059LL);
        var_25 ^= ((/* implicit */long long int) (-(((unsigned long long int) -1890424541))));
        var_26 -= ((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1)))));
    }
}
