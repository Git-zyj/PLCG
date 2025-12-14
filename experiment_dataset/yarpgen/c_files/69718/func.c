/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69718
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
    var_18 = ((/* implicit */unsigned char) var_16);
    var_19 = ((/* implicit */unsigned short) max((min((var_0), (((/* implicit */long long int) (~(693072861U)))))), (((/* implicit */long long int) (unsigned short)9519))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18014398509481983ULL)));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((+(13835058055282163712ULL))) : ((~(0ULL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) : ((+((+(3601894449U)))))))));
        var_22 = ((/* implicit */unsigned short) max((7745874631029807428ULL), (max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (max((((/* implicit */unsigned long long int) 572670598862137168LL)), (6880891505089491906ULL)))))));
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32736)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [15ULL]))) : (arr_3 [i_1])));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2482263156U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)40145))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))));
        arr_6 [(unsigned short)12] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) 84513962U)) : (0ULL)));
    }
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
    {
        var_24 -= ((/* implicit */short) var_3);
        var_25 -= min((min((var_9), (18014398509481980ULL))), (((/* implicit */unsigned long long int) (unsigned short)56733)));
        arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)128))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-41)))))));
    }
    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_13))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (-(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_3]))))), (min((var_9), (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3])))))))))));
    }
    var_28 |= ((/* implicit */_Bool) var_0);
}
