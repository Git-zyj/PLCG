/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7872
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (536870912)))) ? (((-536870912) & (((/* implicit */int) (_Bool)0)))) : ((+(var_6)))))) ? ((+(((((/* implicit */int) var_3)) % (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_6)))) ? (((((/* implicit */int) var_0)) / (-536870912))) : ((-(536870911)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_0 [i_0]))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) | (((/* implicit */int) ((arr_3 [i_0] [i_1] [i_0]) != (arr_2 [i_0] [i_2])))))))));
                    var_13 = ((/* implicit */_Bool) (+(11473571770814664244ULL)));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (-536870912) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 0)) ? (var_9) : (var_5))) : ((+(((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((((((var_5) + (2147483647))) << (((arr_1 [i_0] [i_0]) - (1103130917))))) != (((((/* implicit */int) var_10)) ^ (-2126241593)))))) : (((((/* implicit */int) ((4230016194U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) - (((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0] [i_1] [i_2]) : (((/* implicit */int) arr_6 [i_0] [4U] [i_2] [i_0]))))))));
                    var_15 -= ((((/* implicit */_Bool) (((~(arr_2 [(unsigned char)2] [i_1]))) & ((~(((/* implicit */int) (unsigned char)181))))))) ? ((~((~(((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_1])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_1]))))) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_7)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */int) (unsigned char)134))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-31727)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) 1825396770U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
    var_17 = ((/* implicit */int) (((-(((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) var_7)))))) <= ((((-(((/* implicit */int) (_Bool)1)))) | (((((/* implicit */_Bool) (short)-23072)) ? (-2126241593) : (2126241593)))))));
}
