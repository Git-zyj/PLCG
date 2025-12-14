/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61510
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
    var_17 &= ((/* implicit */_Bool) max((max((var_12), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (443801258U)))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)31176)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [(short)12])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))) : (((var_11) ? (((/* implicit */int) arr_0 [(unsigned short)13])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (min((((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [(unsigned short)10]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)34360)) ? (((/* implicit */long long int) (+(var_13)))) : (arr_1 [(unsigned char)12] [i_0])))));
        arr_3 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) 7334682184804972766LL)))) && (((/* implicit */_Bool) 1234315268U))));
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)627)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104)))))) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [i_0])))));
    }
    for (short i_1 = 3; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) max((var_18), (arr_7 [i_1])));
        arr_8 [20] [i_1] = ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_7 [i_1])))), (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1 - 1]))))));
    }
    for (short i_2 = 3; i_2 < 21; i_2 += 4) /* same iter space */
    {
        var_19 = ((((/* implicit */_Bool) arr_10 [i_2 + 1])) ? (((((/* implicit */int) arr_9 [i_2])) ^ (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)38855)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_9 [i_2 - 2]))))) ? ((-(((/* implicit */int) arr_10 [i_2])))) : ((+(((/* implicit */int) var_4)))))));
        var_20 |= ((/* implicit */short) min((((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_10 [i_2])))) && (((/* implicit */_Bool) 5166670421247404432ULL)))), ((!(((/* implicit */_Bool) ((unsigned short) arr_6 [i_2] [i_2])))))));
        var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (5166670421247404428ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */int) arr_7 [i_2])) & (((/* implicit */int) arr_9 [i_2])))) : (((/* implicit */int) arr_9 [i_2 - 1]))))), (((((/* implicit */_Bool) (unsigned short)52173)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) : (3060652027U)))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_7)))))) ? (var_13) : ((~(((/* implicit */int) var_1))))));
}
