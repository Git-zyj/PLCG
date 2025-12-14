/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88683
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((11569736371133233441ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_4 [i_0] [i_1])))) : (min((((/* implicit */unsigned int) 1750114275)), (var_1)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0]))))) : (arr_0 [i_1] [(unsigned short)17]));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_13 *= ((/* implicit */signed char) ((unsigned char) var_6));
                        var_14 -= ((/* implicit */signed char) arr_1 [i_0]);
                        arr_12 [i_0] [i_1] [7ULL] [7ULL] [i_2] [13] = ((/* implicit */unsigned int) min((((/* implicit */short) arr_5 [i_1] [i_1])), (arr_11 [8LL] [i_1] [i_2] [8LL])));
                        arr_13 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */short) (~(((arr_2 [i_0]) << (((arr_2 [i_1]) - (13347176681832129943ULL)))))));
                        var_15 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [15LL] [i_3])) ? (((/* implicit */int) arr_3 [i_0])) : (var_2))))) >= (min((((int) arr_11 [i_0] [i_1] [i_2] [i_3])), (((((/* implicit */int) var_10)) * (((/* implicit */int) var_3))))))));
                    }
                    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_1] [i_2] [12ULL] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [20LL] [i_0]);
                        var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)19] [i_0])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_4]))))), (arr_0 [i_2] [i_4])));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_7)) : (min((((/* implicit */long long int) min(((unsigned short)55812), (((/* implicit */unsigned short) arr_6 [(unsigned short)5] [9U] [i_2] [i_1]))))), (((long long int) arr_9 [i_0] [(unsigned char)7] [i_0] [i_1] [i_0]))))));
                    }
                    arr_17 [i_1] [i_1] [11] = ((/* implicit */int) ((short) arr_7 [i_0] [i_1] [i_2] [i_2]));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (var_5)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_7)) : (var_1)))))) ? (var_11) : (((/* implicit */int) ((unsigned short) var_2)))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (~(var_2)))) : (4329327034368ULL)));
}
