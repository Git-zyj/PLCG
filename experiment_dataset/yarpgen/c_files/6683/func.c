/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6683
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
    var_20 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_10)))) ? (min(((+(var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_17)) : (3580035324U)))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((((/* implicit */_Bool) var_9)) ? (0LL) : (((/* implicit */long long int) 4294967287U)))) : (((/* implicit */long long int) ((int) var_7))))))))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (9200613347377613831LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0])))))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */short) (_Bool)0))))) ? (((((/* implicit */_Bool) 3463690705U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_0 - 2])))))))));
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_17) == (((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */int) (unsigned char)140)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)38613)));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) 2199023255551LL);
    }
}
