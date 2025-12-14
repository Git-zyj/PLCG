/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98598
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) (signed char)-10))));
        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) <= (14197049486837579383ULL)));
    }
    for (unsigned int i_1 = 3; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1 + 2] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)228)))) <= (((/* implicit */int) arr_2 [5U]))));
        var_16 = ((/* implicit */unsigned int) (~(min((min((((/* implicit */int) arr_0 [i_1] [(short)14])), (var_12))), (((/* implicit */int) arr_3 [i_1 - 3] [i_1 + 2]))))));
        var_17 = ((/* implicit */short) (~(((((((/* implicit */int) var_11)) + (((/* implicit */int) var_3)))) + ((-(((/* implicit */int) arr_0 [(signed char)8] [(short)14]))))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((min((((/* implicit */int) ((short) arr_3 [i_1] [i_1]))), (((((/* implicit */_Bool) 4249694586871972235ULL)) ? (((/* implicit */int) arr_1 [8])) : (((/* implicit */int) arr_2 [i_1])))))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)8)), (arr_1 [(short)0])))))))));
    }
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) var_1))))));
    var_20 = ((/* implicit */unsigned int) 1615553450729217415ULL);
}
