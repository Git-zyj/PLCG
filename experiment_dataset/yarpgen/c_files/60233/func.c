/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60233
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_10)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [(unsigned char)1])))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (unsigned short)65525))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-6600))))))) : ((~(((/* implicit */int) ((signed char) arr_1 [6LL])))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) var_18)))) | (((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) arr_2 [i_1 - 3])), (min((arr_3 [i_0] [i_1 - 3] [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_0]))))))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned short) var_8)), (var_4))))), (max((2401290729245296144ULL), (((/* implicit */unsigned long long int) (signed char)50)))))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 2; i_3 < 23; i_3 += 1) /* same iter space */
    {
        arr_10 [i_3 - 2] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)68)))) : (((var_19) - (((/* implicit */long long int) 620158687)))))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_9 [i_3] [i_3])) << (((((/* implicit */int) var_4)) - (35528))))) & (((/* implicit */int) ((_Bool) arr_7 [i_3])))))) | (4270531392528504998ULL)));
    }
    for (long long int i_4 = 2; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */short) 2401290729245296144ULL);
        var_26 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))));
    }
    var_27 = ((/* implicit */long long int) ((signed char) min((((((/* implicit */int) (unsigned short)65513)) * (((/* implicit */int) (signed char)68)))), (((/* implicit */int) (unsigned short)65052)))));
    var_28 = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)21267)) : (((/* implicit */int) (short)360)))) % (((/* implicit */int) var_11))));
}
