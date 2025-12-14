/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79018
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((((/* implicit */_Bool) (-((-(1665630107U)))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (_Bool)1)))));
                    var_15 *= ((/* implicit */_Bool) 1017979989U);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1017979989U)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)7)), (((arr_2 [i_1] [7U]) ? (((/* implicit */int) (signed char)127)) : (2013110962)))))) : (((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) : (var_13))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [(_Bool)0]))) : (arr_6 [i_1] [(_Bool)1] [i_2 - 1] [i_1]))))))));
                    var_17 = ((/* implicit */unsigned char) arr_4 [12] [i_1] [i_1]);
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) max((var_12), (((/* implicit */short) arr_1 [(_Bool)1]))))) <= (((((/* implicit */int) (short)-22166)) % (((/* implicit */int) (unsigned char)22))))))), (min((((/* implicit */unsigned int) var_9)), (arr_6 [i_1] [i_2 - 1] [i_2 + 1] [i_1])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) << (((((/* implicit */int) (signed char)-123)) + (136))))))))) ^ (((/* implicit */int) var_10))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) == (((/* implicit */int) (signed char)91))))))))));
}
