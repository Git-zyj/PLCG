/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68805
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
    var_15 = ((/* implicit */short) (((-(min((var_1), (((/* implicit */unsigned int) var_4)))))) ^ (((unsigned int) ((unsigned int) var_5)))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) || (((_Bool) var_3))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_0 [i_0])))) / (((((/* implicit */_Bool) (short)-1709)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_17 = ((/* implicit */short) ((min((((((/* implicit */long long int) var_1)) % (var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) 660499383U)) && (((/* implicit */_Bool) var_7))))))) + (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((signed char) ((((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) >> (((((unsigned long long int) var_9)) - (3621ULL))))));
        arr_7 [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) var_4)), (0U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_9)) - (3615)))))))) : (((((var_1) >> (((((/* implicit */int) (unsigned char)142)) - (123))))) << (((((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_10)))) - (16472)))))));
        var_18 = ((/* implicit */signed char) (+(((min((((/* implicit */unsigned long long int) var_7)), (arr_5 [i_1]))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-11350)))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_5)), (var_12))) & (arr_9 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) (~(((long long int) var_8))))) : (arr_9 [i_2 + 1] [i_2])));
        var_20 &= ((/* implicit */long long int) max(((unsigned char)228), (((/* implicit */unsigned char) (_Bool)1))));
        arr_10 [i_2 + 1] [i_2] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) - (arr_9 [i_2] [i_2]))) - (((((/* implicit */_Bool) (short)-18561)) ? (13733412290882663383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11350)))))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) - (((/* implicit */int) var_0)))) - (((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) min(((short)-11359), (((/* implicit */short) var_6))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_4))))))));
    var_22 *= var_6;
}
