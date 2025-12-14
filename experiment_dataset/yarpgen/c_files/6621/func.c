/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6621
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
    var_10 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 20U)) && (((/* implicit */_Bool) min(((short)13870), (((/* implicit */short) var_8))))))))));
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((var_1) != (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_12 -= ((/* implicit */unsigned char) (short)13870);
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [0LL])) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) arr_1 [6U])) : (max((arr_0 [i_0]), (((/* implicit */long long int) (short)13884))))))))))));
        arr_2 [i_0] = ((/* implicit */long long int) (short)13883);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_14 = ((min((arr_4 [i_1] [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1] [12U]))))))) >> (((((((/* implicit */_Bool) arr_6 [(short)2])) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) <= (((/* implicit */int) var_6))))))) + (44))));
        var_15 -= ((/* implicit */long long int) var_0);
        var_16 = ((/* implicit */signed char) min((max((((/* implicit */int) var_5)), ((~(((/* implicit */int) var_6)))))), (((/* implicit */int) arr_5 [i_1]))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2])))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2]))))), (((long long int) arr_8 [i_2]))))) ? (min((((((/* implicit */_Bool) arr_4 [2U] [2U])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_7 [i_2]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_2)), (var_5)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)13865), (((/* implicit */short) var_8)))))) : ((-(arr_4 [(unsigned short)2] [i_2]))))))))));
        var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_8 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (var_8))))))))));
    }
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) * ((~(((/* implicit */int) var_4))))))), (var_1)));
}
