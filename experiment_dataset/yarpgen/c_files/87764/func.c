/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87764
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (_Bool)1)), ((+(arr_7 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_1])))));
                                arr_12 [i_0] [i_2] |= ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */signed char) min((((int) arr_2 [i_0] [i_0] [i_2])), (((/* implicit */int) ((short) arr_2 [i_0] [i_0] [i_0])))));
                                arr_17 [i_0] [i_0] [11LL] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((-9355347) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)197)) <= (arr_5 [i_1]))))));
                                var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294626514U)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)215))))) : (((4294626514U) / (340784U)))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_1] = var_7;
                    arr_19 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) arr_4 [i_1] [i_1] [i_1]);
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) 4294626514U);
        var_24 = ((/* implicit */_Bool) arr_3 [2ULL] [i_0] [(unsigned short)5]);
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) 43608017)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_7] [i_7] [i_7] [i_7] [i_7] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))) : (2360428324U)))) : (((((/* implicit */_Bool) arr_13 [i_9] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) : (13931478407992914633ULL)))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((1791599865) > (((/* implicit */int) (unsigned char)50)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1956642882U)))))))));
                        var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14167059443587313507ULL)) ? (((/* implicit */unsigned long long int) 1234128224)) : (18446744073709551602ULL)))) ? (4279684630122238087ULL) : (((/* implicit */unsigned long long int) arr_26 [i_8 + 1] [i_7]))))) ? (-9355353) : (((/* implicit */int) var_12))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_19))));
    var_29 &= ((/* implicit */short) (~(((/* implicit */int) var_8))));
    var_30 = ((/* implicit */long long int) var_8);
}
