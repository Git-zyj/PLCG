/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66399
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) min(((unsigned char)2), (((/* implicit */unsigned char) (_Bool)1))));
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((((/* implicit */int) min((var_11), (((/* implicit */short) arr_6 [18LL] [i_1]))))) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0] [i_2])) - (155)))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)32704)))) ^ (((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-32705))))))))))));
                    arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) arr_4 [i_2] [i_1] [i_0]);
                    arr_9 [i_2] [i_1] [i_0] [18U] &= ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (short)32726))));
                    arr_10 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned short) (_Bool)1);
                }
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    arr_15 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_3])) ? (var_12) : (((/* implicit */unsigned int) var_0)))) ^ (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))))))));
                    arr_16 [i_3] [i_0] [i_0] = ((((/* implicit */int) max((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)-32722)))) / (((/* implicit */int) ((unsigned char) arr_0 [i_3] [i_3]))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_8))));
                                arr_25 [i_0] [i_4] [i_4] [i_4] [i_5] [5] = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) ((short) arr_21 [i_5] [i_6]))), ((+(((/* implicit */int) arr_21 [(unsigned char)2] [i_1])))))));
                            }
                        } 
                    } 
                    arr_26 [(unsigned short)5] [i_1] [i_1] [i_4] = ((unsigned int) arr_4 [i_0] [8U] [i_4]);
                    arr_27 [i_0] [i_0] |= ((/* implicit */unsigned char) max((((var_4) ^ (min((arr_23 [i_0] [i_1]), (((/* implicit */unsigned long long int) (-2147483647 - 1))))))), (((/* implicit */unsigned long long int) max((arr_20 [i_1]), (arr_20 [i_0]))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_8 = 2; i_8 < 24; i_8 += 3) /* same iter space */
        {
            arr_32 [i_7] [i_7] [i_7 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17590))))) && (((/* implicit */_Bool) ((unsigned int) (_Bool)0))))) ? (max((arr_29 [i_7]), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)176)), (var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)56), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [14LL] [i_8]))) : (((unsigned int) (short)(-32767 - 1))))))));
            arr_33 [(signed char)22] &= ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) var_14)) * ((~(arr_29 [i_7]))))));
            arr_34 [i_7] [i_7] = ((/* implicit */unsigned int) arr_28 [i_7] [i_7]);
        }
        for (unsigned short i_9 = 2; i_9 < 24; i_9 += 3) /* same iter space */
        {
            arr_37 [(unsigned char)12] [i_7] = ((/* implicit */short) var_9);
            arr_38 [i_7 + 2] [i_9] [i_7] = ((/* implicit */_Bool) min((((arr_29 [i_9 + 1]) ^ (arr_29 [i_9 - 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)53)), (2147483647))))));
        }
        for (unsigned short i_10 = 2; i_10 < 24; i_10 += 3) /* same iter space */
        {
            arr_41 [i_7] [i_7] [i_10 - 2] = ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)));
            var_19 ^= arr_40 [(unsigned char)4];
        }
        for (unsigned short i_11 = 2; i_11 < 24; i_11 += 3) /* same iter space */
        {
            arr_46 [i_7 + 3] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) var_0))) ^ (((/* implicit */int) ((short) var_4))))) / (1073217536)));
            arr_47 [i_7] [i_11] = ((/* implicit */unsigned int) (short)-32694);
            var_20 -= ((/* implicit */short) (_Bool)1);
        }
        arr_48 [i_7] = (~(1073217529));
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((int) (short)32719)))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_4))));
            arr_51 [i_7] [i_7] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (short)-32705)))))));
        }
    }
    var_23 = ((/* implicit */int) min((var_3), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)32719)))))));
}
