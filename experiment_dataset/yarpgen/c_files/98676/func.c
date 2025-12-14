/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98676
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
    var_13 = ((/* implicit */long long int) var_11);
    var_14 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_15 = arr_1 [i_0 + 2];
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-35)), ((short)-31035)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (2140682133U)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((4114379888U) - (1480182911U)))) < (((unsigned long long int) arr_0 [i_0]))))) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-66)) | (427815426))) + (2147483647))) << (((max((((/* implicit */unsigned int) (signed char)35)), (2814784385U))) - (2814784385U)))))) ? (((((((/* implicit */int) arr_0 [5LL])) >> (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (unsigned char)0)));
    }
    for (short i_1 = 2; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((unsigned int) arr_3 [(short)8]));
        arr_5 [i_1] [(unsigned char)15] = ((/* implicit */short) (signed char)-103);
    }
    for (short i_2 = 2; i_2 < 14; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 4; i_3 < 13; i_3 += 4) 
        {
            var_18 += (+(((/* implicit */int) ((unsigned char) (unsigned char)221))));
            var_19 = ((/* implicit */unsigned int) arr_4 [i_2]);
        }
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-9491))) == (arr_9 [i_2])))), (((short) (signed char)98))))) == ((~(((/* implicit */int) max((((/* implicit */short) arr_11 [i_2])), ((short)-19123))))))));
    }
    var_21 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)127)), ((short)26833)))), (max((((/* implicit */unsigned int) var_8)), (var_9)))))));
}
