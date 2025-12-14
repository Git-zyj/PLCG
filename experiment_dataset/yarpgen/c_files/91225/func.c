/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91225
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
    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_14), (((/* implicit */short) ((var_8) != (var_4))))))) <= (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)150);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) var_0);
                    arr_7 [i_0 - 1] [i_1 + 3] [i_1 + 3] [i_0] = ((/* implicit */unsigned long long int) var_1);
                    arr_8 [i_0 + 1] [i_0] [(unsigned short)2] = ((/* implicit */unsigned char) (~(min((arr_1 [i_2]), (((/* implicit */long long int) (short)-17224))))));
                    var_22 -= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_15))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 21; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) (signed char)30);
                    arr_16 [i_0] [i_0] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 144115183780888576ULL))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_5), (var_2))))));
        arr_17 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-17232)))) && (((/* implicit */_Bool) (+(var_4)))))))));
    }
    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        arr_22 [(unsigned char)3] [i_5] = ((/* implicit */unsigned char) var_4);
        var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned char) var_7))))), (((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29604))) : (var_5)))));
        var_26 = ((/* implicit */_Bool) max((((/* implicit */long long int) (short)1592)), (arr_1 [(short)17])));
        var_27 = ((/* implicit */unsigned long long int) arr_1 [i_5]);
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 3) 
    {
        arr_25 [i_6] = ((/* implicit */short) (((~(((/* implicit */int) (short)-17224)))) << (((((/* implicit */int) arr_23 [2ULL] [(unsigned char)14])) - (162)))));
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_6 - 1]))));
    }
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) >> (((((/* implicit */int) (signed char)109)) - (102)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)-1603)) <= (((/* implicit */int) (unsigned short)2404))))), ((~(((/* implicit */int) (short)-1593))))))) : (min((min((((/* implicit */unsigned long long int) (signed char)-59)), (2320037997395852834ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1619)) & (((/* implicit */int) (unsigned short)11162)))))))));
}
