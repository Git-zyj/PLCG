/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7337
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
    var_11 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), ((unsigned short)64254)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)17769))))) : ((~(9805151283732649392ULL)))))) ? ((+(var_6))) : (var_7));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned char) var_10);
                    var_13 ^= ((/* implicit */long long int) min((((((/* implicit */int) arr_7 [20LL] [i_0] [18U] [(unsigned char)10])) > (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (arr_5 [i_1] [i_2]) : (2181431069507584LL)))) && (((_Bool) var_7))))));
                    arr_8 [(_Bool)1] [(_Bool)1] [i_1] = var_1;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0 + 1] [i_1 + 1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) (unsigned short)17757);
                                arr_15 [i_1] [i_2] [(unsigned short)20] [(short)2] = ((/* implicit */unsigned short) var_5);
                                var_14 = ((/* implicit */unsigned short) ((arr_11 [i_0] [i_1] [i_1] [i_1] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) && (((/* implicit */_Bool) var_5))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 4; i_5 < 20; i_5 += 3) 
                {
                    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_16 [i_0] [0] [i_5 + 3] [i_5])) ? (arr_17 [(_Bool)1] [i_1] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 2] [12LL] [i_5] [i_1] [i_5])))))))) <= ((((!(((/* implicit */_Bool) (unsigned short)44021)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5 - 4] [8ULL])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-49)))))) : (arr_17 [(_Bool)1] [i_1 - 1] [i_1])))));
                    var_16 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_5 - 1] [i_1])))) + (((/* implicit */int) ((-1908001303) < (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [3LL] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                                arr_25 [(_Bool)1] [i_1] = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-97)))) ^ (((/* implicit */int) ((short) (short)63)))));
                                arr_26 [i_1] [i_6 + 2] [i_1] [i_1] [i_5 - 1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) (short)72));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 2) 
                {
                    arr_29 [i_8] [i_1] [i_1 - 1] = ((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) (unsigned short)47767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)210))))))));
                    var_18 = ((/* implicit */signed char) -1908001291);
                    var_19 += ((/* implicit */unsigned char) (-(((/* implicit */int) min((((unsigned short) arr_2 [i_1])), (((unsigned short) (signed char)-39)))))));
                }
                for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    arr_34 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]))))) ? (((((/* implicit */int) arr_1 [i_0] [i_9])) / ((-(((/* implicit */int) (unsigned char)210)))))) : (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_9] [i_0])) ? (((/* implicit */int) arr_3 [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) 18128454435115780438ULL)))))))));
                    arr_35 [i_1 + 1] [i_1] [(unsigned char)13] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_9 [i_1 - 1] [i_0 + 1] [i_9] [i_1]), (arr_9 [i_1 - 2] [i_0 - 2] [i_0 - 2] [i_1]))))));
                }
                var_20 *= ((/* implicit */unsigned int) (_Bool)0);
                var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(arr_19 [i_0 + 1] [(unsigned short)2] [i_0])))), (arr_27 [i_0 + 2] [(signed char)6] [i_1 - 1])))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-64))) + (arr_28 [i_0 + 2] [(signed char)10] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) var_9)), (var_7))))))));
            }
        } 
    } 
}
