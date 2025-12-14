/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86357
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
    var_16 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_8))))));
    var_17 *= ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
            arr_7 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_10)), (var_5))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92)))));
            var_18 = ((/* implicit */int) ((max((((var_15) & (((/* implicit */long long int) ((/* implicit */int) var_10))))), (arr_2 [i_0 + 1] [10ULL]))) == (max((max((((/* implicit */long long int) var_9)), (var_5))), (((var_7) & (((/* implicit */long long int) ((/* implicit */int) (short)-5796)))))))));
        }
        arr_8 [i_0 + 1] = ((/* implicit */unsigned char) (~((-((+(((/* implicit */int) var_14))))))));
        arr_9 [i_0 - 1] = (~(var_12));
        arr_10 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_3))))) && (((var_1) == (5529796370732692214ULL)))))) : ((((((~(((/* implicit */int) arr_4 [i_0 + 1])))) + (2147483647))) << (((((/* implicit */int) var_10)) - (47612)))))));
    }
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) /* same iter space */
    {
        arr_15 [i_2] [i_2] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_7)) * (5529796370732692207ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (3635313961738072036ULL)))) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)161)) || (((/* implicit */_Bool) var_8))))))))));
        var_19 ^= ((/* implicit */long long int) ((unsigned short) (-(((var_5) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_20 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) min((arr_14 [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_1 [i_2 + 1]))))) ? (((/* implicit */unsigned long long int) var_12)) : ((-(3635313961738072036ULL))))));
    }
}
