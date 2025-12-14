/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78511
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (2761967592U)))))))) % (var_10)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_10 [(unsigned char)4] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2030730122)) ? (arr_9 [(_Bool)1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(short)10] [(unsigned short)0] [i_0])))))))));
                    arr_11 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) ((short) arr_7 [i_0] [11LL] [i_2]));
                }
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (((((!(arr_2 [i_3]))) ? ((-(var_5))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))) % (var_3)))))) > (((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) ((short) var_2)))))))))));
                    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [(short)5] [i_3]))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 3979145752U)) : (max((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0] [i_1 + 1])))))));
                    var_14 = ((/* implicit */long long int) max((((unsigned long long int) (signed char)49)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_3] [i_1 - 1])) & (((/* implicit */int) (_Bool)1)))))));
                }
                var_15 = ((((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (unsigned char)100)))) * (((/* implicit */int) (short)26608)))) & (((/* implicit */int) (signed char)-54)));
            }
        } 
    } 
}
