/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57549
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) (signed char)-1)))))) : (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-31)))))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-19)) % (((/* implicit */int) ((short) (short)32767)))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((var_8) % (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(signed char)3] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)(-32767 - 1)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) | (2187992249U))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((min((min((21U), (((/* implicit */unsigned int) (short)-745)))), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
    }
    for (signed char i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */unsigned char) (short)25695);
        var_21 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) arr_3 [i_1 - 1] [i_1 - 1])));
    }
    for (signed char i_2 = 1; i_2 < 6; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (short i_5 = 2; i_5 < 8; i_5 += 4) 
                {
                    {
                        arr_19 [i_2] [i_2] [i_4] [2LL] = ((/* implicit */unsigned long long int) ((arr_17 [i_4] [i_3] [i_4] [i_5] [i_5 + 1]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_20 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */short) (-((-((+(((/* implicit */int) (unsigned short)18141))))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 + 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))) : (var_8)));
                        var_23 -= ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (unsigned short)64)))));
                    }
                } 
            } 
        } 
        arr_21 [i_2] [i_2 + 1] = arr_1 [i_2 + 1];
    }
}
