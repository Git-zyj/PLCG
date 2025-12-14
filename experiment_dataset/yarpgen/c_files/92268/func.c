/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92268
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)))), (min((((/* implicit */long long int) arr_1 [i_0])), (6168190026771788905LL))))) : (((/* implicit */long long int) 1703641724))));
        var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) var_16)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) (+(((unsigned int) var_3))));
                        var_21 ^= ((/* implicit */unsigned long long int) 4565006769444770489LL);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((16488151120686887938ULL), (((/* implicit */unsigned long long int) (signed char)88))))) ? ((-(2044U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191)))));
                        var_23 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) max(((signed char)-95), ((signed char)-125)))), (min((((/* implicit */long long int) (signed char)114)), (arr_5 [7U] [i_2]))))), (min((-1LL), (((/* implicit */long long int) -1))))));
                        var_24 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)-122)), (4565006769444770476LL)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 4; i_5 < 10; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (short i_7 = 2; i_7 < 11; i_7 += 3) 
                {
                    {
                        var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_17 [i_7] [1LL] [i_7 + 1] [i_7 - 2] [i_7]), (((/* implicit */unsigned short) arr_1 [i_7 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4565006769444770497LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-26439))))) : (-4565006769444770481LL)));
                        arr_21 [8ULL] [(short)5] [i_5] = ((/* implicit */long long int) var_15);
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
    var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_18))));
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_6))));
}
