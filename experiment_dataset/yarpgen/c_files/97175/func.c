/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97175
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
    var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 81902211U)) ? (((/* implicit */int) (unsigned char)251)) : (-1348104402)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_14 *= ((/* implicit */short) ((unsigned int) (_Bool)1));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((long long int) ((unsigned char) arr_1 [i_0 - 1] [i_0 - 1]))))));
        var_16 &= ((/* implicit */unsigned long long int) max((((/* implicit */short) var_10)), (arr_1 [i_0 + 1] [i_0 + 1])));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min(((-(var_5))), (((/* implicit */unsigned long long int) arr_3 [i_1])))))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) ((16ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (89706535U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))), (((/* implicit */unsigned int) -1498867005))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30310)))))) : (max((((/* implicit */long long int) 4124623118U)), (-970560231519175438LL)))));
        var_19 = ((/* implicit */unsigned char) var_9);
        var_20 = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
    }
    for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((_Bool) (~(arr_0 [i_2 - 1])))) ? (arr_0 [i_2 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1]))) : (var_7)))))))));
        var_22 -= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) -866824496426101967LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : ((((_Bool)0) ? (2013782048U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), ((~(var_7)))));
        arr_8 [i_2 - 1] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1]))))) ? (max((8343276203125538971ULL), (((/* implicit */unsigned long long int) var_12)))) : (max((var_1), (var_1))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) 953284821U)))) ? (17248655833049604597ULL) : (((/* implicit */unsigned long long int) (-(528482304U))))));
        var_25 = ((/* implicit */unsigned int) var_0);
    }
    var_26 = ((/* implicit */unsigned int) (-(var_5)));
}
