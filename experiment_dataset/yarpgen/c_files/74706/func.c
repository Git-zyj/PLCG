/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74706
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((unsigned char) ((2124619680) - (((/* implicit */int) (short)24576)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(3330168361934751143LL)));
    }
    for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) ? (arr_6 [i_1] [i_1]) : (var_3))) >= (arr_6 [i_1 - 1] [i_1 - 3])))))));
        arr_8 [i_1] = ((/* implicit */int) ((unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) >= (var_7)))), (var_3))));
        var_12 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_4 [i_1 + 1])), (var_3))) & (((/* implicit */int) ((unsigned char) (-(var_9)))))));
    }
    for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 2])) ? (((/* implicit */int) arr_9 [i_2 + 3] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 2]))))), (min((min((((/* implicit */unsigned long long int) arr_10 [i_2])), (7ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) arr_10 [i_2])))))))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((short) 2120714765)))));
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            var_15 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)-68)) - (((/* implicit */int) arr_12 [i_3 - 1] [8U]))))));
            var_16 *= ((/* implicit */signed char) -669945324);
        }
        var_17 = ((((/* implicit */_Bool) arr_12 [i_2] [(signed char)18])) ? (((((/* implicit */int) (signed char)-5)) * (((/* implicit */int) (unsigned char)22)))) : (((((/* implicit */int) var_4)) % (((/* implicit */int) arr_12 [i_2 + 3] [14ULL])))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) arr_9 [i_2] [i_2]))));
    }
    var_19 &= ((/* implicit */int) (((~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 17014104205910335938ULL))))))) < (((/* implicit */int) (short)-4980))));
}
