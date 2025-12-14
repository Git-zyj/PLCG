/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60273
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [15U] [i_0] [i_0] [i_0 - 2] |= ((/* implicit */long long int) max((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */_Bool) (unsigned short)62375)) ? (var_5) : (arr_2 [i_0]))) : ((+(var_5))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9)))))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_0))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)43913)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_2)))) ? (min((((/* implicit */unsigned int) var_11)), (var_4))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (var_1))))))))));
    var_15 = ((/* implicit */long long int) (unsigned short)20);
    /* LoopSeq 2 */
    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
    {
        arr_10 [i_3] = ((/* implicit */short) var_11);
        var_16 = ((/* implicit */unsigned short) var_0);
        var_17 = ((/* implicit */signed char) min((max((min((15366460115275832129ULL), (15366460115275832129ULL))), (15366460115275832129ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (signed char)-121)))))));
        var_18 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 2010033900579993493LL)) ? (((/* implicit */unsigned long long int) 1250454050U)) : (671661938375654156ULL))));
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4]))) : (((3221225472U) << (((arr_12 [(unsigned char)13] [i_4]) + (227777299))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))) : (var_8))))))))))));
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned short)65530))))) : (max((((/* implicit */long long int) (_Bool)1)), (var_2)))))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_11 [(unsigned char)8] [i_4])) ? (var_0) : (((/* implicit */unsigned long long int) 307303795U)))))) : (min((min((3539579398U), (((/* implicit */unsigned int) arr_1 [i_4] [2ULL])))), (((/* implicit */unsigned int) ((arr_12 [i_4] [i_4]) / (((/* implicit */int) var_12)))))))));
        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56431)) ? (((/* implicit */int) arr_13 [(_Bool)1])) : (var_10)))) > (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9499)))))))) | (((((/* implicit */_Bool) ((unsigned int) (unsigned short)10188))) ? (1006632960) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || ((_Bool)1))))))));
    }
}
