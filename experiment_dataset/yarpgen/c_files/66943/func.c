/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66943
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) (-(((((/* implicit */_Bool) (short)32767)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) (short)32767)))))))))))));
    var_11 -= ((long long int) min((var_3), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_12 = var_2;
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned long long int) ((201500259) & (((/* implicit */int) (short)-32767))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0 - 3] [i_0 - 3] [i_2] [i_0 - 3] [i_4 + 1] = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]);
                                var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((+(arr_9 [i_0] [i_0] [i_2] [i_3 - 1] [6ULL] [i_4 - 1])))));
                                arr_15 [i_3] [(unsigned char)16] [(signed char)22] [i_3 - 2] [i_2] [i_0] [i_4] = ((/* implicit */int) (!(((((/* implicit */int) var_6)) < (((/* implicit */int) var_6))))));
                                arr_16 [10ULL] [i_1] [10ULL] [i_3 + 1] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) ((short) var_2));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) == (arr_3 [i_0 + 2])));
        var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((((/* implicit */_Bool) 512673154U)) ? (((/* implicit */long long int) 4294967295U)) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))));
    }
    for (long long int i_5 = 3; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)1585)), (arr_11 [i_5] [i_5 + 2] [i_5 - 2] [15ULL] [i_5 + 1] [i_5 + 1] [i_5 + 1]))))));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)42005)))), (((/* implicit */int) max((var_5), (((/* implicit */short) (signed char)-13)))))))) ? (((((((/* implicit */_Bool) var_9)) ? (360044038U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_4)), ((signed char)85)));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                                var_22 += ((/* implicit */unsigned char) (+(-1960741361)));
                                var_23 -= ((_Bool) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5 - 3] [i_5 - 1] [5ULL])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-63)), (var_8)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-85))))) : (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) (unsigned short)65535))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_6))))) & (((unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (_Bool)0)))))));
    }
}
