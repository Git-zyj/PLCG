/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58574
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
    var_14 = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) 9673010825411897214ULL))))))));
    var_15 = ((/* implicit */short) ((unsigned int) var_13));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)(-32767 - 1))))), (((int) arr_0 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (-1377180703240927481LL) : (((/* implicit */long long int) 254083225))))) ? (((/* implicit */int) ((signed char) 129742839U))) : (((/* implicit */int) (!(arr_0 [i_0]))))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((short) max((((/* implicit */int) arr_0 [i_0])), ((-(((/* implicit */int) var_13))))))))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1] |= var_7;
        var_17 = ((/* implicit */int) ((((/* implicit */long long int) (-(((arr_5 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))))) >= (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) arr_3 [i_1]))))), (max((((/* implicit */long long int) arr_5 [i_1])), (-1377180703240927481LL)))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_9 [8] &= ((/* implicit */signed char) var_11);
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)60)) <= (((/* implicit */int) var_2)))))))) + (((unsigned int) ((((/* implicit */int) (signed char)-110)) | (520093696))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
    {
        var_18 -= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) 520093719);
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_4 - 1])) + (arr_8 [i_4 + 1])));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4] [(signed char)10])) ? (((/* implicit */int) ((unsigned char) arr_15 [i_4]))) : (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_11 [i_4]))))));
        var_21 = ((/* implicit */unsigned int) -254083225);
    }
}
