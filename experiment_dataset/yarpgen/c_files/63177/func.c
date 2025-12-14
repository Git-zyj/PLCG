/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63177
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) (((((((+(((/* implicit */int) (short)-10604)))) + (2147483647))) << (((max((((/* implicit */unsigned long long int) 571957152676052992LL)), (arr_2 [i_0]))) - (14040198137978520304ULL))))) >> (((((((/* implicit */_Bool) (+(arr_1 [(signed char)17])))) ? (var_9) : (arr_0 [i_0]))) - (1103384100U)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_11);
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((arr_1 [i_0]) - (8115936166315249147LL)))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_22 *= ((/* implicit */signed char) (+(((arr_0 [i_1]) << (((var_16) + (2928001663821412746LL)))))));
        arr_6 [i_1] = ((/* implicit */signed char) max((((/* implicit */int) ((((unsigned int) var_11)) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((((/* implicit */int) arr_5 [i_1] [i_1])) / (((/* implicit */int) arr_5 [i_1] [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_23 ^= ((/* implicit */unsigned short) (+((+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)24)), ((unsigned short)3))))))));
            var_24 &= (+(((arr_7 [i_3]) / (arr_7 [i_3]))));
            arr_12 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_9))) << (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_18)))))));
        }
        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) ((_Bool) (unsigned short)65533));
            var_26 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2]))))) && (((/* implicit */_Bool) ((arr_14 [i_2] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_27 = ((((/* implicit */_Bool) max(((+(var_3))), (max((((/* implicit */long long int) (unsigned short)65533)), (arr_1 [i_2])))))) ? (4491527936561483754LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 750167859U)))));
                            var_28 &= ((/* implicit */short) (+(((arr_7 [i_6]) & (arr_7 [i_2])))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)-98)), ((unsigned short)65532)));
        }
        var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((1073152374291476039LL) >= (-6662666710026035053LL)))), (var_15)));
        arr_21 [i_2] = ((/* implicit */short) var_14);
        arr_22 [i_2] = ((((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) arr_9 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)13847)))) & (max((((/* implicit */long long int) var_11)), (var_18))))));
    }
    var_31 = ((/* implicit */long long int) var_13);
    var_32 = ((/* implicit */_Bool) (+((((+(((/* implicit */int) (unsigned short)65520)))) << (((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-2653)) : (((/* implicit */int) var_1)))) + (2681))) - (16)))))));
}
