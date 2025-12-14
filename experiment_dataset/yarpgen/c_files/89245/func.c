/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89245
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
    var_11 -= var_2;
    var_12 += ((/* implicit */int) (unsigned short)65506);
    var_13 = ((max((((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (var_10)))), (var_2))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) var_7);
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_1 - 2] [i_1] [i_1]), (arr_3 [i_1 + 2] [i_1] [i_0 - 3])))) && (((/* implicit */_Bool) ((arr_1 [i_1 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))))));
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_0]))));
            var_17 = ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_3 [17LL] [13LL] [i_0])));
            arr_4 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) arr_2 [i_1 - 2] [i_1 - 2]))) << (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (arr_1 [i_1])))))));
            arr_5 [(_Bool)1] [i_1] [3LL] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((int) ((long long int) arr_1 [i_0 - 2]))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (signed char i_4 = 4; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), ((-(3U)))));
                            var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) max((var_3), (((/* implicit */short) arr_2 [i_5] [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [i_3] [i_4])) : (((/* implicit */int) arr_12 [i_3] [i_0] [(short)0] [i_4 + 3] [i_2] [i_2]))));
                            var_21 = ((/* implicit */long long int) arr_13 [i_5] [i_4] [i_2]);
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */signed char) max((min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)4))))), ((unsigned short)65506))), (((/* implicit */unsigned short) var_4))));
        }
        for (unsigned int i_6 = 2; i_6 < 23; i_6 += 3) 
        {
            var_23 = ((/* implicit */signed char) max((((short) arr_2 [i_0 - 3] [i_0 - 1])), (((/* implicit */short) arr_2 [i_0] [i_0 - 3]))));
            var_24 -= ((/* implicit */signed char) min((max((((/* implicit */unsigned int) (unsigned short)22056)), (max((((/* implicit */unsigned int) (_Bool)1)), (3U))))), (((/* implicit */unsigned int) max((max((arr_11 [(unsigned char)18]), (((/* implicit */int) arr_2 [i_0] [i_6])))), (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))))));
        }
    }
}
