/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63127
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((var_12) > (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (2663224582U))), (((4152191000454296249ULL) <= (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (unsigned short)0);
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (unsigned char)120);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */short) (unsigned char)75);
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)65)) ? (var_8) : (((/* implicit */int) (short)11168))))) <= (((((/* implicit */_Bool) var_12)) ? (arr_10 [(short)10] [i_3 + 1] [(_Bool)1] [i_3]) : (arr_10 [i_3] [i_3 + 2] [14U] [i_3])))));
                    }
                } 
            } 
        } 
    }
    var_18 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? ((-(var_12))) : (((/* implicit */unsigned int) var_8)))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) (signed char)-108)))) : (((/* implicit */int) var_2)))))));
    var_19 = ((/* implicit */unsigned char) (-(288229826395897856ULL)));
}
