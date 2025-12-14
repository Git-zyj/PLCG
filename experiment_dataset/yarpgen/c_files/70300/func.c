/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70300
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
    for (long long int i_0 = 4; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)250)) >> (((/* implicit */int) (unsigned char)5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (min((var_3), (((/* implicit */unsigned long long int) (unsigned char)250))))))) ? (((/* implicit */int) min((arr_0 [i_0 + 1]), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) arr_1 [i_0])));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) (_Bool)1);
                    arr_8 [i_1] [i_2] = ((/* implicit */short) 2097151U);
                    arr_9 [(signed char)0] [i_1] [(signed char)0] [(signed char)0] = ((/* implicit */signed char) 1023U);
                    var_17 -= ((/* implicit */short) (((~(var_5))) - (((((arr_5 [i_0]) >= (((/* implicit */unsigned long long int) var_7)))) ? (((/* implicit */int) max(((unsigned short)52638), (((/* implicit */unsigned short) var_0))))) : ((+(var_1)))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 4; i_3 < 13; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) var_5);
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((max(((((_Bool)0) ? (var_13) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((4292870145U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))) ^ (((/* implicit */int) var_6))));
        var_18 = var_5;
    }
    var_19 = ((/* implicit */_Bool) max((4292870145U), (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
}
