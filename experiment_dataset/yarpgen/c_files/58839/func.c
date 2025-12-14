/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58839
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))));
        var_18 = ((/* implicit */short) ((long long int) arr_1 [i_0] [i_0]));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])));
        arr_7 [i_1] = ((/* implicit */long long int) ((var_8) > (arr_3 [i_1])));
    }
    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)156)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_2)))))))));
    var_21 = (+(((((unsigned long long int) var_8)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_7))))))));
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) max((var_13), (((/* implicit */long long int) var_14))))))));
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)156))) ? (((int) (unsigned char)156)) : (((/* implicit */int) var_1))))))))));
}
