/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56705
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
    var_10 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(short)2] [i_1 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (7499730017003146901ULL))))));
            var_12 = ((/* implicit */short) ((-2007421063) & (1402180867)));
            arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2]))) : (arr_0 [i_1 - 1])));
            arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1] [11])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2032))) & (10947014056706404715ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))));
            arr_7 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10947014056706404689ULL)) ? (((/* implicit */int) (short)21550)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3)))))));
        }
        arr_8 [i_0] = (!(((/* implicit */_Bool) min((759533454703262391ULL), (((/* implicit */unsigned long long int) (unsigned char)1))))));
        arr_9 [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [(unsigned char)2])) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) arr_1 [i_0 + 1])))) - (((/* implicit */int) min(((unsigned char)134), (((/* implicit */unsigned char) var_2)))))))) ? (min((((((/* implicit */int) (unsigned char)77)) * (((/* implicit */int) arr_4 [i_0 + 1])))), (max((((/* implicit */int) (unsigned char)78)), (-8))))) : (((/* implicit */int) var_1))));
    }
    var_13 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (unsigned char)255))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((7499730017003146907ULL) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)250)), (arr_10 [12U])))) : (var_6))) + (13048))))))));
            }
        } 
    } 
}
