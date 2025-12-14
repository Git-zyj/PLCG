/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99464
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((/* implicit */_Bool) 1143914305352105984ULL)) ? (((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-3291)))) / (((unsigned long long int) 12ULL)))) : (((((/* implicit */_Bool) min((arr_3 [i_0] [(short)8]), (arr_3 [i_0] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0 - 1]) <= (((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [(signed char)8])))))) : (((unsigned long long int) arr_8 [i_0] [i_0] [(short)13] [i_0 - 1]))))))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(15983928595470747958ULL)))) ? (((/* implicit */long long int) ((int) max((arr_2 [i_0]), (arr_7 [i_0] [(unsigned char)13]))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_0]))))), (min((arr_5 [8] [i_1 + 2] [i_2]), (((/* implicit */long long int) arr_6 [i_0]))))))));
                    var_13 += ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [8ULL])))) ^ (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1])) == (arr_2 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_6 [i_1 - 2])) * (arr_7 [i_0] [i_0 - 1])))))) : (((max((18446744073709551589ULL), (2462815478238803658ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))));
                    var_14 = ((/* implicit */short) (unsigned char)40);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_7))))) ? (max((((((/* implicit */_Bool) 27ULL)) ? (2462815478238803669ULL) : (((/* implicit */unsigned long long int) var_8)))), (min((1ULL), (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((int) var_6))))) ? (max((min((((/* implicit */unsigned long long int) var_8)), (var_6))), (((/* implicit */unsigned long long int) var_5)))) : ((~(((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))))));
    var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15473257109060986135ULL))) / (var_6))) * (((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) var_0)))) / ((+(var_10)))))));
    var_18 = ((/* implicit */signed char) (+(2973486964648565480ULL)));
}
