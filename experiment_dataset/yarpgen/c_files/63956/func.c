/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63956
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)245))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10)))))) : (arr_3 [i_0] [i_0])));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)6600)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (signed char)(-127 - 1))))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_8)));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-66)) > (((/* implicit */int) (short)6600))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)33220)) : (((/* implicit */int) (short)25511)))), (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (short)-6599)))))) > ((+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)245))))))));
        arr_7 [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (-1843272859689068153LL))))) > (arr_5 [i_1] [i_1]))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (~(arr_2 [i_1])));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned int) 18446744073709551615ULL)) - (((/* implicit */unsigned int) var_12))))) ? (((unsigned long long int) (unsigned short)3095)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) ((_Bool) 3915208802110091384LL))))))));
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)243)), (1080761413U)));
                                arr_22 [i_2] [(short)6] [i_2] |= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (-7775706142961096252LL) : (((/* implicit */long long int) (-(arr_2 [(unsigned short)16])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
