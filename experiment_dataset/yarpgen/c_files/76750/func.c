/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76750
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
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_11)), ((+(max((((/* implicit */unsigned long long int) var_3)), (2279590075989287106ULL)))))));
    var_21 &= ((/* implicit */signed char) 8685307628617439975LL);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            var_22 += ((/* implicit */short) var_4);
            var_23 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1 - 1]))))), ((-(((((/* implicit */_Bool) 1029794048U)) ? (((/* implicit */long long int) arr_2 [i_0] [i_0])) : (-1LL)))))));
            var_24 -= ((/* implicit */_Bool) (-(max(((-(2251799813685120LL))), (((/* implicit */long long int) (_Bool)1))))));
            var_25 = ((/* implicit */short) (-(min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32749))) : (var_7))), (min((((/* implicit */unsigned int) var_13)), (arr_2 [i_0] [i_1])))))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_26 = ((int) var_10);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            for (unsigned char i_4 = 4; i_4 < 19; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        var_27 *= ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((arr_1 [i_3]), (((/* implicit */short) (signed char)112))))) ? (((/* implicit */int) ((var_4) < (var_5)))) : (((/* implicit */int) (short)7271))))));
                        arr_16 [i_4] [i_3] [i_4] [i_5] [i_3] &= var_19;
                        var_28 = ((/* implicit */unsigned long long int) var_8);
                        var_29 = ((/* implicit */unsigned short) (+((~((~(arr_9 [i_3] [i_3])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 4) 
    {
        var_30 = ((/* implicit */unsigned char) (-(1816708868)));
        arr_19 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_0 [(short)22]))))))) ? (min((((/* implicit */unsigned long long int) min((arr_2 [i_6 + 4] [(short)2]), (((/* implicit */unsigned int) var_16))))), (max((arr_15 [2U] [i_6] [14ULL] [i_6]), (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_6 + 2]), (min(((unsigned short)40089), (((/* implicit */unsigned short) var_11))))))))));
        arr_20 [i_6] [(_Bool)1] = ((/* implicit */signed char) (+(var_6)));
    }
}
