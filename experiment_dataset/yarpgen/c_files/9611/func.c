/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9611
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_3)) : (((var_6) << (((((/* implicit */int) var_4)) - (59058)))))));
    var_20 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])), (arr_7 [i_0] [i_3]))))) : (min((var_8), (arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] [10LL])))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)32755))))))))));
                                arr_14 [i_0] [i_4] [i_0] = (short)-14854;
                                var_22 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) var_3)), (arr_1 [i_0])))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_10 [i_1]) : (((/* implicit */int) arr_6 [i_0] [i_1]))))), ((-(arr_2 [i_3] [i_3] [i_1])))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            {
                arr_21 [i_5] = (!(((/* implicit */_Bool) (-(arr_8 [i_5])))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), ((-(arr_1 [(_Bool)1])))));
                            /* LoopSeq 2 */
                            for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                            {
                                arr_29 [(short)16] [(short)16] [i_7] [(short)16] [i_5] = ((/* implicit */long long int) (~(2840866852U)));
                                var_25 ^= ((/* implicit */unsigned int) ((int) arr_22 [i_5] [i_6] [9ULL]));
                            }
                            for (unsigned char i_10 = 2; i_10 < 18; i_10 += 2) 
                            {
                                var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)8230)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)(-32767 - 1))))), (max((arr_28 [i_10 - 2] [(signed char)15] [i_10 - 1] [i_10 + 1] [(short)7]), (arr_28 [i_10] [(short)8] [i_10 - 1] [i_10 - 2] [i_6])))));
                                var_27 = ((/* implicit */short) (~(((min((1454100443U), (2840866856U))) / (((/* implicit */unsigned int) ((arr_15 [i_5]) ? (((/* implicit */int) arr_16 [12LL])) : (var_13))))))));
                                var_28 |= ((/* implicit */_Bool) min((max(((-(464577446U))), (((/* implicit */unsigned int) (short)24488)))), (3830389849U)));
                                var_29 = ((/* implicit */short) (_Bool)1);
                            }
                            var_30 = ((/* implicit */short) min((((/* implicit */int) min(((short)32767), ((short)32765)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_7])) : (((/* implicit */int) ((unsigned char) arr_19 [i_5])))))));
                        }
                    } 
                } 
                arr_32 [(short)7] [i_6] [i_5] = max((8497551907766328459LL), (((/* implicit */long long int) 4294967272U)));
            }
        } 
    } 
}
