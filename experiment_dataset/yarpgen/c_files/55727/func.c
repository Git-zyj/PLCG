/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55727
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 7169983226862197427LL)) && (((/* implicit */_Bool) var_6))))) ^ (((((/* implicit */int) var_6)) >> (((var_0) - (1281921845U))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = (~(((var_1) - (((/* implicit */long long int) var_9)))));
        arr_2 [i_0] = (!(((-7169983226862197428LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))));
        var_12 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (4575901179827538451ULL))) + (((/* implicit */unsigned long long int) (+(814968434971414815LL))))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (6788755575935018047ULL) : (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_2))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)221)))))));
    }
    var_14 &= ((/* implicit */unsigned int) (-((((+(var_1))) ^ (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) var_9))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((7664048227022560024LL) >> ((((-(((/* implicit */int) (_Bool)1)))) + (39))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 0U)) : (15168987386834126261ULL)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) var_0)) : (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [6U] [i_2])) ? (var_0) : (var_0))))));
            var_16 += ((/* implicit */signed char) (~(((-1805927049235824717LL) / (((/* implicit */long long int) var_4))))));
            arr_12 [i_1] [8ULL] &= ((/* implicit */_Bool) (-(0ULL)));
            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12))) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3U)) || (((/* implicit */_Bool) 4294967294U)))))) : (((var_0) | (((/* implicit */unsigned int) var_4))))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(var_9))) >= (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (2922829920U))))))) + (((((/* implicit */_Bool) ((var_5) >> (((var_1) + (5102968674555257081LL)))))) ? ((~(6U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) == (arr_14 [i_3])))))))));
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(var_4)))) ^ (((((/* implicit */_Bool) -4586462675901621173LL)) ? (arr_13 [i_3] [(unsigned char)21]) : (var_8)))))) ? (((((/* implicit */_Bool) (~(2812226584133424998LL)))) ? (((13870842893882013164ULL) - (((/* implicit */unsigned long long int) arr_14 [i_3])))) : (((/* implicit */unsigned long long int) (~(arr_0 [16U])))))) : (((/* implicit */unsigned long long int) (~((((_Bool)1) ? (var_8) : (4208862842680009180LL))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_19 = (~((-(((/* implicit */int) arr_1 [i_4])))));
        arr_20 [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_4])) ? (var_7) : (((/* implicit */long long int) var_9))))));
    }
}
