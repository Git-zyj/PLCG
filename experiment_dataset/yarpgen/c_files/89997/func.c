/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89997
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
    var_10 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26275))) : (3773056830U))))))) / (((/* implicit */int) var_4)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) var_0));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 1]))))) % (min((var_5), (((/* implicit */long long int) arr_0 [i_0 - 1]))))));
        var_11 += ((/* implicit */int) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_0 [(unsigned short)1]), (((/* implicit */unsigned char) ((_Bool) (signed char)-91))))))));
    }
    var_12 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1875846163)))) ? (((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (var_0))), ((!(((/* implicit */_Bool) var_5))))))) : (((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (3804623696U)))))));
    var_13 = (+(((/* implicit */int) ((signed char) -9075001801118808901LL))));
}
