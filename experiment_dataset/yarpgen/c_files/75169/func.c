/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75169
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
    var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((signed char) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_9))))) > (((/* implicit */int) (signed char)1))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) var_16)))), ((!(((/* implicit */_Bool) 3587109966U)))))))));
    var_21 += ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned short) var_9))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((int) arr_3 [i_0 + 1] [i_0 + 1] [i_0]));
            var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]))))) : (((/* implicit */int) arr_3 [i_0 - 1] [(unsigned char)10] [(unsigned char)10]))));
            arr_7 [i_1] [i_0] |= ((/* implicit */unsigned short) ((signed char) (short)32587));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 - 1])) ^ (((/* implicit */int) arr_2 [i_0 - 2]))));
        }
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) arr_0 [i_2] [i_2]);
            var_25 = ((/* implicit */_Bool) (signed char)18);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-5876))))) & (((arr_10 [i_3 - 1] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1] [i_0 + 1])) <= (((/* implicit */int) (unsigned char)17)))))) : (((((long long int) 1738802416116135741LL)) / (((/* implicit */long long int) 1857962376U))))));
            arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((short) (signed char)-19)), (((/* implicit */short) (signed char)-120))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0] [i_0 - 2])) && (((/* implicit */_Bool) var_17)))))) : (707857347U)));
        }
        arr_14 [i_0] = ((/* implicit */unsigned char) max((((int) min((((/* implicit */int) var_9)), (arr_0 [i_0] [i_0])))), (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))))))));
    }
    var_27 = max((var_4), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)14)), (var_11))))))));
    var_28 = ((/* implicit */unsigned int) var_5);
}
