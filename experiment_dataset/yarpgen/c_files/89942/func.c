/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89942
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
    var_14 &= ((/* implicit */unsigned int) var_8);
    var_15 = ((/* implicit */unsigned char) (_Bool)1);
    var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5)));
    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_9)) & ((~(((/* implicit */int) var_6)))))), (((/* implicit */int) (unsigned char)255))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) (-(var_10)));
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */signed char) var_7)))))) : (10273784956510144962ULL)))));
        arr_3 [i_0] [i_0] = (_Bool)1;
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_1])), ((unsigned short)0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_6 [i_1])))))) : ((-(-8238412328811305615LL))))) > (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_6))))))));
        var_20 = ((/* implicit */unsigned long long int) 7868643035908298362LL);
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) var_2);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)16)) >> (((((/* implicit */int) (unsigned char)101)) - (79))))))));
    }
}
