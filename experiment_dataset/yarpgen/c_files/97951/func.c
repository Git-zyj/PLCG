/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97951
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
    var_19 = ((/* implicit */int) var_17);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1955212394)) ? (var_8) : (((/* implicit */unsigned int) (-(((/* implicit */int) min(((signed char)-53), (((/* implicit */signed char) (_Bool)0))))))))));
    var_21 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) (short)8204)), (var_11)))))));
        var_23 = max((arr_0 [i_0]), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_1 [i_0]))))));
        var_24 ^= ((/* implicit */short) ((signed char) min((var_16), (((/* implicit */unsigned long long int) var_6)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))) * (var_11)));
                        var_26 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)5676)))) || (((/* implicit */_Bool) (unsigned short)5571))));
                        var_27 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_5)), (min((arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                        var_28 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (arr_6 [i_3])))) ? (min((((/* implicit */unsigned long long int) (signed char)112)), (14597349649632656366ULL))) : (max((arr_7 [6] [6] [i_2 - 1] [i_3]), (var_11)))))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-20)) ? (3393803400506321365LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)118)))));
                    }
                    var_30 = ((/* implicit */short) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) arr_7 [i_1 + 4] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                }
            } 
        } 
    }
}
