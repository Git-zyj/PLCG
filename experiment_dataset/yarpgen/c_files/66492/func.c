/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66492
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
    var_20 *= ((/* implicit */unsigned long long int) (signed char)50);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) -3675550030889713878LL);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [0] [i_2] [i_3] [i_0] [i_4] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-51)) < (((/* implicit */int) (signed char)50)))) ? (arr_11 [i_0] [i_1] [i_0] [(_Bool)1] [(short)2]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-84)) % (((/* implicit */int) (unsigned short)53681)))))))), (min((((/* implicit */unsigned long long int) ((-519903576) <= (((/* implicit */int) var_18))))), (7137591463894601747ULL)))));
                                var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [6ULL] [4] [i_0]), (((/* implicit */long long int) (signed char)83))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : ((~(2571716752979952177ULL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (signed char i_6 = 3; i_6 < 8; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 7; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (-(519903576)));
                                arr_26 [i_0] [i_6] [i_0] [i_1] [7] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) (unsigned short)0)) ? (7137591463894601747ULL) : (((/* implicit */unsigned long long int) 206533244)))) % (((((/* implicit */unsigned long long int) -519903576)) | (arr_22 [i_0] [i_1] [i_5] [i_1] [(unsigned char)1] [i_5]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1089822135354557474LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)65535)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            arr_33 [i_0] [i_0] [(unsigned char)1] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (signed char)127))));
                            var_23 = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
                            var_24 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8448949181450326613ULL)) ? (9291561993944853077ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1 + 1] [i_1 - 2] [i_8] [i_8] [i_1 - 2]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_6 [i_1 - 2])), (arr_21 [i_1 - 1] [i_1 - 2] [i_8] [6LL] [i_9])))))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_1))));
                        }
                    } 
                } 
                arr_34 [i_0] [i_0] = ((/* implicit */int) 0U);
            }
        } 
    } 
}
