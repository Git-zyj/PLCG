/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68274
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (var_4)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_6)))))))) : (((((/* implicit */unsigned long long int) 1603420367)) | (((((/* implicit */_Bool) -1603420367)) ? (((/* implicit */unsigned long long int) -1603420359)) : (var_11)))))));
    var_15 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)249))))) ? (((((/* implicit */_Bool) 562949953421311LL)) ? (((/* implicit */int) (signed char)-107)) : (1603420367))) : (((((/* implicit */_Bool) 2937845566587861438LL)) ? (((/* implicit */int) var_3)) : (1603420386))))) + (((((/* implicit */int) (short)32767)) >> (((-1603420367) + (1603420387)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 7; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */int) var_3)), (arr_3 [i_0]))) % (arr_3 [i_0])));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((4294967269U) + (((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_0 [i_0]), (((/* implicit */int) (unsigned char)193)))) == (((/* implicit */int) (unsigned char)12))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) var_7);
}
