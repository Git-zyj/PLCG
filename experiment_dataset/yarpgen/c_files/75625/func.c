/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75625
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
    var_10 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) var_6)))), (((var_0) + (var_3))))), (var_3)));
    var_11 += ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) var_7))))));
    var_12 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_6))))) != (((/* implicit */int) ((var_0) > (((/* implicit */int) var_6))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) (+(min((var_3), (arr_0 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) arr_1 [i_1]);
            var_15 = ((/* implicit */unsigned short) ((signed char) arr_3 [i_1]));
            var_16 *= ((/* implicit */unsigned long long int) arr_0 [i_0] [(_Bool)1]);
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [22ULL] [i_2])) == (arr_6 [i_0] [(signed char)11] [i_0])));
            var_17 -= arr_3 [i_2];
            var_18 = ((/* implicit */unsigned short) min((((int) (+(arr_0 [i_2] [i_2])))), (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_7)))) == (((/* implicit */int) (!(((/* implicit */_Bool) 2078212296U))))))))));
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(arr_1 [i_2]))))));
            arr_8 [(unsigned short)12] [i_0] [19] = ((/* implicit */unsigned short) (short)-32756);
        }
    }
}
