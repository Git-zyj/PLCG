/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6475
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
    var_18 &= var_6;
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((var_3) != (((var_14) >> (((((((arr_0 [i_0]) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-111)) + (144))) - (31))))) - (7391990853224383208LL))))))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) (unsigned char)255)));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_15)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [(unsigned char)0])))))));
        arr_7 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)23))));
        arr_8 [i_1] = (((((~(var_3))) << ((((((~(((/* implicit */int) (signed char)32)))) + (42))) - (8))))) >= (((/* implicit */int) ((((/* implicit */int) ((var_3) > (((/* implicit */int) var_1))))) > (((/* implicit */int) (!(((/* implicit */_Bool) 5898685103892128465LL)))))))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        var_21 = ((/* implicit */signed char) var_16);
        arr_13 [i_2] [i_2 - 1] = ((/* implicit */unsigned char) (+(var_2)));
        /* LoopSeq 1 */
        for (int i_3 = 4; i_3 < 18; i_3 += 3) 
        {
            arr_16 [i_2 + 1] [i_3 + 3] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-35)))))));
            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 524288)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) : (3928333911693051909LL)))) == (12900328879906317878ULL)));
            arr_17 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) (signed char)23);
        }
        var_23 -= ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
    }
}
