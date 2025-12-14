/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9124
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
    var_17 = (~(max(((~(var_15))), ((~(471082089724043799LL))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((max((((var_0) + (((/* implicit */unsigned long long int) -6175630811767144339LL)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))), ((-(11094930701130315940ULL)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_2] [11]))))))));
                    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5127095857665534424LL)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((long long int) 1287745430643124279LL)) : ((+(2146435072LL)))));
                    var_20 = ((/* implicit */int) min(((+(arr_4 [i_0 + 3]))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [11LL] [i_2] [i_2])) ? (arr_4 [i_0]) : (-8606772177447135395LL)))))));
                    var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) 4065416614U))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-3538894993724913591LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42260)))))) ? (((arr_3 [i_4]) ^ (var_10))) : ((-(arr_3 [i_3])))));
                    var_23 |= ((/* implicit */unsigned int) (((-(var_16))) < (((/* implicit */long long int) max((222840361), (((/* implicit */int) (unsigned short)65535)))))));
                    var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((9223372036854775807LL), ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) -2471567053797830522LL)) ? (var_0) : (2331767352621761236ULL))) : (((/* implicit */unsigned long long int) arr_16 [i_3] [i_4] [i_5]))))));
                    arr_17 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_13))))))), (((long long int) 8433103794668228957LL))));
                }
            } 
        } 
    } 
}
