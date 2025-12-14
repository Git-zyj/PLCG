/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72825
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 += (((!(arr_0 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (max((arr_1 [i_0]), (((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1008))) : (arr_1 [i_0]))))));
        arr_2 [12LL] [i_0] = ((/* implicit */long long int) var_9);
    }
    for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) /* same iter space */
    {
        var_17 |= ((/* implicit */long long int) min((arr_5 [i_1] [i_1]), (((/* implicit */signed char) ((_Bool) 6530126052209722436ULL)))));
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) var_10))) % (arr_4 [i_1])));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (signed char)94))));
    }
    for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) var_0);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (signed char)-110))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)4]))))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_15)))))))));
        arr_9 [(_Bool)1] |= ((/* implicit */long long int) min((((((arr_4 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))))), (((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) (signed char)115))))))));
    }
    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) arr_11 [i_3]);
        var_22 = min((((unsigned long long int) (+(arr_1 [i_3])))), (((/* implicit */unsigned long long int) arr_13 [i_3])));
        var_23 = ((/* implicit */short) ((long long int) var_13));
        var_24 *= ((/* implicit */unsigned int) arr_7 [(_Bool)1]);
    }
    var_25 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_13)) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_11))))) - (((/* implicit */unsigned long long int) (-(var_10))))));
}
