/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88994
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
    var_14 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) 1528709395U)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)0))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_5))) % (arr_1 [i_0])))) + (((long long int) var_2))));
        var_15 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_0] [10LL]) ? (arr_1 [(_Bool)1]) : (arr_1 [4U]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) arr_6 [i_1] [i_1]);
        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_1] [i_1]))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) arr_7 [2ULL] [2ULL]))))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (signed char)21))) ? (max((var_6), ((+(var_6))))) : (((/* implicit */int) var_5))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((var_1) + (((/* implicit */int) (signed char)(-127 - 1)))))) : ((+(var_11)))))) ? (var_4) : (((/* implicit */long long int) var_1))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(1272931536)))))))));
    var_22 = ((((/* implicit */_Bool) (signed char)-98)) || (((/* implicit */_Bool) var_12)));
}
