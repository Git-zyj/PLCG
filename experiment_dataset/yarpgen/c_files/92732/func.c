/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92732
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned char) (((+(((/* implicit */int) ((signed char) (_Bool)1))))) % (var_1)));
                                var_21 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_2] [i_3 + 3] [i_4]);
                                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)250))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [(_Bool)1])), (var_3))))) : (((arr_5 [1U] [i_1] [1U]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [8] [8] [i_1] [i_1] [i_3] [i_4] [8]))) : (arr_6 [i_0] [2] [2] [i_0])))))) ? (((((/* implicit */_Bool) arr_9 [8] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [(unsigned short)6] [i_1] [i_1] [i_3 - 1] [i_4])))) : (((((((/* implicit */_Bool) (short)-3840)) && (((/* implicit */_Bool) 4358755236263369879ULL)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) arr_10 [(short)2] [i_1] [(short)2] [(short)2] [i_3] [i_4] [(short)2])) == (((/* implicit */int) arr_10 [10U] [0LL] [i_2] [0LL] [i_4] [i_0] [i_4])))))))));
                                arr_12 [(unsigned char)1] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(1552504949047299294LL)))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)241)))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) & (var_16))))))));
                var_24 = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)246)), (((unsigned long long int) (unsigned short)3396))));
    var_26 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_9)))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) == (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)6))))) ^ (((((/* implicit */_Bool) var_17)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
    var_27 = ((/* implicit */unsigned int) var_3);
}
