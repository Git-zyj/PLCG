/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68306
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((signed char) (_Bool)1));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)177))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_4 [i_1] [i_1] [i_1 + 2])))))));
                        var_11 *= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (signed char)29)), (arr_3 [i_1 + 2]))), (min((arr_3 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_0 [i_2 + 1]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 4; i_4 < 9; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned int) (!(arr_4 [i_4 - 3] [i_4 - 4] [i_4 - 4])));
        var_12 -= ((/* implicit */short) ((signed char) arr_12 [i_4 + 1]));
        var_13 += (+(((/* implicit */int) var_8)));
        var_14 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)97)))) <= (((/* implicit */int) arr_0 [i_4]))));
    }
    var_15 = ((/* implicit */signed char) var_9);
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_4))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    arr_22 [(unsigned char)2] [i_6] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (short)11))))));
                    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22872)) ? (((/* implicit */int) (short)10032)) : (((/* implicit */int) (unsigned char)177))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [1])) : (((/* implicit */int) var_3)))))))) <= (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) arr_7 [i_5] [i_5])) : (((/* implicit */int) (unsigned char)78))))));
                }
            } 
        } 
    } 
}
