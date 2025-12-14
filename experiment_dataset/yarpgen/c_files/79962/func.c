/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79962
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-111)) * (((/* implicit */int) ((signed char) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_1 [5U])));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((min((4362359599324539959ULL), (((/* implicit */unsigned long long int) (signed char)-2)))) < (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1]))))), (14084384474385011657ULL)));
            var_22 *= ((/* implicit */unsigned int) (-((-(arr_3 [i_1 + 1] [i_1 - 3] [i_1 - 3])))));
            var_23 -= ((/* implicit */unsigned char) var_19);
            var_24 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_4)), (((((((/* implicit */unsigned long long int) -219946867)) / (4362359599324539958ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)19802)) / (arr_3 [i_0] [i_1] [i_1 - 3]))))))));
        }
    }
    var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)205)), (14084384474385011657ULL)));
    var_26 &= ((/* implicit */long long int) min((-1476048707), (-910129996)));
}
