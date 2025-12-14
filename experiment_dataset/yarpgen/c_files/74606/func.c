/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74606
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) ? (var_9) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 1; i_4 < 21; i_4 += 1) 
                            {
                                arr_11 [i_2] [i_2] [i_2] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_1 - 1] [i_2] [i_4])), ((+(11854262718331816301ULL)))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) var_0)), (11854262718331816323ULL))))) || (((/* implicit */_Bool) min((arr_2 [i_4 + 1]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (216744836U)))))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3060383129U)) ? (((/* implicit */int) (short)-30538)) : (((/* implicit */int) var_14))))) / (-5599872050312203274LL)))) == (((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (-1767938382) : (((/* implicit */int) (signed char)-39)))))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((~(((/* implicit */int) min(((short)30558), (var_8)))))) | ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)30543)) : (arr_10 [i_0] [i_0] [i_1 - 1] [i_2] [i_0] [4] [i_5]))))))))));
                                var_21 = ((/* implicit */long long int) (~(max((((/* implicit */int) arr_4 [i_1 - 1])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_1] [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) var_5))))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 4; i_6 < 20; i_6 += 1) 
                            {
                                var_22 = ((/* implicit */_Bool) arr_17 [i_6] [i_3] [i_2] [i_0] [i_0]);
                                arr_19 [i_1] [i_0] [i_0] [i_3] [i_6 - 3] [i_2] [i_2] = ((/* implicit */long long int) var_13);
                                arr_20 [i_0] [i_2] [(_Bool)1] [i_3] [i_6] = ((/* implicit */unsigned short) (~(2305280059260272640LL)));
                            }
                            var_23 |= ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)25)), (-2305280059260272633LL)));
                            var_24 = ((/* implicit */long long int) max((((/* implicit */int) ((short) var_13))), (((1767938369) + (((/* implicit */int) (short)21726))))));
                            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_13 [i_0 + 3] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1 - 1] [i_1 + 1])) & (((/* implicit */int) ((signed char) arr_0 [i_3]))))) != (((/* implicit */int) (short)21715))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_17 [i_0 + 3] [i_3] [i_3] [1U] [i_3]))) ? ((+(((/* implicit */int) arr_18 [i_2] [i_1] [i_2])))) : (arr_17 [i_1 - 1] [i_1] [i_3] [i_3] [i_1 - 1])));
                        }
                    } 
                } 
                arr_21 [i_0] [i_0 + 1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 1767938412)), (21354751146573204LL)));
            }
        } 
    } 
}
