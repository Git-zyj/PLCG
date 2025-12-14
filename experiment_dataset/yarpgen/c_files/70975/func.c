/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70975
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
    var_15 *= ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned char) (-(1125899906842623LL)));
        var_17 = ((/* implicit */unsigned short) (_Bool)0);
    }
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (_Bool)1))));
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_1 [6ULL])), (((((/* implicit */_Bool) max((-209064880), (((/* implicit */int) arr_3 [i_1]))))) ? (((arr_3 [i_1]) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)30)))) : (((/* implicit */int) ((unsigned char) -8871409129511095295LL)))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */int) arr_1 [i_1])) : ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_1])) : ((+(((/* implicit */int) arr_1 [i_1]))))))));
        var_21 = ((unsigned long long int) (signed char)(-127 - 1));
        var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35704))))) ? (((int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (-8871409129511095300LL)))) : (((/* implicit */int) ((arr_6 [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))));
    }
    for (int i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        var_23 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1125899906842602LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12016))) : (7190374670885036881ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1151686104U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_2])))))))) ? (arr_0 [i_2 + 2] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned char)6])) ? (((/* implicit */int) arr_2 [(signed char)12])) : (((/* implicit */int) (short)78))))));
        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(22U))))));
        var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) -209064880)) <= (((((/* implicit */_Bool) arr_2 [16U])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 14308515184706162792ULL)) || (((/* implicit */_Bool) arr_8 [(unsigned char)8])))))) : (((unsigned int) (signed char)(-127 - 1)))))));
        arr_9 [(unsigned short)1] = ((/* implicit */signed char) ((var_6) > (((/* implicit */int) (((+(var_11))) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19)) % (((/* implicit */int) arr_1 [i_2]))))))))));
        arr_10 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [8ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (((-1125899906842609LL) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
    {
        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_3 + 3]))));
        arr_15 [i_3] |= ((/* implicit */_Bool) arr_11 [i_3] [i_3]);
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)8))));
    }
}
