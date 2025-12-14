/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86917
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_9)) & (max((((((/* implicit */_Bool) var_7)) ? (-1LL) : (var_5))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)43327)) > (var_9))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) var_12);
        var_15 = ((/* implicit */int) (unsigned short)22209);
        var_16 = ((/* implicit */signed char) var_1);
    }
    for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((_Bool) (unsigned char)206));
        var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_2), ((signed char)4)))), (((((/* implicit */_Bool) (unsigned short)43318)) ? (6205201987141430544LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned short)35889)))) > (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (unsigned short)22209)) ? (((/* implicit */long long int) 1169366191U)) : (6205201987141430552LL)))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (1045661939U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 + 3]))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))) > (arr_3 [i_1 + 3])))))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) ((-1356689696) % ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)42)))))))));
    }
    for (short i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_6))));
        arr_10 [i_2] [i_2] = ((/* implicit */int) var_12);
        var_21 = ((/* implicit */long long int) min((var_21), (((long long int) var_1))));
        arr_11 [i_2] &= (!((!(((/* implicit */_Bool) ((((/* implicit */long long int) 2147483647)) / (arr_9 [i_2])))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (long long int i_4 = 3; i_4 < 23; i_4 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((5368282505774956434LL), (((/* implicit */long long int) (_Bool)1)))))));
                var_23 -= ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
    {
        for (signed char i_6 = 1; i_6 < 19; i_6 += 2) 
        {
            {
                var_24 = ((/* implicit */signed char) ((6205201987141430539LL) > (((/* implicit */long long int) (+((((_Bool)1) ? (173921384U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35703))))))))));
                var_25 = ((/* implicit */int) (((~(arr_19 [i_5]))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5]))))))));
            }
        } 
    } 
}
