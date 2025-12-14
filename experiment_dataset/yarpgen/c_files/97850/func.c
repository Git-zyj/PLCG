/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97850
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
    var_15 = ((/* implicit */unsigned char) (signed char)-50);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (signed char)50)) : (((((/* implicit */int) (signed char)113)) - (((/* implicit */int) (short)14790))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-104)), (arr_1 [i_0] [i_0])))) ? (((long long int) (signed char)-55)) : (((long long int) (short)-2948))))) : (((((_Bool) 2815222012U)) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4227858432U))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)16)))), (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((-(((16ULL) >> (((((/* implicit */int) (unsigned char)177)) - (133))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max(((signed char)-34), ((signed char)-39)))) > (((/* implicit */int) ((1479745295U) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_0] [i_0] = (-((+(((/* implicit */int) min((((/* implicit */short) (signed char)-113)), (arr_4 [(short)2] [i_2] [i_3])))))));
                        var_18 = (~(((((((/* implicit */_Bool) (signed char)-97)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)50)) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_0] [i_1])))))));
                    }
                } 
            } 
        } 
    }
}
