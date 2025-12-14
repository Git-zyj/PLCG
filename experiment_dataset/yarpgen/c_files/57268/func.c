/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57268
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
    var_11 = ((/* implicit */long long int) var_1);
    var_12 = ((/* implicit */unsigned long long int) var_1);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), ((unsigned char)251)))) ? (((/* implicit */int) min((var_7), (var_7)))) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_2)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12676)) | (((/* implicit */int) var_5)))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) != (1246008569))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40278)) ? (6487445716058591102ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))))) ? (9312740931381766732ULL) : (((/* implicit */unsigned long long int) 0))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)25258)), (-593656358)));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) 163148892089489861LL));
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)27729)))), (((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))))) : (((int) arr_1 [i_1] [i_1]))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))) | (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_1 [i_1] [i_1]))))) | (((/* implicit */int) arr_3 [i_1] [i_1])))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), (-163148892089489862LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            arr_13 [(unsigned short)0] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2])) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)94)))))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_2)))))));
        }
    }
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_6))));
}
