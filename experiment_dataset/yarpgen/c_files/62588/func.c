/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62588
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
    var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) var_15)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) | (((long long int) (unsigned short)14807)))));
    var_20 = ((/* implicit */unsigned short) ((((((unsigned long long int) (unsigned char)7)) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14817))))) != (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (unsigned char)109)) >> (((((/* implicit */int) (unsigned short)24504)) - (24501)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned char)8)))) ? (((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) + (3131))))) : (arr_2 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)64886)) ? (((/* implicit */unsigned int) 1289263885)) : (805236857U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)124)))) : (((((/* implicit */int) (unsigned char)89)) % (((/* implicit */int) var_3)))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned char)8)))) ? (((((/* implicit */int) var_3)) >> (((((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) + (3131))) + (15612))))) : (arr_2 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)64886)) ? (((/* implicit */unsigned int) 1289263885)) : (805236857U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)124)))) : (((((/* implicit */int) (unsigned char)89)) % (((/* implicit */int) var_3))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)41032)) / (((/* implicit */int) (unsigned char)110))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_5)))));
    }
    var_21 = ((/* implicit */unsigned char) ((max((((int) (unsigned char)171)), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_16)))))) % (((/* implicit */int) (signed char)41))));
    var_22 = ((/* implicit */unsigned char) min((((min((var_4), (((/* implicit */int) (unsigned short)7680)))) * (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-15148)))))), (((/* implicit */int) ((_Bool) 7LL)))));
}
