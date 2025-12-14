/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9820
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_10)))))))));
        var_14 ^= ((/* implicit */_Bool) (+(arr_2 [i_0] [i_0])));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (((((/* implicit */_Bool) arr_0 [i_3])) ? (((arr_1 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)249))))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(1943181517)))) ? (((var_9) | (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)100)))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) (~(arr_17 [i_5] [i_4])));
                    arr_20 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */signed char) min((var_4), (var_10)));
                    arr_21 [i_4] [(signed char)19] [i_6] = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    } 
}
