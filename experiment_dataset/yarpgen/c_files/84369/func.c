/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84369
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) (short)-22020);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) -3032934770586086268LL)) && (((/* implicit */_Bool) -1892196063))));
                        var_16 = ((/* implicit */unsigned short) (~(((unsigned int) 3032934770586086258LL))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 3; i_4 < 18; i_4 += 2) 
                    {
                        var_17 |= ((/* implicit */int) ((((/* implicit */long long int) ((var_1) * (((/* implicit */unsigned int) var_9))))) / (((((/* implicit */_Bool) (short)-3254)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (6609469901602316140LL)))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((((arr_15 [i_0] [i_1] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))));
                            var_19 *= ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17024))) >= (var_11)))) & (var_0));
                            arr_18 [i_4] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)51))) == ((-(6609469901602316138LL)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_20 = ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2] [i_6])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_6])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_6])));
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_14) + (9223372036854775807LL))) >> (((var_5) + (1625303983))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        for (signed char i_8 = 2; i_8 < 15; i_8 += 4) 
        {
            for (long long int i_9 = 2; i_9 < 18; i_9 += 4) 
            {
                {
                    arr_34 [(short)2] [i_8] [(short)16] [(short)16] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_7]))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)60784))))));
                }
            } 
        } 
    } 
}
