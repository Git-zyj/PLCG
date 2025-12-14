/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64866
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
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0 - 3]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(3566712446U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((9166637139258314302LL) >> (((((/* implicit */int) (unsigned short)30386)) - (30372)))))) ? (((/* implicit */int) arr_7 [i_0 - 3] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_5)))))));
                        var_13 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_4 [i_3] [i_2] [i_1])) / (((/* implicit */int) var_1))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) (unsigned short)16383);
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_13 [i_4] [i_4]) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_12 [i_4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) (unsigned short)20203))))) : (((((/* implicit */_Bool) (unsigned short)35149)) ? (1504842236U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))))));
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) (unsigned short)20209))));
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (14547914501330512250ULL)))) >= (((/* implicit */int) arr_16 [(signed char)6] [i_5])))), (min(((_Bool)1), (((((/* implicit */_Bool) arr_18 [i_5])) && (arr_13 [i_5] [i_5])))))));
        var_16 = ((/* implicit */_Bool) min(((((_Bool)1) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_13 [(unsigned short)6] [i_5]))));
        var_17 = ((/* implicit */unsigned long long int) max(((unsigned short)22988), (((/* implicit */unsigned short) (_Bool)1))));
        var_18 = ((/* implicit */unsigned long long int) var_7);
        arr_20 [i_5] = ((/* implicit */_Bool) ((((arr_13 [(unsigned short)1] [i_5]) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [18LL] [i_5]))))))) ? (((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_5])) == (((/* implicit */int) (unsigned short)20209))))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((signed char) ((2061356868U) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    }
}
