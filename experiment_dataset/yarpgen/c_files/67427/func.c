/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67427
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
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((arr_11 [i_0] [i_1] [(signed char)17] [i_1] [i_0 - 1]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1])))));
                        arr_12 [i_0] [i_0] [i_0] [9LL] = ((/* implicit */long long int) (-(((/* implicit */int) arr_11 [(unsigned char)0] [i_0 + 1] [i_2] [i_3] [i_1]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-19))));
                    arr_18 [i_0] [i_5] [(short)9] [i_4] = ((/* implicit */unsigned char) ((signed char) arr_11 [i_0] [i_4 + 1] [i_4] [i_5] [i_5]));
                    var_18 = ((/* implicit */unsigned char) arr_11 [i_0 - 1] [i_0] [i_0] [(_Bool)1] [i_5]);
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((arr_16 [i_0 + 1] [17LL] [(signed char)16] [i_0 - 1]) & (arr_10 [i_0] [(unsigned char)8]))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_0))));
    }
    for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        arr_23 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) arr_21 [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) arr_16 [16LL] [i_6] [i_6] [i_6]))))) : (max((((12060566850618644990ULL) / (((/* implicit */unsigned long long int) 754577599U)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [(unsigned short)11])))))))));
        arr_24 [i_6] = min((var_6), (((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_6])));
    }
    for (short i_7 = 3; i_7 < 18; i_7 += 3) 
    {
        var_21 -= ((/* implicit */unsigned char) var_8);
        /* LoopNest 2 */
        for (unsigned char i_8 = 4; i_8 < 19; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                {
                    arr_33 [i_9] [(unsigned short)10] [i_7 + 1] = ((/* implicit */unsigned char) ((signed char) 1099511627775ULL));
                    arr_34 [i_9] [i_8] [i_7 + 2] |= ((/* implicit */long long int) min((((/* implicit */int) ((short) arr_17 [i_9] [i_7 - 3] [i_7 - 3]))), ((+(((/* implicit */int) ((short) 5828110374456904288ULL)))))));
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (~(var_9)))), (((((/* implicit */_Bool) (unsigned char)139)) ? (3540389690U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244)))))))), (((arr_31 [i_7 + 1] [i_7 - 3] [i_8 + 1] [i_8 - 1]) ^ (arr_31 [i_7 - 1] [i_7 - 1] [i_8 - 3] [i_8 - 2])))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_31 [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_7 + 2]), (((/* implicit */long long int) ((unsigned char) (short)(-32767 - 1))))))) ? ((~(arr_9 [i_7 + 2] [i_8 - 1]))) : ((+(arr_16 [i_8 - 1] [i_7 - 2] [i_7] [i_7 - 3])))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) var_15);
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_10)), (var_8))), (((/* implicit */long long int) (-(((/* implicit */int) (short)32767)))))))) : (18446742974197923841ULL)));
}
