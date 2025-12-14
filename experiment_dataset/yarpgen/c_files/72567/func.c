/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72567
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
    var_15 = ((/* implicit */long long int) ((unsigned long long int) ((var_3) == (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (var_10)))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((signed char) var_5)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) -2438603272886419773LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))) : (var_7))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)215)) && (((/* implicit */_Bool) (unsigned char)240)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0 - 1] = var_9;
        var_17 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) arr_2 [i_0 - 2])))) + (((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) + (var_10)))));
        arr_4 [(short)15] = ((/* implicit */unsigned int) var_0);
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(var_4))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 4; i_4 < 11; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (var_3))))))));
                                var_20 = ((/* implicit */signed char) ((var_1) ? (((/* implicit */unsigned long long int) var_11)) : (arr_8 [(unsigned char)5] [i_2])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 ^= ((/* implicit */short) ((((((/* implicit */int) var_12)) < (((/* implicit */int) (unsigned char)216)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) var_2)))))));
        var_22 = ((/* implicit */short) (~(16169154013426295111ULL)));
        arr_17 [1LL] = ((/* implicit */signed char) (~(arr_7 [i_1 - 1] [i_1] [(signed char)8])));
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        var_23 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) (short)-687)) <= (((/* implicit */int) min(((short)-711), (((/* implicit */short) (unsigned char)49)))))))), (((((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6])))))) << (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-1LL)))))));
        arr_21 [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((20LL) <= (((/* implicit */long long int) var_10)))))))), (((((/* implicit */unsigned long long int) var_2)) * ((+(16169154013426295124ULL)))))));
    }
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1193460622), (((/* implicit */int) (_Bool)1))))) ? (((long long int) var_12)) : (((/* implicit */long long int) ((unsigned int) 3580604673U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (5583140124739733866ULL))))))) : (max((8LL), (((/* implicit */long long int) (_Bool)1))))));
}
