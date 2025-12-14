/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82999
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
    var_20 = ((/* implicit */int) min((((unsigned long long int) ((((/* implicit */_Bool) (short)-20891)) ? (1ULL) : (10265090318899356492ULL)))), ((~((+(var_13)))))));
    var_21 = var_11;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */int) ((unsigned char) max((var_3), (((/* implicit */short) var_6)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 2])))))))));
        var_23 = ((/* implicit */short) (((-(((/* implicit */int) arr_0 [i_0 - 2])))) > (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 + 1])), (var_18))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_13);
    }
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) arr_1 [i_1])))));
        var_25 = ((/* implicit */int) var_16);
        arr_6 [1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) var_1)), (var_11)))))) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)221)) || (((/* implicit */_Bool) var_9))))))));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((long long int) 3016083064624952760ULL))) % (min((593916251220469894ULL), (((/* implicit */unsigned long long int) -3420547392196467317LL))))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */short) arr_0 [i_2]);
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((arr_7 [i_2]) | ((~(var_4))))) < (min(((+(((/* implicit */int) var_6)))), (max((var_1), (var_4))))))))));
        var_28 = ((/* implicit */_Bool) min((((/* implicit */int) ((((_Bool) (_Bool)1)) || (((/* implicit */_Bool) min((-1820553004730134648LL), (((/* implicit */long long int) (short)17283)))))))), (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2]))))));
        var_29 += ((/* implicit */signed char) var_4);
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */_Bool) max((var_30), ((((-(var_9))) <= (((/* implicit */unsigned long long int) min((arr_7 [i_3]), (((((/* implicit */int) arr_10 [8])) & (((/* implicit */int) arr_13 [i_3] [i_3])))))))))));
        var_31 = ((/* implicit */signed char) var_9);
    }
}
