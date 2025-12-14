/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64153
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 *= ((/* implicit */_Bool) var_9);
                                var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (unsigned short)50708)))));
                                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)50702)))), (((((/* implicit */_Bool) ((unsigned int) var_14))) ? (3631787814U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11958)))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)14828))) ? (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) var_10)) : (var_0))) : (((/* implicit */int) var_10))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1] [(_Bool)1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) max((-16), (((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) max((((unsigned int) var_12)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */int) (short)11)) : (var_1))))))) : (((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (arr_10 [i_0] [(unsigned short)4] [i_1 + 1] [12ULL] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                                var_21 = var_14;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_22 = ((unsigned short) (short)2507);
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_11 [i_0] [i_8] [4]))));
                                var_24 &= ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_1] [i_0] = max((((/* implicit */unsigned char) (signed char)-106)), (var_10));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 1; i_9 < 22; i_9 += 3) 
    {
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            {
                arr_31 [i_9] [i_9] = ((/* implicit */int) max((arr_28 [i_10]), (((var_12) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11))))))));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_7))) ? (1ULL) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (signed char)105)))))))));
                arr_32 [i_9] [i_9] = ((/* implicit */_Bool) ((signed char) 131071ULL));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) max((((long long int) (!(((/* implicit */_Bool) arr_29 [i_9]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)7680)) : (-1603234195))))));
                            var_27 = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                            var_28 = ((_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_28 [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */int) var_6)), (16))) : ((-(((/* implicit */int) ((short) (unsigned char)2)))))));
    var_30 = ((/* implicit */_Bool) ((unsigned char) (unsigned short)50722));
}
