/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78631
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
    var_10 += ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3924243670127291419LL)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (unsigned char)242))))) < (((long long int) var_9)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_0 [16LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (min((arr_0 [i_0 - 1]), (var_0))) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 2])))) : (((var_6) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((var_0) ^ (arr_0 [i_0])))))));
        arr_2 [i_0] |= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (arr_0 [8LL]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (-5884894035005339191LL))) : (((/* implicit */long long int) ((unsigned int) var_9)))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (!(((4611686018426339328LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_7))))));
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_12 = ((/* implicit */long long int) arr_4 [i_1] [(signed char)17]);
                        arr_15 [i_3] = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (var_8))) ? (((/* implicit */long long int) 6)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [3LL] [i_1]))) : (var_4))))));
                        var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_1])) ? (arr_7 [i_1]) : (arr_1 [i_2])))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3] [i_1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120)))))));
                        var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? ((+(arr_8 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((var_5), (((/* implicit */unsigned long long int) var_6))))))));
                        var_15 += ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned short)58445)))), ((-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
    }
}
