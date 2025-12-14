/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93940
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [11] [i_0])))) - (11400542806391072900ULL))), (((/* implicit */unsigned long long int) ((arr_1 [i_0] [3]) >> ((((~(((/* implicit */int) (unsigned short)52805)))) + (52821))))))));
        arr_2 [i_0] = (!((!(((/* implicit */_Bool) (-(7046201267318478715ULL)))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (+(((arr_7 [i_1] [i_1] [i_2]) >> (((min((((/* implicit */long long int) arr_5 [i_1] [i_2])), (536870904LL))) - (38695LL)))))));
                var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_1] [i_2]), (((/* implicit */signed char) arr_6 [i_1] [i_1] [i_2])))))) % (((arr_3 [i_1] [(_Bool)1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))));
                arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1] [i_2]))))), (7046201267318478716ULL))), (((/* implicit */unsigned long long int) -582302725))));
                arr_9 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)16434)))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)4]))))))) | (min(((+(((/* implicit */int) var_5)))), ((+(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_4);
}
