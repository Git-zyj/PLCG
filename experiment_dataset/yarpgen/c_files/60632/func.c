/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60632
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_6 [12U] [i_2] [i_0] = max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)177)), ((unsigned short)33881)))), (((((/* implicit */_Bool) ((signed char) (unsigned char)79))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])), (arr_5 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_11))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)41736))));
                        arr_10 [i_1 - 2] [(_Bool)1] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((((/* implicit */int) min(((unsigned char)79), (((/* implicit */unsigned char) var_0))))) >> (((((/* implicit */int) var_8)) - (42984)))))));
                        var_14 = ((/* implicit */signed char) var_5);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 3; i_4 < 10; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3600)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1374918131U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-25429)) && (((/* implicit */_Bool) arr_12 [(unsigned char)1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-25429))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_4] [i_5] [i_5])), (arr_0 [5U])))))))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */int) var_3)), (arr_15 [(unsigned short)8] [i_5] [i_4 - 2])))))));
                    arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned short)41736))) ? (((/* implicit */int) (unsigned short)41736)) : (((((/* implicit */int) (unsigned char)162)) % (((/* implicit */int) arr_4 [i_4 - 1] [i_4 - 3] [i_4]))))));
                }
            } 
        } 
    } 
}
