/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89864
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 &= ((/* implicit */signed char) (~(min((((((/* implicit */int) var_12)) >> (((/* implicit */int) var_18)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)152))))))));
                    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((max((((/* implicit */unsigned char) var_10)), (var_15))), (((/* implicit */unsigned char) arr_1 [i_1 + 2])))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1])) ? (arr_6 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)25)))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 2]))) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)115)))))));
                    var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */unsigned long long int) 2147483636)) : (13577736105004474054ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 2])))))));
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0]);
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) + (((/* implicit */int) (unsigned char)189))))) && (((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */signed char) var_11)))))))), ((((((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) + (2147483647))) << (((min((((/* implicit */unsigned long long int) var_16)), (18446744073709551615ULL))) - (15684511629231134191ULL))))))))));
    }
    var_26 = ((/* implicit */short) max((18446744073709551609ULL), (((/* implicit */unsigned long long int) var_10))));
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((10849125592990840367ULL), (16815342831925433453ULL))), (((/* implicit */unsigned long long int) max((var_1), (var_9))))))) && (((/* implicit */_Bool) var_7))));
    var_28 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) min((var_5), (var_15)))) : (((/* implicit */int) var_10))))) | ((-(((((/* implicit */_Bool) (unsigned char)55)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9)))) || (((((/* implicit */_Bool) 3053221734U)) || (((/* implicit */_Bool) min((5988031116393521808LL), (((/* implicit */long long int) var_13)))))))));
}
