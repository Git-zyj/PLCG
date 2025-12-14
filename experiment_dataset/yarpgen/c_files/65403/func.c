/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65403
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_19 *= ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)3)))) <= ((((~(var_12))) / ((-(((/* implicit */int) (unsigned short)63794))))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)7))))) > (((((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) arr_7 [i_2] [i_0] [i_0])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_10))))))))));
                    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)11)), (var_16)))) * (((/* implicit */int) min((var_16), (((/* implicit */short) (signed char)-120))))))))));
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned int) max(((+((+(((/* implicit */int) (unsigned char)246)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (var_4)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        var_22 = (((+(((/* implicit */int) var_13)))) < (((((/* implicit */int) var_16)) * (((/* implicit */int) (unsigned short)0)))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((arr_15 [(unsigned char)19] [(unsigned char)19]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))))) & (((/* implicit */unsigned int) (~(var_9))))));
                    arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [(unsigned char)12] [i_5])) ? (-1040189254) : (((/* implicit */int) (signed char)-112)))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_8 [2U] [i_4] [i_4] [10U]))))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) 4294967295U)) ? (arr_6 [10U] [22LL] [10U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned short)15] [(unsigned char)11] [(unsigned char)11] [(unsigned char)0])))))));
        arr_19 [(_Bool)1] [i_3] = ((/* implicit */unsigned short) ((3732176733U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117)))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */int) max((((arr_3 [i_6] [i_6]) >= (((/* implicit */long long int) arr_17 [i_6] [i_6])))), ((!(((/* implicit */_Bool) 2147483647))))))) * (((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) ((arr_7 [i_6] [i_6] [i_6]) != (((/* implicit */long long int) var_2))))))))));
        var_26 = max(((((-(2722479528U))) != (((arr_6 [i_6] [i_6] [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))))))), ((!((!(((/* implicit */_Bool) arr_15 [i_6] [i_6])))))));
    }
    var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)238)), (var_4)))) % ((+(var_6))))) & (((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)161)))))))));
}
