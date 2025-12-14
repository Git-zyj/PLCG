/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99011
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
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)39)) : (var_10))), (var_10))) > (((min((var_10), (((/* implicit */int) var_11)))) / ((~(var_10))))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max(((((~(var_12))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)39), ((unsigned char)211))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_0 [i_0])))))));
        arr_4 [(unsigned char)1] = (-(min((var_1), (((/* implicit */unsigned long long int) var_11)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [1U]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */short) (~(var_12)));
        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) - (arr_6 [i_1])));
    }
    for (short i_2 = 1; i_2 < 11; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (unsigned char)221);
        var_20 |= ((/* implicit */short) ((((((/* implicit */int) var_3)) < (((((/* implicit */int) (unsigned short)10775)) >> (((((/* implicit */int) (short)21171)) - (21152))))))) ? ((-(arr_9 [i_2 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2])))))));
        var_21 |= ((/* implicit */int) ((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_9))))) || (((/* implicit */_Bool) arr_6 [i_2 + 3]))))))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 11; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            var_22 = var_11;
            arr_16 [i_3] = ((/* implicit */int) ((arr_12 [i_3]) > (((/* implicit */long long int) (~(arr_9 [(_Bool)1]))))));
            var_23 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)226))));
        }
        var_24 += ((/* implicit */unsigned long long int) arr_15 [i_3] [i_3 - 1] [i_3]);
    }
    var_25 = ((/* implicit */long long int) max((var_25), (min((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) var_13))))) || (var_14)))), (min((var_5), (((/* implicit */long long int) (~(((/* implicit */int) (short)21181)))))))))));
    var_26 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) ((var_8) / (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (unsigned char)205)) ? (632084731U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
}
