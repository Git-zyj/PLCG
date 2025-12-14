/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79695
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)3)) >= (2147483647)));
        var_16 &= ((/* implicit */int) (short)(-32767 - 1));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) (signed char)118)));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) var_8)), ((+(((/* implicit */int) ((short) (unsigned short)13917)))))));
        var_17 -= ((/* implicit */unsigned short) ((max((4294967295U), (((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (-1149781714)))))) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */long long int) -1149781714)) >= (arr_5 [(unsigned short)12] [i_1])))), (((unsigned char) -1149781724))))))));
    }
    var_18 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)10132))))), (max((var_1), (((/* implicit */long long int) (unsigned char)21)))))) | (((/* implicit */long long int) ((1591287344) * (((/* implicit */int) (_Bool)1)))))));
    var_19 = ((/* implicit */unsigned short) var_5);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned char)221))) ? (((var_10) * (((/* implicit */int) (unsigned short)0)))) : (min((((/* implicit */int) var_11)), (0))))) : (var_14)));
}
