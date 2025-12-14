/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70693
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) max((((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))), (((((/* implicit */int) (unsigned char)77)) >> (((/* implicit */int) var_5))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((arr_6 [i_0] [(unsigned short)4]), (var_11))) ? (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min((arr_3 [i_0]), (var_11))))))) ? (15004889224409582257ULL) : (((/* implicit */unsigned long long int) min((((arr_6 [i_1] [i_2]) ? (arr_7 [17ULL] [i_1]) : (((/* implicit */int) (signed char)-87)))), (((/* implicit */int) min(((unsigned short)18947), (((/* implicit */unsigned short) (_Bool)0))))))))));
                    var_16 -= ((/* implicit */unsigned char) (+(((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_2]))))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_12))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    arr_12 [i_0] [i_0] [i_3] = ((/* implicit */long long int) arr_4 [i_0]);
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_3])) >> (((((/* implicit */int) (signed char)-82)) + (112)))))) ? (((var_5) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) var_5)));
                    arr_13 [i_0] [i_3] [i_1] [i_0] = ((((/* implicit */long long int) arr_11 [i_3 + 3] [i_3 - 1] [i_3 + 3])) != (((3985164756595358942LL) >> (((((/* implicit */int) (unsigned short)18947)) - (18946))))));
                    arr_14 [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned short)46588))));
                }
                var_19 = ((/* implicit */unsigned short) var_13);
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)54)) * (((/* implicit */int) arr_6 [i_0] [3])))), (((/* implicit */int) ((var_11) || (((/* implicit */_Bool) (signed char)40)))))));
                arr_16 [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((short) (signed char)-87));
    var_21 = ((/* implicit */signed char) 1274564234098085185ULL);
    var_22 = ((/* implicit */unsigned char) ((var_13) % (((/* implicit */unsigned long long int) ((int) ((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
}
