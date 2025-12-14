/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61936
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) var_5);
        var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)35168)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) 3173505680805011240ULL)) ? (-2141768930) : (var_6)))))), (max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (-848530024) : (((/* implicit */int) (short)26766)))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_16 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!((_Bool)1))), (arr_0 [i_0 + 2]))))) : (((min((13900599139842937587ULL), (var_0))) ^ (min((((/* implicit */unsigned long long int) arr_4 [i_0])), (var_0)))))));
            var_17 = ((/* implicit */_Bool) var_9);
        }
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_18 -= ((/* implicit */_Bool) 558045522U);
            var_19 = ((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_0 + 1]));
            var_20 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_9)), (var_12))), (((/* implicit */unsigned long long int) ((arr_7 [(_Bool)1] [i_2] [i_0 + 1]) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) arr_7 [i_2] [i_0 - 1] [i_0 + 2])))))));
            var_21 &= ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_9)))), ((+(((/* implicit */int) arr_3 [i_0 + 1]))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) ^ (max((((/* implicit */int) (unsigned char)207)), (1239374661)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_3 [i_0]), (var_10))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) arr_2 [20ULL])))))))))))));
        }
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 9113580042105974196LL)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)207)))))))) << (((((/* implicit */int) (short)-14)) + (44)))));
        var_24 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_25 = ((/* implicit */_Bool) (-(var_7)));
    var_26 &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)30367))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_4))))));
}
