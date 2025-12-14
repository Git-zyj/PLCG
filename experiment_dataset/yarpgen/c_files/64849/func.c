/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64849
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
    var_19 = ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned short)65535)));
    var_20 &= ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_21 += ((/* implicit */long long int) min((max((((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)65533)))), (((((/* implicit */int) (signed char)27)) ^ (((/* implicit */int) var_11)))))), (((/* implicit */int) ((arr_0 [i_0] [i_0 + 1]) > (((arr_0 [i_0] [i_0 + 3]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)16]))))))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((((((/* implicit */_Bool) 8436649808304581224LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((-5585604838538329355LL) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (((var_14) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))) / ((-(arr_0 [i_0] [i_0])))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_0 [i_0] [i_0 + 4]))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0 + 1])))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)12)))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned short)3386)) < (((/* implicit */int) arr_5 [i_1])))) && (((/* implicit */_Bool) (unsigned char)216))))) : (((((/* implicit */_Bool) ((1697771260361105759LL) >> (((((/* implicit */int) var_8)) - (62)))))) ? (((((((/* implicit */int) var_7)) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_1])) + (122))) - (5))))) : (((/* implicit */int) arr_2 [i_1]))))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)8208)))))));
    }
}
