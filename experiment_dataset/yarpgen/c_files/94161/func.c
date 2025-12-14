/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94161
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) (((-(8767521840052244524ULL))) <= (((/* implicit */unsigned long long int) var_1))));
        var_13 ^= ((/* implicit */long long int) (+(arr_1 [i_0 - 2])));
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) -43165486)) % (8767521840052244524ULL))) < (((var_7) ? (8767521840052244524ULL) : (8767521840052244524ULL)))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_0 [i_1] [(unsigned char)5])))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (9679222233657307092ULL))))))) : ((+((-(8234814257264402555ULL))))));
        arr_5 [i_1] [i_1] = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6681465946024048664ULL)) ? (((/* implicit */int) (unsigned char)253)) : (678198629)))) + (11765278127685502951ULL)))));
        var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [10] [i_1])) - (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) 16742195268545249875ULL)) && (((/* implicit */_Bool) (unsigned char)72)))))))) ? (((((/* implicit */_Bool) 16742195268545249875ULL)) ? (min((16742195268545249875ULL), (((/* implicit */unsigned long long int) (unsigned short)62825)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41737))))) : (min((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)23826))), (arr_1 [i_1])))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50)))))) ? (((/* implicit */unsigned int) min((arr_3 [i_1]), (arr_3 [i_1])))) : (var_3)));
    }
    var_17 = ((((/* implicit */_Bool) min(((((_Bool)1) ? (var_1) : (var_1))), (((/* implicit */int) (_Bool)1))))) ? (((16310212406860006724ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1502454281593345121LL)) || (((/* implicit */_Bool) var_2)))))));
    var_18 &= ((/* implicit */int) var_2);
    var_19 = ((/* implicit */unsigned int) ((var_10) <= (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))))));
}
