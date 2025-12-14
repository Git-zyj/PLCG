/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75373
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
    var_19 ^= ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_15)), (var_3))) ^ (((/* implicit */long long int) ((var_17) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (unsigned char)70)))))))));
    var_20 = ((/* implicit */unsigned short) ((long long int) var_0));
    var_21 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) ((unsigned char) var_13))) | (((int) (unsigned char)180)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        arr_15 [i_2] |= ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)97)) && (((/* implicit */_Bool) arr_7 [i_0 - 4] [i_3 + 2])))), (((_Bool) arr_0 [i_0 - 1] [i_3 + 2]))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)70)) ? (536868864) : (1048575))) | (min((min((((/* implicit */int) var_10)), (var_12))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (short)-25951)))))))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) (_Bool)1))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4032)))));
                    }
                    arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 - 2] [i_0 - 4] [i_0] [i_0])))))) % (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)160))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_2] [(signed char)10] [(signed char)10]), (arr_14 [i_0] [i_0 - 4] [2] [i_0] [i_0 - 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) (unsigned short)46377)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17449714224397830047ULL)))))));
                }
            } 
        } 
    } 
}
