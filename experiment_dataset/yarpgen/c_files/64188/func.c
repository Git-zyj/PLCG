/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64188
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
    var_19 = ((/* implicit */signed char) var_7);
    var_20 -= ((/* implicit */short) var_7);
    var_21 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_22 = ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)19]))))) != (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_3))))) : (arr_3 [i_0] [(signed char)9])));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)215))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) : (((long long int) arr_6 [i_0]))));
                    arr_11 [i_2] [(signed char)5] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (signed char)-83)) : (-1946019448)))));
                    var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_0 [i_0])))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) * (var_5))) - (1283928369U)))));
                    arr_12 [i_1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (unsigned int i_5 = 3; i_5 < 17; i_5 += 3) 
            {
                for (unsigned short i_6 = 3; i_6 < 16; i_6 += 3) 
                {
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((var_7) ? (((/* implicit */int) arr_16 [(unsigned short)0])) : (((/* implicit */int) arr_16 [(unsigned short)16])))))));
                        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_4] [i_5])) ? (((arr_19 [i_3] [i_4]) << (((((/* implicit */int) (unsigned char)33)) - (32))))) : (((/* implicit */int) var_3))));
                    }
                } 
            } 
        } 
        var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) var_17)) * (((/* implicit */int) var_9)))) : (arr_14 [i_3] [i_3 + 2])));
        arr_26 [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_3] [i_3])) && (((/* implicit */_Bool) arr_5 [i_3] [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3 + 3])) ? (var_1) : (((/* implicit */unsigned long long int) arr_19 [i_3] [i_3])))))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_5))))))));
    }
}
