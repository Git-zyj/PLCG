/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60700
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
    var_18 = ((/* implicit */long long int) max((4045781520U), (((/* implicit */unsigned int) (signed char)-33))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_0))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), ((+(var_4)))))))))));
        arr_4 [7U] [i_0] = ((/* implicit */long long int) ((max((var_0), (((/* implicit */int) min((var_16), (var_16)))))) & (((((/* implicit */int) var_9)) % (((/* implicit */int) ((unsigned char) var_4)))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_21 = ((/* implicit */int) var_5);
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_22 |= ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (min((var_6), (((/* implicit */unsigned int) var_15)))))));
                        var_23 = ((/* implicit */_Bool) var_0);
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_24 = (+((+((-(((/* implicit */int) var_11)))))));
                            var_25 = min((((int) (~(var_8)))), (((/* implicit */int) ((short) ((unsigned char) var_4)))));
                            arr_16 [(unsigned short)2] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ ((+(((/* implicit */int) var_11))))));
                            var_26 = ((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (((long long int) (-(((/* implicit */int) (unsigned char)139)))))));
                        }
                    }
                } 
            } 
            arr_17 [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) max((var_15), (((/* implicit */unsigned char) var_10)))));
        }
        var_27 = ((/* implicit */long long int) (-((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (var_6))))))));
        var_28 = ((/* implicit */_Bool) (~(4651837085770486253ULL)));
    }
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
    {
        arr_21 [(short)13] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
        var_29 *= ((/* implicit */_Bool) (-(var_4)));
        arr_22 [i_6] [i_6] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_7))))));
    }
}
