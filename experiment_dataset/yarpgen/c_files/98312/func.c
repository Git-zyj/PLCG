/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98312
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_6))));
    var_13 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2089838195)) ? (((/* implicit */int) (unsigned char)236)) : (33554431)));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned int) var_1)) * (((/* implicit */unsigned int) min((arr_2 [11ULL] [i_3] [i_3]), (arr_3 [i_0] [5U] [5U]))))))) && (((/* implicit */_Bool) var_3))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)46)))) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (short)-32762))))) : (((((/* implicit */_Bool) (signed char)-81)) ? (1622383355309396519ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10200))))))) : (((/* implicit */unsigned long long int) var_11))));
                    }
                    var_17 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)19)) ? (1622383355309396519ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32745))) * (0ULL)))));
                }
            } 
        } 
    } 
}
