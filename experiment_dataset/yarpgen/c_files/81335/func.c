/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81335
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0]))));
        var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)32768)) / (((/* implicit */int) (unsigned short)39851))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) 1637037476054700248ULL);
        var_18 = ((/* implicit */int) ((long long int) arr_1 [i_1]));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_19 = ((((/* implicit */_Bool) 18324806034513689751ULL)) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))));
        var_20 = ((/* implicit */short) ((arr_8 [i_2 + 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 1])))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [12U])) ? (18446744073709551581ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) var_4)))))))) ? (((long long int) arr_4 [i_3 - 2])) : (((/* implicit */long long int) min((var_1), (((/* implicit */int) (_Bool)0)))))));
        arr_14 [(unsigned char)12] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((1570823375U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (var_10) : (((/* implicit */int) (unsigned char)14)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_8 [i_3])) >= (arr_3 [i_3])))), (((((/* implicit */_Bool) var_10)) ? (arr_10 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
        var_21 += ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 1437470689413217305LL)) && (((/* implicit */_Bool) arr_0 [i_3 - 1]))))) > (((/* implicit */int) max((arr_2 [i_3 - 2]), (((/* implicit */short) arr_0 [i_3 - 1])))))));
        var_22 = ((/* implicit */unsigned char) arr_8 [i_3]);
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 3) /* same iter space */
    {
        arr_19 [7U] = ((/* implicit */unsigned long long int) ((3211268298U) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_4])))))));
        var_23 = ((/* implicit */int) var_5);
        var_24 += ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((arr_17 [i_4 - 1]) - (1966396922U)))));
    }
    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 23; i_5 += 3) 
    {
        for (long long int i_6 = 3; i_6 < 24; i_6 += 3) 
        {
            {
                var_26 += ((/* implicit */signed char) (-(((unsigned long long int) var_10))));
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_3))));
            }
        } 
    } 
}
