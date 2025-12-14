/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88735
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 *= ((/* implicit */signed char) -1477512286);
        var_18 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                for (signed char i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    {
                        arr_13 [i_1 + 1] [i_3] [i_3] [i_1] [i_3] = (~(((((/* implicit */int) var_15)) & (((/* implicit */int) var_16)))));
                        arr_14 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1477512286)) ? (1477512294) : (((/* implicit */int) var_4))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4 + 1])))));
                    }
                } 
            } 
        } 
        arr_15 [(signed char)16] [(signed char)16] &= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) <= ((~(var_6)))));
        /* LoopSeq 1 */
        for (short i_5 = 2; i_5 < 22; i_5 += 3) 
        {
            var_19 = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_1])) && (((/* implicit */_Bool) -1477512287))))));
            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
            var_21 = ((/* implicit */unsigned int) arr_12 [i_1] [i_1] [21] [i_1] [i_1]);
        }
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1 + 3]))));
                        arr_27 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_7] [i_1])) >= (((/* implicit */int) (unsigned short)10825))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
    {
        arr_31 [i_9] |= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) min(((unsigned short)54696), (((/* implicit */unsigned short) (_Bool)1))))) ? (min((((/* implicit */int) (unsigned char)135)), (arr_30 [i_9] [i_9]))) : (((/* implicit */int) max((var_1), ((signed char)95)))))));
        arr_32 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30186))) <= (((unsigned long long int) (signed char)36)))))) * (min(((~(var_10))), (((/* implicit */unsigned int) max((var_8), (((/* implicit */int) var_12)))))))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min(((~(17565939969720235443ULL))), (((/* implicit */unsigned long long int) arr_10 [i_9] [3] [i_9] [i_9])))))));
        arr_33 [i_9] = ((/* implicit */signed char) (+(((((((/* implicit */int) (short)32767)) * (((/* implicit */int) (unsigned short)45671)))) / (((/* implicit */int) (unsigned short)19871))))));
    }
    var_24 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_14))))) <= (((((/* implicit */int) var_2)) + (((/* implicit */int) var_5))))))) : (max((((/* implicit */int) var_13)), (max((var_3), (((/* implicit */int) var_13)))))));
    var_25 = ((/* implicit */_Bool) var_0);
}
