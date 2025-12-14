/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87845
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_4))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) / (((var_3) / (((/* implicit */int) var_8))))))) ? ((-((-(((/* implicit */int) var_12)))))) : ((((-(((/* implicit */int) (unsigned short)52771)))) * (((/* implicit */int) (unsigned char)9))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_10)))))) && ((!((!(((/* implicit */_Bool) var_10))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (!((!((_Bool)1)))));
        var_22 -= ((/* implicit */unsigned int) var_11);
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19191)) ? (10914022476595522951ULL) : (((/* implicit */unsigned long long int) min((395500264U), (((/* implicit */unsigned int) 681041970)))))))) ? (((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (arr_1 [i_1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (unsigned char)138)))))))) : ((~((~(arr_1 [i_1])))))));
        arr_5 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_16))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_8 [(unsigned char)0] [(unsigned char)0] &= ((/* implicit */int) arr_6 [i_2]);
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_3) | (((/* implicit */int) arr_6 [i_2])))) | (((/* implicit */int) min((arr_6 [i_2]), ((_Bool)0))))))) ? (((/* implicit */int) arr_7 [i_2])) : ((~(((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) arr_6 [i_2])))))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 395500272U)) || (((/* implicit */_Bool) (~(arr_9 [i_3] [i_3]))))));
        arr_12 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) -1))) != (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_11 [i_3])) : (arr_9 [i_3] [i_3]))))) ? (((((/* implicit */int) arr_7 [i_3])) >> (((((/* implicit */int) ((unsigned short) var_0))) - (58453))))) : (((/* implicit */int) ((_Bool) (!((_Bool)0)))))));
    }
}
