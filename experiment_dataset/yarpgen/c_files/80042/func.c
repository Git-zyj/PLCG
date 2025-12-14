/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80042
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
    var_10 = ((/* implicit */long long int) min((var_10), (var_3)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((long long int) 18415156673275869338ULL));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) -1523334547586661035LL));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 - 1])) | (((/* implicit */int) (signed char)-98))));
        arr_7 [i_1 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))) : (12ULL)));
        arr_8 [17U] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5155845926546051730ULL)))))) : (8063229059127160233ULL)));
        var_11 = ((/* implicit */long long int) (+(8742459058770363489ULL)));
    }
    var_12 = ((/* implicit */unsigned char) ((long long int) var_7));
}
