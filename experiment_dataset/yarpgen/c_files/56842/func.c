/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56842
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (unsigned short)61772)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((var_13) > (var_2))))) | (max((var_9), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)7018))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (unsigned short)48686))));
                            arr_8 [i_2] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((arr_3 [(signed char)14] [i_1] [i_0]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_11)))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
                            {
                                arr_12 [i_1] [i_1] [i_0] [9] [i_4 - 1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)48686)), (-1943625584)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min(((short)27669), (var_0))))))));
                                var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 9328075444146319168ULL)))) ? (((/* implicit */int) (short)-13490)) : (((/* implicit */int) (short)-25142))));
                                var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_10)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_13)) : (4294967295U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-12187)))))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned int) ((short) arr_9 [i_0] [i_0] [17U] [(signed char)6] [i_4 + 1]))))));
                            }
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */long long int) -1866759261);
                arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [17] [i_1] [i_1]))) : ((-(((((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 - 1])) - (var_9)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((var_7) < (((/* implicit */long long int) 3476926125U))))), (var_9))) >> (((var_4) - (3225268282U)))));
}
