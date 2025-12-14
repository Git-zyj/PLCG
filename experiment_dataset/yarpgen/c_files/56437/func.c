/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56437
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
    var_14 = ((/* implicit */signed char) (~(max(((~(((/* implicit */int) (short)1506)))), ((-(((/* implicit */int) (short)-10501))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1649638631916595758LL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) var_11))))), (((unsigned long long int) min((1649638631916595757LL), (((/* implicit */long long int) 26U)))))));
        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(arr_1 [i_0]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (1625839888)))) : (((arr_3 [i_0]) ? (1271359387078098987ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_17 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_2 + 2])) >> (((((/* implicit */int) var_0)) + (109))))) * (((/* implicit */int) (short)4552))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((signed char) max((min((((/* implicit */short) (_Bool)1)), ((short)-23244))), (((/* implicit */short) arr_1 [i_2 - 1]))))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3 + 2] [i_3] = ((/* implicit */unsigned char) (((_Bool)0) ? (4294967270U) : (min((1180467148U), (((/* implicit */unsigned int) (short)24576))))));
                        var_19 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)15)) ? ((((_Bool)1) ? (4661072669944850458LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))))) : (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)36)));
}
