/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84495
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned char) var_9))))), (18446744073709551613ULL))), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)214))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3))))))))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)34), (((/* implicit */unsigned char) (_Bool)1))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)9331)), (max((var_8), (((/* implicit */unsigned long long int) 44129110)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) max((((max((var_2), (((/* implicit */int) var_4)))) / (var_2))), (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_13 += ((/* implicit */short) ((((/* implicit */_Bool) 9725183931891614404ULL)) || (((/* implicit */_Bool) ((1925957730) >> (((((/* implicit */int) (unsigned short)65529)) - (65519))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((var_6) ^ (((var_2) >> (((var_10) - (6006551316192744280ULL)))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16654588827684131011ULL)) || (((/* implicit */_Bool) (unsigned char)255))));
    }
    var_15 = ((/* implicit */signed char) var_2);
}
