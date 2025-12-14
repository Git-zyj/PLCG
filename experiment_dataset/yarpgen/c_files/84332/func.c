/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84332
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) (~((-(var_10)))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (-439544470034560580LL) : (min((439544470034560579LL), (((/* implicit */long long int) (_Bool)0))))));
        var_18 *= ((((((var_5) << (((arr_1 [(unsigned char)8] [(unsigned char)8]) - (1941174297))))) > (((/* implicit */unsigned long long int) -439544470034560580LL)))) ? (max((((/* implicit */unsigned long long int) ((unsigned char) var_0))), (max((0ULL), (((/* implicit */unsigned long long int) 576460752034988032LL)))))) : (18446744073709551596ULL));
    }
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (((long long int) var_11))));
        var_20 += ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_6)) : (arr_1 [8ULL] [i_1]))) < ((+(arr_0 [12ULL] [i_1])))))), (((((/* implicit */_Bool) ((unsigned short) var_12))) ? (min((arr_2 [i_1 + 2] [i_1]), (((/* implicit */long long int) 835130886U)))) : (((/* implicit */long long int) ((int) var_11)))))));
    }
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -439544470034560580LL)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((~(-5469254647030227692LL)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) (+(var_4)));
        var_23 = ((/* implicit */_Bool) var_1);
    }
}
