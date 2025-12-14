/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5719
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
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */short) var_10)), ((short)-1576)));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (short)1570))));
        }
        for (short i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (min((((/* implicit */int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))), (((((/* implicit */_Bool) 9223372036854775793LL)) ? (66584576) : (((/* implicit */int) (unsigned short)65535)))))) : (max((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (short)1570)))), (((/* implicit */int) arr_4 [i_0 - 3] [i_0]))))));
            arr_8 [i_0] [(short)4] [i_2] |= ((/* implicit */unsigned short) min((6637038404463080402LL), (((/* implicit */long long int) (unsigned short)27372))));
            arr_9 [i_0 - 2] [2LL] |= ((/* implicit */short) ((((((/* implicit */unsigned int) 2134158097)) & ((+(529685883U))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2])))));
            arr_10 [i_0] = ((((/* implicit */_Bool) 2134158097)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (10054468940326714542ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))))) ? ((-(10648823444014323865ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3533208831U)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_2 - 1])) ? (2134158097) : (2134158097))), (max((((/* implicit */int) (signed char)1)), (-1250596627)))))));
        }
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        arr_20 [i_5] [i_4] [i_5] |= (unsigned char)243;
                        var_18 = ((/* implicit */unsigned long long int) var_8);
                        var_19 -= ((/* implicit */signed char) (-(31ULL)));
                        arr_21 [i_0] [i_0] [17LL] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) (unsigned char)252);
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_8))));
                    }
                } 
            } 
        } 
    }
}
