/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58587
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) ^ (var_11)));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_3 [i_0] [i_0]))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_1);
    var_16 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) == (18446744073709551615ULL))))));
        arr_8 [i_2] = ((/* implicit */long long int) (-((~(arr_6 [i_2] [i_2])))));
        var_18 -= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_2])) < (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || ((_Bool)0)))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_11)))) <= ((~(var_5)))))) < ((+(((/* implicit */int) var_0))))));
        arr_11 [i_3] = ((/* implicit */signed char) (_Bool)1);
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        arr_14 [i_4] = ((((/* implicit */long long int) max((arr_4 [i_4]), (((/* implicit */int) arr_0 [i_4] [i_4]))))) == (((long long int) (_Bool)1)));
        var_20 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
    }
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (1391819683U))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((signed char) ((((/* implicit */int) arr_10 [i_5] [i_5])) <= (((/* implicit */int) var_3))))))));
            }
        } 
    } 
}
