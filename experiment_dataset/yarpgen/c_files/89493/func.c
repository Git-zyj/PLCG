/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89493
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_3)) ? (var_1) : ((+(var_5))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (((((/* implicit */_Bool) (unsigned char)199)) ? (var_4) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24498))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))))));
                        var_12 = ((/* implicit */long long int) (+((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_3])) >> (((/* implicit */int) (_Bool)0))))))));
                    }
                } 
            } 
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (short)24498)) ? (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-24487)))) / ((-2147483647 - 1)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)203)) < (((/* implicit */int) ((short) 488308963))))))));
            arr_9 [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        }
        var_14 = ((/* implicit */unsigned long long int) (short)-24498);
        var_15 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)10] [(unsigned char)10] [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */long long int) -916172336))))));
    }
    var_16 = ((/* implicit */unsigned long long int) 1674724961U);
}
