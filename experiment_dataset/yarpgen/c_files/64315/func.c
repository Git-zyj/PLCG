/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64315
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))) ? ((-(var_15))) : (((/* implicit */long long int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) arr_2 [(unsigned char)18] [(unsigned char)18]);
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((unsigned short) 14855416997867917992ULL)))) / (((((/* implicit */int) ((unsigned short) var_12))) ^ (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_6)))))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 4; i_3 < 23; i_3 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 1] [1ULL])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_3])) != (arr_1 [i_3 - 1]))))) : (((arr_9 [i_3] [5ULL] [5ULL]) ? (arr_2 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) : (((int) ((((/* implicit */_Bool) var_2)) ? (var_8) : (var_7))))));
        var_22 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 2])))) >> (((((/* implicit */int) ((unsigned short) arr_6 [i_3 - 2] [i_3 - 2]))) - (51411)))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 4; i_4 < 23; i_4 += 4) /* same iter space */
    {
        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */int) arr_8 [i_4 - 3])) : (((/* implicit */int) (_Bool)0))));
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [2ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_4 - 1]))))) ? (((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */int) arr_5 [(_Bool)1] [3ULL] [i_4])))) : (((/* implicit */int) arr_13 [i_4] [i_4 + 2])));
        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_4 + 1])) ? (((/* implicit */int) arr_0 [i_4 - 4])) : ((-(((/* implicit */int) var_9))))));
    }
    var_26 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (((unsigned long long int) (!(((/* implicit */_Bool) var_14)))))));
}
