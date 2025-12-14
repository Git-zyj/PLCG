/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77997
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
    var_14 ^= ((/* implicit */unsigned long long int) var_13);
    var_15 = ((/* implicit */unsigned int) (unsigned short)92);
    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65427))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])), (((-1223375365) / (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))))) * (((long long int) ((unsigned char) (signed char)92)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)121)))) - ((+(arr_1 [i_1 - 1] [i_1 - 1])))));
                    var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)99))))) ? (((arr_1 [i_1 - 1] [(unsigned short)2]) >> (((var_9) - (1999955158066831226LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1] [i_2 + 3]))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) min((((((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_5 [21ULL] [i_0] [i_0 + 1])) + (47))))), ((~(((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0])), (arr_2 [i_0] [i_0]))))))));
        var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) var_10)), (((3224889345U) - (arr_1 [i_0] [i_0])))));
    }
}
