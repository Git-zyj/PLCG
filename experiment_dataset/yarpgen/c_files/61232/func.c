/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61232
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!((_Bool)1)))), (var_11)))) || (((/* implicit */_Bool) (((+(var_3))) / (var_3))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (1784026151U)))) ? (((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (2510941145U)))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((min((4903367331770704332LL), (((/* implicit */long long int) arr_1 [i_0 + 3])))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)16])) ? (min((1784026151U), (((/* implicit */unsigned int) (unsigned char)188)))) : (2229508327U)))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)109)) && (((/* implicit */_Bool) arr_6 [(_Bool)1] [(_Bool)1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1]))) : (((var_7) | (var_3)))));
        arr_8 [i_1 + 1] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_18 = ((/* implicit */signed char) var_8);
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)-11))) ? (((/* implicit */int) arr_10 [i_2])) : (((((/* implicit */int) arr_10 [i_2])) / (((/* implicit */int) (signed char)-26))))));
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (unsigned short)24726);
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned char) 4903367331770704324LL))) ? (4903367331770704334LL) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))))))));
        arr_14 [i_3] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_3]))));
        var_22 &= ((/* implicit */unsigned int) arr_0 [i_3] [i_3]);
    }
}
