/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64764
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + ((~(var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (((unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */int) (unsigned short)65520)) >> (((((/* implicit */int) var_4)) - (17638))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1328260515)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)730))) : (24ULL)));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_1 [i_0] [(unsigned short)4])))))));
    }
    var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_12) : (-1328260499)))) ? (((((/* implicit */_Bool) -2128870661)) ? (-221517219) : (var_12))) : (((/* implicit */int) var_4)))), (min((var_7), (((((/* implicit */int) var_2)) + (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            {
                var_18 += ((/* implicit */unsigned char) min((((var_7) - (var_7))), ((((_Bool)1) ? (((/* implicit */int) (short)22073)) : (((/* implicit */int) (unsigned char)174))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) || (var_14)));
                var_20 += ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_6 [i_1])) >> (((var_9) - (9188955329345232254ULL)))))));
                var_21 = (((((((+((~(9223372036854775807LL))))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_2])))))))) - (54182))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_1);
}
