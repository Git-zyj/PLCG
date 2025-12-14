/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72752
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
    var_19 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (var_12));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)76)))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), ((~(((((/* implicit */_Bool) min((arr_0 [i_0 - 3]), ((signed char)120)))) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))))));
        arr_2 [10ULL] = ((/* implicit */unsigned long long int) ((short) (signed char)120));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1 + 1])) - (((/* implicit */int) var_3))));
            arr_6 [i_1] [(signed char)1] = ((/* implicit */long long int) ((unsigned char) var_1));
        }
    }
    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) (signed char)-55))))))) && (((/* implicit */_Bool) min((15236570848045075775ULL), (((/* implicit */unsigned long long int) 2937793439921622641LL)))))));
}
