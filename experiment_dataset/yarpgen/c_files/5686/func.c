/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5686
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-126)), (var_13)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), (var_8))))))), (((long long int) var_3))));
    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)126)))))));
    var_19 = ((/* implicit */signed char) var_0);
    var_20 = ((/* implicit */signed char) var_1);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [(unsigned short)10]);
        arr_3 [(signed char)7] &= ((/* implicit */unsigned int) (-(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((signed char) var_10)))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((unsigned long long int) arr_0 [(short)5])) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) (unsigned char)255))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(var_16)))) > (arr_0 [i_1])));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (-(1656161654)));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 127)) ? (5365559477826480548ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) arr_6 [i_1]));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [(unsigned char)7])))) & (var_4))))));
        var_22 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) var_15))))) ? (min((((/* implicit */int) (unsigned short)0)), (1656161654))) : (((/* implicit */int) var_12))))));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_23 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (var_7)))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [8ULL]))) : (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */signed char) arr_14 [20U] [i_3])))))) : ((+(13081184595883071067ULL))))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-46)), (13081184595883071070ULL)))) ? (max((var_3), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_3])))))));
        var_25 = ((/* implicit */signed char) (((((~(((/* implicit */int) var_11)))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_3])))))) - ((~(((/* implicit */int) (signed char)62))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_19 [i_3] [15LL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (-1656161655) : (((/* implicit */int) arr_15 [i_3]))))));
            arr_20 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_6);
        }
    }
}
