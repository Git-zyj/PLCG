/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59154
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_11 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            var_12 = ((/* implicit */long long int) ((int) (+(arr_2 [i_1 - 2] [i_1 - 2] [i_1 - 3]))));
            var_13 = ((/* implicit */long long int) arr_0 [i_1]);
        }
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
        {
            var_14 = arr_2 [i_0] [i_0] [i_0];
            var_15 &= ((/* implicit */short) -2894229159453520668LL);
            var_16 = ((/* implicit */unsigned char) (signed char)-69);
        }
        for (short i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_3 [i_0]), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_3]))) / (arr_2 [i_0] [i_0] [i_0])))))) * (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((int) -2894229159453520668LL)))))));
            var_18 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((arr_4 [i_0]) < (((/* implicit */int) var_5))))))))));
        }
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(max((1857657721957327110ULL), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */short) arr_7 [(short)8] [(short)8] [i_0]))))))))))));
    }
    var_20 &= ((/* implicit */signed char) var_1);
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max(((+((-(((/* implicit */int) var_10)))))), (max((((/* implicit */int) var_8)), (((((((/* implicit */int) var_7)) + (2147483647))) >> (((-2894229159453520674LL) + (2894229159453520681LL))))))))))));
}
